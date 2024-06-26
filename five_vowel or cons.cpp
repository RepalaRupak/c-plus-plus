#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"enter the character:"<<endl;
	cin>>c;
	if(c=='A' ||c=='a' ||c=='E' ||c=='e' ||c=='I'||c=='i'||c=='O'
	||c=='o'||c=='U'||c=='u')
	{
		cout<<"The character is an vowel"<<endl;
	}
	else
	{
		cout<<"The character is an consonant"<<endl;
	}
}
