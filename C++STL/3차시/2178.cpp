#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
int N, M;
string map[100];
int dis[100][100];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
queue<pair<int,int>> q;

void bfs(int x, int y){
    q.push(make_pair(x,y));
    dis[x][y] = 1;
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 <= nx && nx < N && 0 <= ny && ny<M
            && dis[nx][ny] == 0 && map[nx][ny] == '1'){
                q.push(make_pair(nx, ny));
                dis[nx][ny] = dis[x][y] + 1;
            }
        }
    }
}
int main(void){
    cin >> N >> M;
    for(int i=0; i<N; i++)
        cin >> map[i];
    bfs(0,0);
        cout << dis[N - 1][M - 1];
}