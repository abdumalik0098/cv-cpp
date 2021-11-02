#include <iostream>
#include <vector>
#include<fstream>

using namespace std;

const int SIZE = 100000;
vector<int> adj[SIZE];
bool usd[SIZE];

int n,m;
int f,s;
void input() {
    ifstream in("input.txt");
    in>>n>>m;
    for (int i=0;i<m;++i) {
        in>>f>>s;
        adj[f].push_back(s);
        adj[s].push_back(f);
    }
}
void dfs(int cur) {
    usd[cur] = true;
    for (int i=0;i<adj[cur].size();++i) {
        int nxt = adj[cur][i];
        if (!usd[nxt])
            dfs(nxt);
    }
}

int components_amount_dfs() {
    int cnt = 0;
    for (int i=1; i<=n; ++i) {
        if (!usd[i]) {
            dfs(i);
            ++cnt;
        }
    }
    return cnt;
}
int main() {

    input();
    cout<<" "<<components_amount_dfs();
    return 0;
}
