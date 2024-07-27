#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==0)
	{
		return 1;
		
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int x;
	cout<<"enter the value:"<<endl;
	cin>>x;
	cout<<"the factorial is:"<<fact(x);
}
