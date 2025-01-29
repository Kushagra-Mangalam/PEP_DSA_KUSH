#include<iostream>
using namespace std;

void selectionsort(int arr[],int k){
    for(int i=0;i<k-1;i++){
        int minindex=i;
        for(int j=i+1;j<k;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
}
int main(){
    int arr[6]={5,4,1,2,3,8};
    selectionsort(arr,6);
    for(int j:arr){
        cout<<j<<" ";
    }
}