#include <iostream>
#include <algorithm>
#include <vector>
#define sor(vec) sort((vec).begin(), (vec).end());
using namespace std;

int N;
int arr[1000001];
vector<int> v;

int main() {
	cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> N;

    int x;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + N);

    for (int i = 0; i < N; i++) {
        cout << arr[i] << "\n";
    }
}