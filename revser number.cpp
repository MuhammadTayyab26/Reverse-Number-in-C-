#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[10];
	int i;
	for(i=0;i<10 ;i++)
	{
		cout<<"enter number"<<endl;
		cin>>arr[i];
		
	}
	cout<<"Actual array "<<endl;
	for(i=0;i<10;i++)
	{
		cout<<arr[i]<<endl;
		
	}
	cout<<"revser Array is"<<endl;
	for(i=9;i>=0 ;i--)
	{
		cout<<arr[i]<<endl;
	}	
	getch();
	return 0;
}

