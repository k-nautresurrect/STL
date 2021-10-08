#include<iostream>
#include<vector>

using namespace std;

int main() {
	/*
		vector is a dynamically allocated array
		which can increase it's size if the data exceeds
		the initial size it grows to more n that is defined
		earlier even if the input is only 1 greater then n.
	*/
	vector<int> a; //declaration of the vector a.
	vector<int> b(5, 10); // 5 int with each value of 10.
	vector<int> c(b.begin(), b.end()); // copy all the element of b in c.
	vector<int> d{1, 2, 3, 4, 5}; // just like an array we can declare and initialize the vector.

	// iterate over item
	for (int i = 0; i < c.size(); i++) {
		cout << c[i] << " ";
	} cout << "\n";

	// iterate using iterator class in vector<int>
	for (auto it = b.begin(); it != b.end(); it++) {
		cout << (*it) << " ";
	} cout << "\n";
	// auto can be replaced with vector<int> :: iterator.

	// iterate using foreach loop
	for (int x : d) {
		cout << x << " ";
	} cout << "\n";


	vector<int> v;
	int n;  cin >> n;
	for (int i = 0; i < n; i++) {
		int no; cin >> no;
		v.push_back(no);
	}
	// doubling memory while pushing back elemnt can be expensive
	// as in vector it will delte old n one and find a block of 2*n ones
	// then copy the elemnt of previous elemnt and enter new one in 2*n vector.
	for (int x : v) {
		cout << x << " ";
	} cout << "\n";

	// understanding at memory level the differnce in the 2.
	cout << v.size() << endl;
	cout << v.capacity() << endl; //size of underlying array
	cout << v.max_size() << endl; // maximum no of element a vector can hold

	cout << d.size() << endl;
	cout << d.capacity() << endl; //size of underlying array
	cout << d.max_size() << endl;

	d.pop_back(); // remove the last element O(1)

	d.insert(v.begin() + 3, 4, 100);
	//			^		    ^	^
	//    iterator in d, times, inserted vallue

	// we avoid shrink operation.
	d.resize(3);
	cout << d.capacity() << endl; //capacity will only change if the size is bigger than the previous size.

	d.clear();
	// remove all the element in vector, doesn't delete the memory occupied by array.

	//empty
	if (d.empty()) {
		cout << "The size is zero." << endl;
	}
	cout << d.front() << endl;
	cout << d.back() << endl;

	// reserve-
	int g;
	cin >> g;
	vector<int> vec;
	//to avoid doubling, we will use reserve
	vec.reserve(50);


	for (int i = 0; i < n; i++) {
		int no;  cin >> no;
		vec.push_back(no);
		cout << vec.capacity() << endl; //capaity will remain same througout untill 50 elements.
	}
	cout << vec.capacity() << endl;

	return 0;
}