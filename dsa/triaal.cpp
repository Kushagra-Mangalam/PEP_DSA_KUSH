#include<iostream>
using namespace std;
int main()
{
	int arr[100],position,c,n,value;
	cout<<"enter the number of elements\n";
	cin>>n;
	cout<<"enter the element\n";
	for(c=0;c<=n;c++)
	{
		cin>>arr[c];
	}
	cout<<"insert the location ehere yku want to insert\n";
	cin>>position;
	cout<<"enter the value:";
	cin>>value;
	for (c=n-1;c>=position -1;c--)
	{
	arr[c+1]=arr[c];
	}
	arr[position]=value;
	cout<<"result:\t";
	for (c=0;c<=n;c++)
	{
		cout<<arr[c]<<"\t";
	}
	return 0;
	
}
