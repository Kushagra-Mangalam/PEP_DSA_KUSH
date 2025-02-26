#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool binary_search(vector<int>arr,int k ,int l, int h){
    // int l=0;
    int mid;
    // while(l<=h){
    //     mid=l+h/2;
    //     if(arr[mid]==k){
    //         // cout<<mid;
    //         return true;
    //     }
    //     else if(arr[mid]>k){
    //         h=mid-1;
    //     }
    //     else{
    //         l=mid+1;
    //     }
    // }
    // return false;
    if(l>h){
        return false;
    }
    mid=(l+h)/2;
    if(arr[mid]==k){
        return true;
    }
    else if(arr[mid]>k){
        return binary_search(arr,k,l,mid-1);
    }else{
        return binary_search(arr,k,mid+1,h);
    }

}
int main() {
    vector<int>arr={10,2,32,16,29,1,6,9};
    sort(arr.begin(),arr.end());
    int n=arr.size();
    int k;
    cout<<"enter the value:";
    cin>>k;
    int l=0;
    if(binary_search(arr,k,l,n)){
        cout<<"found";
    }else{
        cout<<"not found";
    }
    
    return 0;
}