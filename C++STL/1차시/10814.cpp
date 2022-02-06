#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comp(pair<int, string> x, pair<int, string> y){
    return x.first < y.first;
}

int N;
vector<pair<int,string>> v;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> N; 

    for(int i = 1; i <= N ; i++){
        int a;
        string b;
        cin >> a >> b;
        v.push_back({a,b});
    }

    stable_sort(v.begin(), v.end(), comp); //안정 정렬(가입순 x)

    for(auto c : v){
        cout << c.first << " " << c.second << "\n";
    }
}