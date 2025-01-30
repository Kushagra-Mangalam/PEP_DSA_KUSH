#include<iostream>
#include<algorithm>
using namespace std;

void search(int arr1[] , int k,int n){
    int l,mid,h;

    l=0;
    h=n-1;
    // mid=(l+h)/2;

    while(l<=h){
        mid=(l+h)/2;
        if(k==arr1[mid]){
            cout<< mid;
            // return;
            break;
        }else if(k<arr1[mid]){
            h=mid-1;
        }else{
            l=mid+1;
        }
    }

}

int main(){
    int arr[]={12,32,34,56,78,67,45,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int k;
    cin>>k;
    search(arr,k,n);

}

