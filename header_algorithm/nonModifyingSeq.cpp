#include<iostream>
#include<algorithm>

using namespace std;


int main(){

	//initializing the array of only odd integer

	int arr[]={3,5,7,9,11};
	int n = sizeof(arr)/sizeof(arr[0]);


	auto all = all_of(arr, arr+n, [](int i){ return i%2; });
	//takes 3 parameter starting ending and pred (UnaryPredicate).
	//-> predicates are function that return boolean values.
	//-> it takes a single parameter to decide the boolean value.

	

	cout << all << endl;
}