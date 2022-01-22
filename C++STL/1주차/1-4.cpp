#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
int x, y;
vector<pair<int, int> > v; // xÁÂÇ¥, yÁÂÇ¥

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> N;
    while (N--) {
        cin >> x >> y;
        v.push_back({ x, y });
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i].first << " " << v[i].second << "\n";
    }
}