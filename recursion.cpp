#include<iostream>
using namespace std;

/*EX-1

void fun(int n)
{
	if(n>0)
	{
		cout<<n<<" "; //returning phase
		fun(n-1);  //calling phase
	}
}
int main()
{
int x=3;
fun(x);
	
}*/

/*
EX-2 

void fun(int n)
{
	if(n>0)
	{
		
		fun(n-1);    //calling phase
		cout<<n<<" "; //returning phase
	}
}
int main()
{
int x=3;
fun(x);
}

*/

//global and static variables in recursion

/*

int fun(int n)
{
	if(n>0)
	{
		return fun(n-1)+n;
	}
	return 0;
}
int main()
{
	int a=5;
	cout<<fun(a);
}*/

/*
int fun(int n)
{
	static int x=0;     //creating a static variable
	if(n>0)
	{
	x++;
		return fun(n-1)+x;
	}
	return 0;
}
int main()
{
	int a=5;
	cout<<fun(a);
}*/

/*

int x=0;           //creating a global variable
int fun(int n)
{
	 
	if(n>0)
	{
	x++;
		return fun(n-1)+x;
	}
	return 0;
}
int main()
{
	int a=5;
	cout<<fun(a);
}*/


