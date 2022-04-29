// print the element in sorted form also the previous index
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> prev;
	vector<int> vec;
	vector<pair<int, int>> res;

	int n;
	cin >> n;
	vec.reserve(n); prev.reserve(n);
	for (int i = 0; i < n; i++) {
		int el;
		cin >> el;
		prev.push_back(i);
		vec.push_back(el);
	}
	for (int i = 0; i < n; i++) {
		res.push_back(make_pair(vec[i], prev[i]));
	}
	sort(res.begin(), res.end());

	for (auto it = res.begin(); it != res.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
}