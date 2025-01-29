#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    int arr[100];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int b;
    cout<<"enter rotation: ";
    cin>>b;
    cout<<"original array: ";
    for(i=0;i<n;i++){
    	cout<<arr[i];
	}
    int j;
    for(i=0;i<b;i++){
        int temp=arr[n-1];
        for(j=n-1;j>0;j--){
        arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
    cout<<"\nupdated array: ";
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
}
