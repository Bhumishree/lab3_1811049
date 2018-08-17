//include library
#include<iostream>
//create main
int main()
{
	//Declaration of variable;
	int i,j,sum,dif,mul,div,mod;
	//Assigning values in variables
	i=4;j=12,sum=0,dif=0,mul=1,div=1,mod=1;
	//using different operators
	sum=i+j;
	mul=i*j;
	div=j/i;
	mod=j%i;
	dif=j-i;
	//Displaying output
	cout<<"Sum of the no.s is "<<sum<<endl<<"Difference of the no.s is "<<dif<<endl<<"Multiplication of the no.s is "<<mul<<endl<<"Division of the no.s is "<<div<<endl<<"Modulus of the no.s is "<<mod;
	return 0;
}
