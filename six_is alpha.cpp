#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"enter the character:"<<endl;
	cin>>c;
	/*using ascci
	if(((int)c>=65 && (int)c<=90) || ((int)c>=97 && (int)c<=122))
	{
		cout<<"the character is an alphabet"<<endl;
		
	}
	else
	{
		cout<<"the character is not an alphabet"<<endl;
	}*/
	//using inbuilt function
	if(isalpha(c))
	{
		cout<<"the character is an alphabet"<<endl;
	}
	else
	{
		cout<<"the character is not an alphabet"<<endl;
	}
	
}
