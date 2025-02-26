#include <iostream>
#include<vector>
using namespace std;


void abc(const vector<int>& arr,int n){

    if(n>=1){
        abc(arr,n-1);
        cout<<arr[n-1]<<" ";
    }
}


void insert(vector<int>& arr,int n){
    // int i=0;
    if(n>0){
        cout<<"enter the value:";
        int value;
        cin>>value;
        arr.push_back(value);
// i++;
        insert(arr,n-1);
    }
}

int main() {
    int n;
    cout<<"enter the size of array:";
    cin>>n;

    vector<int> arr;
    arr.reserve(n);
    insert(arr,n);
    abc(arr,n);
    return 0;
}