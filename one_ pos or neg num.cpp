#include<iostream>
using namespace std;
int main()
{
int x;
cout<<"enter the number:"<<endl;
cin>>x;
if(x>0)
{
	cout<<"the number is positive number";
}
else if(x<0)
{
	cout<<"the number is negative number";
}
else
{
	cout<<"the number is neither positive nor negative number";
}
return 0;	
}
