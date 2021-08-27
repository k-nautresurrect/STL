#include<iostream>
#include<algorithm>

using namespace std;

int main(){

	//In an sorted array

	int arr[] = {10,20,40,40,40,50,80,90};

	int n = sizeof(arr)/sizeof(arr[0]);
	int key = 40;
	auto search = binary_search(arr,arr+n,key);

	// cout << arr << endl;

	//binary_search returns an boolean expresioin so,

	// boolean search = binary_search(Starting_adress, ending_Adress, key);

	auto lb = lower_bound(arr, arr+n, key);

	// int * lb = lower_bound(arr, arr+n, key);
	//return adress of the element such that : element >= key .
	//-> returns very first occurence of the element

	// cout << lb <<endl;

	//to returns the index substract adress from initial ones 
	//gives the differemce between initial and the key adress.

	cout << (lb - arr) << endl;

	auto ub = upper_bound(arr, arr+n, key);

	// int * ub = upper_bound(arr, arr+n, key);
	//return the adress of the element such that : element > key.
	//-> returns the (very last occurence + 1) of the element.

	auto rng = equal_range(arr, arr+n, key);

	// cout << rng << endl;
	//equal_range will return an pair of <int *, int *> 

	cout << rng.first << " " << rng.second << endl;

	//rng.frst return the value of the first element in pair which is of type pointer.
	//-> first pointer will store the adress such that : element >= key
	//-> second pointer will store the adress such that : element > key
	//-> range returns [first, last).
	
	cout << (rng.second - rng.first) << endl;

	cout << (ub-arr) << endl;

	cout << "Occurence frequency of key : " << ((ub-arr)-(lb-arr)) << endl;

	cout << search << endl;
}