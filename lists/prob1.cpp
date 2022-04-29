// josephus problem given two number n and k
// there are n number of persons on a table and
// each kth person is being killed with
// reseting the first person position

#include <iostream>
#include <utility>
#include <list>
#include <algorithm>

using namespace std;

int main() {
	list<int> table;
	int n, k; cin >> n >> k;
	for (int prsn = 0; prsn < n; prsn++) table.push_back(prsn);

	// remove every kth element till one is left
	int numofprsn = table.size();
	int test = 0;
	auto killedPrsn = table.begin();
	while (numofprsn != 1) {
		// remove the kth element and update starting pos
		for (int kill = 1; kill < k; kill++) {
			killedPrsn++;
			// test++; // as after loop it will be = k if starts with 0;
			if (killedPrsn == table.end()) killedPrsn = table.begin();
		}
		// cout << "for testing : " << test << endl;
		killedPrsn = table.erase(killedPrsn);
		numofprsn--;
	}
	for (auto &killedPrsn : table) cout << killedPrsn << " ";
	cout << endl;
}