#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, answer=0;
bool visited[101] = {false,};
vector< vector<int> > v;

void dfs(int f){
    visited[f] = true;

    for(int i=0; i < v[f].size(); i++){
        if(visited[v[f][i]] == false)
        {
            dfs(v[f][i]);
            answer++;
        }
    }

}

int main(void){
    cin >> N >> M;

    v.resize(N + 1);

    int a, b;
    while(M--){
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs(1);
    cout << answer;

    return 0;
}


