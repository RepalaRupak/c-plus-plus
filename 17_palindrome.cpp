#include<iostream>
#include<string>
using namespace std;
void palindrome(string n)
{
	int flag=1;
	int len=n.length();
		for(int i=0;i<len/2;i++)
	{
			if(n[i]!=n[len-1-i])
			{
				cout<<"it is  not a palindrome"<<endl;
				flag=0;
				break;
		    } 
		
	}
	if(flag==1)
	{
		cout<<"it is a palindrome"<<endl;
	}
}
int main()
{
	string n;
	cout<<"enter the number:"<<endl;
	getline(cin,n);
	palindrome(n);
}
