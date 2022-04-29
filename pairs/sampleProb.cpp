// given an array sort accordingly to another array
#include <iostream>
#include <utility> // for pairs
#include <vector>  // for vectors
#include <algorithm> // for sort function

using namespace std;
// comparator function
bool compSecEl (pair<int, char> &a, pair<int, char> &b) {
	return (a.second < b.second);
}

int main() {
	int n; cin >> n;
	vector<pair<int, char>> vp;

	for (int i = 0; i < n; i++) {
		int el; cin >> el;
		char ch; cin >> ch;
		vp.push_back(make_pair(el, ch));
	}

	for (int i = 0; i < n; i++) {
		cout << vp[i].first << " : " << vp[i].second << " , ";
	}

	sort(vp.begin(), vp.end()); // sort by pairs first element

	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << vp[i].first << " : " << vp[i].second << " , ";
	}

	sort(vp.begin(), vp.end(), compSecEl);
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << vp[i].first << " : " << vp[i].second << " , ";
	}

	// decending order
	sort(vp.rbegin(), vp.rend());

	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << vp[i].first << " : " << vp[i].second << " , ";
	}

	sort(vp.rbegin(), vp.rend(), compSecEl);

	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << vp[i].first << " : " << vp[i].second << " , ";
	}
}