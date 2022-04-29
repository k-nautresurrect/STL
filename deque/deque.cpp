#include <iostream>
#include <deque>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
	deque<int> dq = {30, 10, 20};
	dq.push_front(10);
	dq.push_back(30);

	for (auto &x : dq) cout << x << " ";
	cout << endl;
	auto it = dq.begin();
	it  = dq.insert(it, 50); // insert before the itreator.
	cout << *(++it) << endl;
	for (auto &it : dq) cout << it << " ";
	cout << endl;

	it = dq.erase(it);
	for (auto &it : dq) cout << it << " ";
	cout << endl;
	cout << *it << endl;

	return 0;
}