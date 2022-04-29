#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main() {
	vector<int>v = {1, 2, 3, 4, 5};
	vector<int>::iterator itr = v.begin();
	// iterator have there own data type
	//int* p = itr; // cannot be converted

	cout << (*itr) << endl;
	cout << (*itr) + 1 << endl;
	auto it = (*itr) + 1;
	cout << &(*itr) << endl; // adress of the element

	cout << &(itr) << endl; // adress of the iterator
	cout << &(it) << endl; // adress of the iterator+1

	auto ptr = v.end();
	itr = next(itr);
	cout << (*itr) << endl;
	itr = next(itr, 3);
	cout << (*itr) << endl;
	itr = prev(itr, 4);
	cout << (*itr) << endl;
	advance(itr, 2);
	cout << (*itr) << endl;
}