#include<iostream>
using namespace std;
int main()
{
	char A[]="decimal";
	char B[]="medical";
	int H[26]={0};
	for(int i=0;A[i]!='\0';i++)
	{
		H[A[i]-97]+=1;
	}
	for(int i=0;B[i]='\0';i++)
	{
		H[B[i]-97]-=1;
		if((H[B[i]-97])<0)
		{
			cout<<"they are not anagram"<<endl;
			break;
		}
		
	}
	cout<<"they are anagarm"<<endl;	
}
