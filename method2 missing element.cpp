#include<iostream>
using namespace std;
/*int main()
{
	int arr[]={1,2,3,4,5,7,8,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int l=arr[0];
	int h=arr[n-1];
	int diff=l-0;
	for(int i=0;i<n;i++)
	{
		if((arr[i]-i)!=diff)
		{
			cout<<"missing element is:"<<diff+i<<endl;
			break;
		}
	}
}*/

//For multiple missing elements
int main()
{
	int arr[]={1,2,3,5,9,10,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	int l=arr[0];
	int h=arr[n-1];
	int diff=l-0;
	for(int i=0;i<n;i++)
	{
		if((arr[i]-i)!=diff)
		{
			while(diff<arr[i]-i)
			{
			
			cout<<"Missing element is:"<<diff+i<<endl;
			diff++;
		}
		}
	}
}

