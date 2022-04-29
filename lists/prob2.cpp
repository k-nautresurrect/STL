// design a datastructure supporting the operation
// insert(num): insert at the end
// replace(num1, num2): replace element num1 with num2
// print(): it should print the sequence

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

template <typename T>
class replace_stack {
private:
	T value;
	list<T> r_stack;
public:
	auto insert(T new_val) {
		value = new_val;
		r_stack.push_back(value);
		return r_stack.back();
	}

	auto replace(T old_val, T new_val) {
		value = new_val;
		auto it = find(r_stack.begin(), r_stack.end(), old_val);
		it = r_stack.erase(it);
		r_stack.insert(it, value);
		return it;

	}

	void print() {
		cout << "[ ";
		for (auto i = r_stack.begin(); i != r_stack.end(); i++) cout << *i << " ";
		cout << "]" << endl;
	}
};

int main() {
	replace_stack<int> rstk;
	int n; cin >> n;
	for (int i = 0; i < n; i++) rstk.insert(i);

	auto itr = rstk.replace(3, 4);
	itr--; itr--;
	cout << *itr << endl;
	rstk.print();
	return 0;
}