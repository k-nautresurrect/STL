// return a list of smaller elements tha k in a given vector
#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		int el;
		cin >> el;
		v.push_back(el);
	}

	for (auto it = v.begin(); it != v.end(); it++) {
		if ((int)*it < k) {
			cout << *it << " ";
		}
	}
	cout << endl;
}