// given an array find out the max of every subarray
// of size k <= n

#include <iostream>
#include <deque>
#include <algorithm>
#include <utility>
#include <vector>

using namespace std;

vector<int> brute(vector<int> &v, int k) {
	vector<int> res;
	int n = v.size();
	for (int el = 0; el <= n - k; el++) {
		int maxel = v[el];
		for (int nxt = 0; nxt < k; nxt++) {
			if (maxel < v[nxt + el]) {
				maxel = v[nxt + el];
			}
		}
		res.push_back(maxel);
	}
	return res;
}

vector<int> vecbrute(vector<int> &v, int k) {
	vector<int> res;
	for (auto el = v.begin(); el != v.end() - k + 1; el++) {
		res.push_back((int)*max_element(el, el + k));
	}
	return res;
}

vector<int> optdeque(vector<int> &v, int k) {
	int n = v.size();
	deque<int> window;
	vector<int> res;
	int idx;
	for (idx = 0 ; idx < k ; idx++) {
		while (!window.empty() && v[idx] >= v[window.back()]) {
			window.pop_back();
		}
		window.push_back(idx);
	}
	for (; idx < n; idx++) {
		res.push_back(v[window.front()]);
		while (!window.empty() && v[idx] >= v[window.back()]) window.pop_back();
		while (!window.empty() && window.front() <= idx - k) window.pop_front();
		window.push_back(idx);
	}
	res.push_back(v[window.front()]);

	return res;
}

int main() {
	int n, k; cin >> n >> k;
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		int el; cin >> el;
		arr.push_back(el);
	}

	vector<int> show = brute(arr, k);
	for (int &val : show ) cout << val << " ";

	cout << endl;
	vector<int> show2 = vecbrute(arr, k);
	for (int &val : show2) cout << val << " ";

	cout << endl;
	vector<int> optim = optdeque(arr, k);
	for (int &val : optim) cout << val << " ";
	cout << endl;
}