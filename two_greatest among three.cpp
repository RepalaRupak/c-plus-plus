#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"Enter the first number:"<<endl;
	cin>>num1;
	cout<<"Enter the second number:"<<endl;
	cin>>num2;
	cout<<"Enter the third number:"<<endl;
	cin>>num3;
	if(num1>num2 && num1>num3)
	{
		cout<<"number 1: "<<num1<<" greatest among three numbers"<<endl;
		
	}
	else if(num2>num3 && num2>num1)
	{
		cout<<"number 2: "<<num2<<" greatest among three numbers"<<endl;
	}
	else
	{
		cout<<"number 3: "<<num3<<" greatest among three numbers"<<endl;
	}
}
