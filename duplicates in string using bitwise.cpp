#include<iostream>
#include<vector>
using namespace std;
int main()
{
	char arr[50];
	cout<<"enter the array:"<<endl;
	cin>>arr;
	int H=0;
	int x=0;
	for(int i=0;arr[i]!='\0';i++)
	{
		x=1;
		x=x<<(arr[i]-97);
		if((x&H)>0)
		{
			cout<<arr[i];
		}
		else
		{
			H=x|H;
		}
	}
}
