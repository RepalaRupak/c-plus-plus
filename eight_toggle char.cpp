#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str;
	cout<<"enter the string:"<<endl;
	getline(cin,str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
		}
		else
		{
			str[i]=str[i]-32;
		}
	}
	cout<<str;
}

