#include <iostream>
#include <string>

using namespace std;

int main() {
    int N; 
    string s;
    cin >> N;

    while (N--) {
        cin >> s;
        cout << s[0] << s[s.size() - 1] << "\n";
    }
   
}