#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
	int i , key ,j;
	for (i=1 ;i<n; i++){
		key = arr[i];
		j=i-1;
		//move element of arr[0...i..1]
		//that are greater than key
		//to one current position ahead of array
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}

void printarray(int arr[],int n){
	int i;
	for (i=0;i<n;i++){
		cout<<arr[i]<<" ";
		
	}
	cout<<endl;
}

int main(){
	int arr[]={12,22,11,4,56};
	int n =sizeof(arr)/sizeof(arr[0]);
	
	insertionsort(arr,n);
	printarray(arr,n);
	return 0;
}
