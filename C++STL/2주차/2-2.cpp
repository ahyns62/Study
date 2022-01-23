#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        string st; cin >> st;
        stack<char> s;
        int chk = 0;
        for (int i = 0; i < st.size(); i++) {
            if (st[i] == '(') {
                s.push('(');
            }
            else {
                if (s.empty()) {
                    cout << "NO\n";
                    chk = 1;
                    break;
                }
                else {
                    s.pop();
                }
            }
        }
        if (s.empty() && chk == 0) { cout << "YES\n"; }
        else if (!s.empty()) {
            cout << "NO\n";
        }
    }
}