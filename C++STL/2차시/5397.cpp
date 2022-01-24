/*** 
'<' 만나면 왼쪽 스택이 비지 않으면 왼쪽스택값을 오른쪽 스택으로 옮김
'>' 만나면 오른쪽 스택이 비지 않으면 오른쪽스택값을 왼쪽 스택으로 옮김
'-' 만나면 왼쪽 스택값 지움
다른 문자 만나면 왼쪽 스택에 넣음
왼쪽 스택값을 하나씩 빼서 오른쪽 스택에 넣음
오른쪽 스택에서 하나씩 값을 빼며 출력
***/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    int N;
    int cur;
    int i;
    int j;
    char c;
    string str;
    stack<char> s1;
    stack<char> s2;

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N;

    for (i = 0; i < N; i++) {
        cin >> str;

        for (j = 0; j < str.length(); j++) {
            c = str[j];
            if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z') || ('0' <= c && c <= '9')) {
                s1.push(c);
            }

            else if (c == '<' && !s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
            else if (c == '>' && !s2.empty()) {
                s1.push(s2.top());
                s2.pop();

            }
            else if (c == '-' && !s1.empty()) {
                s1.pop();
            }
        }

        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        while (!s2.empty()) {
            cout << s2.top();
            s2.pop();
        }

        cout << "\n";
    }

    return 0;
}