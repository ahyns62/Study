#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> v(10);

int main() {
	for (int i = 0; i < 5; i++) {
		v[i] = i;
	}

	cout << v.size() << "\n";

	v.resize(20, -1);
	v.clear();

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
}