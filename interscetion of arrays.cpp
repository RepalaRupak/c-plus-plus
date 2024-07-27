#include<iostream>
using namespace std;
void intersectionarray(int A[],int B[],int m,int n)
{
	int c[m+n];
	int i=0;
	int j=0;
	int k=0;
	while(i<m && j<n)
{
	if(A[i]==B[j])
	{
	c[k++]=A[i++];
	j++;
	}
	else if(A[i]<B[j])
	{
		i++;
	}
	else
	{
		j++;
	}
}
	for(int z=0;z<k;z++) //trailing zeros
	{
		cout<<c[z]<<" ";
	}
	
}
int main()
{
	int m,n;
	cout<<"enter the size of the arrays A and B:"<<endl;
	cin>>m>>n;
	int A[m];
	int B[n];
	cout<<"enter the elements for an array A:"<<endl;
	for(int i=0;i<m;i++)
	{
		cin>>A[i];
	}
	cout<<"enter the elements for an array B:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>B[i];
	}
	intersectionarray(A,B,m,n);	
}
