#include<iostream>
using namespace std;
/*int exp(int m,int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return m*exp(m,n-1);
	}
}*/ //takes n+1 calls.


int exp(int m,int n)
{
	if(n==0)
{
	return 1;
}
else if(n%2==0)
{
	return exp(m*m,n/2);
}
else
{
	return m*exp(m*m,(n-1)/2);
}
} //we are reducing timecomplexity compare to previous code 
int main()
{
	int m,n;
	cout<<"enter the values:"<<endl;
	cin>>m>>n;
	cout<<exp(m,n);
}
