#include <iostream>
using namespace std;
int get_data(int, int);


int main() {
	int a, b, z;
	cout<<"Key in a number"<<endl;
	cin>>a;
	cout<<"Key in a number again"<<endl;
	cin>>b;
	
	z = get_data(a,b); //Passing parameters & Receiving c 
	cout<<"The answer is: "<<z<<endl;
	return 0;
}


int get_data(int x, int y){ //Receiving parameters
	int c;
	c = x + y;
	return c; //Return values
}

