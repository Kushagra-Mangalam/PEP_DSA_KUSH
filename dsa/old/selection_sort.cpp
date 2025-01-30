#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
	int i,j,min_idx;
	for(i=0;i<n-1;i++){
		// find the minimum element in the array 
		min_idx=i;
		for(j=i+1;j<n;j++){
			if (arr[j]<arr[min_idx]){
			
			min_idx=j;}
		}
		//swap the minimum element in the array
		if (min_idx !=i){
			swap(arr[min_idx],arr[i]);
		}
	}
}

void printarray(int arr[],int size){
	int i;
	for (i=0;i<size;i++){
		cout<<arr[i]<<" ";
		cout<<endl;
	}
}

// driver programe
int main(){
	int arr[]={23,5,12,9,67};
	int n =sizeof(arr)/sizeof(arr[0]);
	//function call
	selectionsort(arr,n);
	cout<<"sorted array: \n";
	printarray(arr,n);
	return 0;
}
