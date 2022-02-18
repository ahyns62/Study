#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<char, char>> tree(100);
int chk[100];

int N;
char P, L, R;

void preorder(char index){
    cout << index; //root
    if(tree[index].first != '.') preorder(tree[index].first);//left subtree
    if(tree[index].second != '.') preorder(tree[index].second); //right subtree
}

void inorder(char index){
    
    if(tree[index].first != '.') inorder(tree[index].first);//left subtree
    cout << index; //root
    if(tree[index].second != '.') inorder(tree[index].second); //right subtree
}

void postorder(char index){
    
    if(tree[index].first != '.') postorder(tree[index].first);//left subtree
    if(tree[index].second != '.') postorder(tree[index].second); //right subtree
    cout << index; //root
}

int main(){

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> P >> L >> R;
        tree[P] = {L, R};
    }
    preorder('A');
    cout << '\n';

    inorder('A');
    cout << '\n';

    postorder('A');
    cout << '\n';
}
