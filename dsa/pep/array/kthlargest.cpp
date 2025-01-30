#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the kth element:";
    cin>>k;
    sort(arr,arr+n);
    int end=n-1;
    int count=0;
    int count1=0;
    int v1=-1,v2=-1;
    for(int j=0;j<n;j++){
        if(arr[j]!=arr[j+1]){
            count+=1;
            if(count==k){
                v1=arr[j];
            }
        }
        if(arr[end-j]!=arr[(end-j)-1]){
            count1+=1;
            if(count1==k){
                v2=arr[end-j];
                
            }
        }
        if(v1 !=-1 && v2!=-1){
            break;
        }
       
    }
    cout<<v1<<" ";
    cout<<v2;
}