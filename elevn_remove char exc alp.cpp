#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s,result;
	cout<<"enter the string:"<<endl;
	getline(cin,s);
	/*
	for(int i=0;s[i]!='\0';i++)
	{
		if((s[i]<65) ||(s[i]>91 && s[i]<97) || (s[i]>122))
		{
			s[i]='\0';
		}
	}
	
	cout<<"the string after removing all characters except alphabets:  "<<s<<endl;
	*/
	
	for(char c : s)
	{
		if((c>='A' && c<='Z') || (c>='a' && c<='z'))
		{
			result+=c;
		}
	}
	cout<<"the string after removing all characters except alphabets:  "<<result<<endl;
}
