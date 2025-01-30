#include<iostream>
using namespace std;
int main(){
	int array[100],k, n ,c,value;
	cout << "enter number of elements :";
	cin>>n;
	cout<<"\n enter elements:";
	for (c=0;c<n;c++){
		cin>>array[c];
	}
	cout<<"enter location where you want to insert the elemnet:";
	cin>>k;
	cout<<"enter the value to be inserted:";
	cin>>value;
	for (c=n-1;c>=k-1;c--){
		array[c+1]=array[c];
	}
	array[k-1]=value;
	cout<<"resulatant of the array:";
	for(c=0;c<=n;c++){
		cout<<array[c];
	}
}
