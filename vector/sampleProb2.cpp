#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b) {
	return (a.first > b.first);
}

int main() {
	vector<int> marks;
	vector<int> rollno;
	vector<pair<int, int>> list;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int mark; cin >> mark;
		marks.push_back(mark);
	}
	for (int i = 0; i < n; i++) {
		int rno; cin >> rno;
		rollno.push_back(rno);
	}
	for (int i = 0; i < n; i++) {
		list.push_back(make_pair(marks[i], rollno[i]));
	}
	sort(list.begin(), list.end(), cmp);
	for (auto it = list.begin(); it != list.end(); it++) {
		cout << (it->first) << " " << (it->second) << endl;
	}
	cout << endl;
}