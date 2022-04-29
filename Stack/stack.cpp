#include <iostream>
#include <stack>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
	stack<int> stck;
	stack<pair<int, int>> pstck;

	stck.push(10); stck.push(20); stck.push(30);
	pstck.push(make_pair(23, 12)); pstck.push(make_pair(16, 9));

	cout << stck.size() << " " << pstck.size() << endl;

	for (int rEl = stck.size() - 1; rEl >= 0; rEl--) {
		cout << *(&stck.top() - rEl) << " ";
	}
	cout << endl;
	for (int el = 0; el < stck.size(); el++) {
		cout << (int)*(&stck.top() - el) << " ";
	}
	cout << endl;
	for (int pEl = 0; pEl < pstck.size(); pEl++) cout << *(&pstck.top().first) << " ";
	return 0;
}