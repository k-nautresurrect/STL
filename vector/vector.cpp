#include <iostream>
#include <vector> // for vectors
// #include <string> // not necessary to use strings

using namespace std;

int main() {
	vector<int> v(5); // int vector with size
	vector<char> p(5); // char vector with size
	vector<string> s(5); // string vector with size

	string str = "mynameis";

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	for (auto i : v) {
		cout << i << " ";
	}
	cout << endl;

	for (int i = 0; i < p.size(); i++) {
		cout << p[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < s.size(); i++) {
		cout << s[i] << " ";
	}
	cout << "S" << str << endl;

}