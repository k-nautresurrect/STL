#include <iostream>

using namespace std;

template <typename T>
class PAIR {
private:
	T first, second;
public:
	PAIR(T a, T b) {
		first = a;
		second = b;
	}
	T getFirst() { return first; }
	T getSecond() { return second; }
};



int main() {
	PAIR<int>p(8, 9);

	cout << p.getFirst() << endl;
	cout << p.getSecond() << endl;

	PAIR<char> pr('b', 'n');
	cout << pr.getFirst() << endl;
	cout << pr.getSecond() << endl;

}