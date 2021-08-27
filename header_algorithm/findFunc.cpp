#include<iostream>
#include<algorithm> //the header file used to include the algorithm.

using namespace std;

int main(){
	int arr[] = {1,10,11,9,100}; //initializing array just for an example.
	int n = sizeof(arr)/sizeof(int); 
	//sizeof function returns the actual size ofanything that is passed
	//upper statement to find the no. of elements can be written as ->
	// int n = sizeof(arr)/sizeof(arr[0]);
	//now it will give the size as per the datatype in the array arr.
	int key = 101;
	auto id = find(arr, arr+n, key);
	// equivaent to -> int * id = find(arr, arr+n, key); 

	//auto means that the type of variable is automatically deducted from its initializer.

	//cout << id << endl;

	//id is returning adress.
	//the adress returned by id is the adress of 11 in the array arr. So

	int index = id - arr;

	//as array contains the consecutive adress it will return the difference btw id and 
	//the initial adress where array is started.

	//cout << index << endl;

	//if the key is not present it will return n, the index which is one greater the the size.
	//to check if the index is present or not, ->

	if(index == n){ cout << "Element is not present." << endl; }
	else{ cout << index << endl; }
}