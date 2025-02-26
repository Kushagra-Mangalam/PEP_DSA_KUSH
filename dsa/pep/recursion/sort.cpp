#include <iostream>
#include<vector>
using namespace std;


bool issorted(vector<int>arr,int n){
    if(n==1){
        return true;
    }
    if(arr[n-1]<arr[n-2]){
        return false;
    }

    return issorted(arr,n-1);
}
int main() {
    // return 0;
    vector<int>arr={1,2,3,4,5};
    int n=arr.size();
    
    // cout<<issorted(arr,n);
    if(issorted(arr,n)){
        cout<<"sorted";
    }else{
        cout<<"not sorted";
    }

}