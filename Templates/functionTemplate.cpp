#include <iostream>

using namespace std;

template <typename T>
T arr_max(T arr[], T n ) {
	T max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int main() {
	int arr[5] = {1, 2, 3, 4, 5};
	char ar[5] = {'a', 'z', 'c', 'o'};
	float a[5] = {1.2, 1.4, 5.6, 2.3, 2.2};

	cout << "the max of the array using template" << endl;
	cout << arr_max<int>(arr, 5) << endl;
	cout << arr_max<char>(ar, 5) << endl;
	cout << arr_max<float>(a, 5) << endl;
}