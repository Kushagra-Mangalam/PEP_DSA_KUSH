#include<bits/stdc++.h>
using namespace std;

void traverse(int ar[],int n){
	for (int i=0;i<n;i++){
		cout<<ar[i]<<" ";
	}	
}

int main(){
	int n;
	cout<<"enter how many value:";
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"array before sorting :";
	traverse(arr,n);
	cout<<"\n";
	sort(arr,arr+n);
	cout<<"array after sorting:";
	traverse(arr,n);
}
