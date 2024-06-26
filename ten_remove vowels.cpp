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
		if(str[i]=='A' ||str[i]=='a' ||str[i]=='E' ||str[i]=='e' ||str[i]=='I'||str[i]=='i'||str[i]=='O'
	||str[i]=='o'||str[i]=='U'||str[i]=='u')
	{
		str[i]='\0';
	}
	}
	cout<<"after removing vowels the string is:"<<str<<endl;
}
