#include<iostream>
using namespace std;
int main()
{
int arr[5]={-2,3,5,-6,8};
int i=0;
int j=4;//length-1
while(i<j)
{

while(arr[i]<0)
{
	i++;
}
while(arr[j]>0)
{
	j--;
}
if(i<j)
{
swap(arr[i],arr[j]);
}
}
for(int i=0;i<5;i++)
{
	cout<<arr[i]<<" ";
}
}
