#include <iostream>
#include <forward_list>
#include <vector>

using namespace std;

void printList(forward_list<int> &ls) {
	for (auto it = ls.begin(); it != ls.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	forward_list<int> ls = {5, 3, 8};
	ls.push_front(8);
	ls.assign({1, 23, 7, 4}); // creates a new linked list with these values
	ls.push_front(7);
	ls.remove(7); // remove all instance of forward list
	// forward_list<int>::iterator
	printList(ls);

	// assigining the values from non primitive dt
	vector<int> v = {56, 8, 7, 59};
	int arr[] = {47, 89, 90, 75};
	ls.assign(v.begin(), v.end());
	printList(ls);

	ls.assign(arr, arr + 4);
	printList(ls);
	ls.assign(5, 0); // assign 5 element with value 0

	// returns the iterator to the element which is changed
	auto it = ls.insert_after(ls.begin(), 9);
	printList(ls);
	cout << *it << endl;
	it = ls.insert_after(it, 8);
	it = ls.emplace_after(it, 10);
	printList(ls);
	// we cannot add or minus number from iterators in forward list
	it = ls.erase_after(it);
	cout << *it << endl;
	printList(ls);

	ls.reverse();
	printList(ls);

	ls.sort();
	ls.pop_front();
	printList(ls);

}