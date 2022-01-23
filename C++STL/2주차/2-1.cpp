#include <iostream>
#include <stack>
#include <string>

using namespace std;

int N;
string st;
stack<int> s;

int main() {
	cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> N;
    while (N--) {
        cin >> st;
        if (st == 'top') {
            if (st.empty()) {
                cout << "-1\n";
            }
            else {
                cout << s.top() << "\n";
            }
        }
        else if(st == "push"){
            int x; cin >> x;
            push(x);
        }
        else if (st == "pop") {
            if (st.empty()) {
                cout << "-1\n";
            }
            else {
                cout << s.top() << "\n";
                s.pop();
            }
        }
        else if (st == "size") {
            cout << s.size();
        }
        else if (st == "empty") {
            cout << s.empty();
        }
    }
}