#include <iostream> // normal io stream
#include <iterator> // template of iterators
#include <algorithm> // various function algo wise
#include <vector> // for vectors
#include <numeric> // for accumulate

using namespace std;

bool cmp(int &a, int &b) {
	return a > b;
}

// best way to traverse is using refrence or pointer
// other for each method should be used as for(int &r : v)
void printvec(vector<int>&v) {
	for (auto it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	vector<int>v{1, 2, 8, 4, 10, 5};
	cout << v.size() << endl;

	sort(v.begin(), v.end(), cmp);
	printvec(v);
	sort(v.begin(), v.end());
	printvec(v);

	reverse(v.begin(), v.end());
	printvec(v);

	// summation from begin to end with 0 + other value
	cout << accumulate(v.begin(), v.end(), 0) << endl;
	// accumulate(starting index, end + 1, initial value)

	// substraction from 0 - all the element in array
	cout << accumulate(v.begin(), v.end(), 0, minus<int>()) << endl;

	cout << *max_element(v.begin(), v.end()) << endl; // O(n)
	cout << *min_element(v.begin(), v.end()) << endl; // O(n)

	cout << count(v.begin(), v.end(), 1) << endl; // O(n)

	vector<int> vec;
	vec.push_back(0);
	vec.push_back(90);
	vec.push_back(17);
	vec.push_back(23);
	vec.push_back(90);
	vec.push_back(18);

	cout << vec.capacity() << endl;
	cout << vec.size() << endl;
	cout << vec.max_size() << endl; // maximum size possible
	vec.resize(5);
	cout << vec.size() << endl; // size will change not capacity
	cout << vec.capacity() << endl; // 8
	vec.shrink_to_fit(); // destroy unused places in vector
	cout << vec.capacity() << endl; // capacity get reduced to 5.

	cout << vec.front() << endl;
	cout << vec.back() << endl;
	// only insert on the existence index
	cout << *vec.insert(vec.begin() + 4, 78) << endl;

	// remove the element for which iterator is given
	vec.erase(vec.begin() + 2);
	// to delete a range
	vec.erase(vec.begin(), vec.begin() + 2);
	cout << *(vec.begin() + 2) << endl;
	cout << vec.size() << endl;
	vec.resize(0);
	cout << (bool)vec.empty() << endl;


}