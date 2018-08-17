//Include library
#include<iostream>
using namespace std;
//Create main
int main()
{
	//Declaration of variables 
	int i;
	float j;
	char a;
	bool n;
	//Assignment of variables
	i=9;
	j=10.2;
	a='B';
	n=1;
	//Displaying values of variables
	cout<<i<<" , "<<j<<" , "<<a<<" , "<<n;
	//Displaying size of the variables
	cout<<"Size of integer is "<<sizeof(i)<<endl<<"Size of float is "<<sizeof(j)<<endl<<"Size of character is "<<sizeof(a)<<endl<<"Size of boolean is "<<sizeof(n);
	return 0;
}

