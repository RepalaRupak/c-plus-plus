#include<iostream>
using namespace std;
int fact(int n)
{
	int factorial=1;
	for(int i=n;i>0;i--)
	{
		factorial*=i;
	}
	return factorial;
}
int main()
{
	int n;
	cout<<"enter the value:"<<endl;
	cin>>n;
	cout<<fact(n);
}
