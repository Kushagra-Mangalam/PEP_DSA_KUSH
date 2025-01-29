#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
	int i,j;
	bool swapped;
	for(i=0;i<n-1;i++){
	swapped=false;
	for(j=0;j-i-1;j++){
	if(arr[j]>arr[j+1]){
		swap(arr[j],arr[j+1]);
		swapped=true;
	}
	}
	if(swapped==false)
	break;
}

}
void printarray(int arr[], int size){
	int i;
	for(i=0;i<size;i++){
		cout<<" "<<arr[i];
	}
}
int main(){
	int arr[]={54,23,76,12,90,34,65};
	int n=sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr,n);
	cout<<"sorted array: \n";
	printarray(arr,n);
	return 0;
}
