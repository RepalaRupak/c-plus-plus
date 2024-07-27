#include<iostream>
using namespace std;
/*
double e(int x,int n)
{
	static double p=1;
	static double f=1;
	double r;
	if(n==0)
	{
		return 1;
	}
	else
	{
	r=e(x,n-1);
	p=p*x;
	f=f*n;
	return r+p/f;	
	}
}   //time complexity is o(n^2)
*/

double e(int x,int n)  //method using horners rule by taking common terms and reducing to 1+x/1[1+x/2[1+x/3[1+x/4]]] for n=4
{
	static double s=1;
	if(n==0)
	{
		return s;
	}
	else
	{
		s=1+x*s/n;//gives 1+x/n*s int so to make double 1+x*s/n
		return e(x,n-1);
	}
}  //time complexity is o(n) based on no of multiplications

int main()
{
	cout<<e(1,10);
}

/*Taylor series

e^x=1+x/1!+x^2\2!+x^3/3!+-------+x^n/n!

*/
