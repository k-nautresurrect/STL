#include <iostream>
#include <list> // doubly linked list

using namespace std;

void printList(list<int> &ls) {
	for (auto it = ls.begin(); it != ls.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	list<int> ls = {2, 3, 6, 8};
	ls.push_back(5);
	ls.push_front(7);
	ls.push_front(4);
	ls.pop_front();
	printList(ls);

	auto it = ls.insert(ls.begin(), 9);
	it++;
	for (int i = 0; i < 3; i++) it++;
	it = ls.insert(it, 10);

	printList(ls);
	it = ls.erase(it);
	printList(ls);
	cout << *it << endl;

	ls.remove(3);
	printList(ls);

	cout << ls.front() << " " << ls.back() << endl;
	cout << ls.size() << endl;

	list<int> l1 = {10, 2, 3, 48, 9};
	list<int> l2 = {1, 13, 8, 56};

	// merging is done by comparing the value
	// at which it is inserted and the merging element
	l1.merge(l2);
	l1.erase(l1.begin());
	for (auto &it : l1 ) {
		cout << it << " ";
	}

	// remove consecutive duplicates from linked list
	ls.unique();

}