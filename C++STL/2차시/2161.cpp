#include <iostream>
#include <queue>

using namespace std;

queue<int> q;
int N;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> N;
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }
    while (q.size() > 1) {
        cout << q.front() << " ";
        q.pop();
        q.push(q.front());
        q.pop();
    }

    cout << q.front() << endl;
    return 0;

}