// design a datastructure that supports these particular
// operation in o(1)
// insert_min(num)
// insert_max(num)
// get_min()
// get_max()
// extract_min()
// extract_max()
// make() : rearange in a specifying order

#include <iostream>
#include <deque>
#include <algorithm>
#include <utility>

using namespace std;

template <typename T>
class ladder {
private:
	T value;
	deque<T> ladder_steps;
public:
	auto insert_min(T &step) {
		value = step;
		ladder_steps.push_front(step);
		return ladder_steps.begin();
	}

	auto insert_max(T &step) {
		value = step;
		ladder_steps.push_back(step);
		return ladder_steps.rend();
	}

	auto get_min() {
		return *max_element(ladder_steps.begin(), ladder_steps.end());
	}

	auto get_max() {
		return *min_element(ladder_steps.begin(), ladder_steps.end());
	}

	auto extract_min() {
		auto min_step = min_element(ladder_steps.begin(), ladder_steps.end());
		min_step = ladder_steps.erase(min_step);
		return min_step;
	}

	auto extract_max() {
		auto max_step = max_element(ladder_steps.begin(), ladder_steps.end());
		max_step = ladder_steps.erase(max_step);
		return max_step;
	}

	void make() {
		sort(ladder_steps.begin(), ladder_steps.end());
	}

	void print_ladder() {
		cout << "[ ";
		for (auto &step : ladder_steps) cout << step << " ";
		cout << "]" << endl;
	}
};


int main() {
	ladder<int> ld;
	int n; cin >> n;

	for (int step = 0; step < n / 2; step++) ld.insert_max(step);
	ld.print_ladder();
	for (int step = n / 2; step < n; step++) ld.insert_min(step);
	ld.print_ladder();
	ld.get_max();
	ld.get_min();

	ld.extract_max();

	ld.make();
	ld.print_ladder();
}

