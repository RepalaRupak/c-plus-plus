#include<iostream>
using namespace std;
void eve_or_odd(int x)
{
	if(x%2==0)
	{
		cout<<"the number is even"<<endl;
	}
	else
	{
		cout<<"the number is odd"<<endl;
	}
}
int main()
{
int n;
cout<<"enter the number:"<<endl;
cin>>n;
eve_or_odd(n);
return 0;
}
