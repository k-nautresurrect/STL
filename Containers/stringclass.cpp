//string is equivalent to char *
// it wraps char array inside a string object.
// it is a container containg charecter array.
#include<iostream>
#include<string>
#include<algorithm> // for sorting and other operation on string

using namespace std;

bool compare(string a, string b){
	if(a.length() == b.length()){ return a<b; }
	return a.length()>b.length();
}

int main(){
	
	//initialisation of strings
	string s0;
	string s1 = ("hello");
	string s2(s1);
	string s3 = s2;
	char a[] = {'a','b','c','\0'};
	string s4 = a;
	string s5(a);
	cout << s0 << " "<< s1 << " " <<s2 << " " <<s3 <<" " << s4 << " "<< s4<<" "<< s5; 

	//to check if the string is empty or not.
	if(s0.empty()){ //s0.empty() returns the boolean if the string is empty or not.
		cout<<"s0 is empty"<<endl;
	}

	//appending strings
	s0.append("hey there, C++");
	//using + operator.
	s0 += " python is great";

	cout<<s0<<endl;
	cout<<s0.length()<<endl;// return int the length of the string,
	cout<<s1.length()<<endl; //excluding null symbol.


	//comparision in strings
	s0 =  "Apple";
	s1 = "Mango";
	cout<<s0.compare(s1)<<endl;
	// returns an integer this is (==0 if string is equal)
	// else return (>0 or <0 if the string is not equal)
	// this compare both string by using lexiographical comparison.
	// if >0 then s0 is greater then s1, if <0 then s0 is smaller then s1(lexographically).

	// in strings if we check the length by opertors < , > it will give the lexo.. length.

	//overloaded opoerators
	if(s1>s0){ cout<<"Mango wins lexically"<<endl; }
	if(s0<s1){ cout<<"Apple is lexically smaller"<<endl; }

	//can be acsesed using array.
	cout << s0[0];

	//find substrings
	s5 = "I want to drink apple juice.";
	int indx = s5.find("apple"); // starting from 0.

	//remove a word from a string,
	string word = "apple";
	int len = word.length();
	s5.erase(indx,len + 1);
	cout << s5 <<endl;

	//iterate over the string as like in array.
	for (int i = 0; i < s5.length(); ++i)
	{
		cout<<" "<<s5[i];
	}

	cout<<endl;

	//using iterations
	for(auto it = s5.begin();it != s5.end();it++){ cout<<"|"<<(*it); }
	// in above s5.begin returns the adress of the begining of the string
	// and the s5.end returns the adress of the ending of the string + 1.
	// as this is also stored continously so *it points to the value at that adress.
	// without auto it is definde as (string::iterator it).
	cout<<endl;
	//for each loop
	for(auto c:s5){// read as for auto c that belongs in string s5.
		cout<<"|"<<c;
	}
	// here for each element in the sequence s5 and that contains only charecters so c is char 
	// and itreate to the whole sequence.


	int n;
	cin >> n;
	cin.get();
	string s[100];
	for(int i = 0; i<n; i++){ getline(cin,s[i]); }
	sort(s,s+n,compare);
	// cin.getline won't work on string class.
	for(int i = 0; i<n; i++){ cout<<s[i]<<endl; }
	cout<<s<<endl;

}