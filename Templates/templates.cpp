#include <iostream>
#define summacro(x,y)      ((x+y)); // macro don't do type checking

using namespace std;

template <typename T>  // it does type checking
T sum(T a, T b) {
	return a + b;
}

int main() {

	cout << "runing templates sum" << endl;

	cout << sum<int>(4, 5) << endl;
	cout << sum<float>(10.23, 98.78) << endl;
	cout << "running macro sum" << endl;
	cout << summacro(67, 89);
	cout << endl;
	// it is not possible
	// cout << summacro(89, 78) << endl;

	return 0;
}