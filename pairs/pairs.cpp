#include <iostream>
#include <utility>  // for pairs

using namespace std;

int main() {
	pair<int, int> p(20, 30);
	pair<int, string> ps(20, "apple");

	cout << p.first << endl;
	cout << ps.second << endl;
}
