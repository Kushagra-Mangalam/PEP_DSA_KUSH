#include<iostream>
using namespace std;
bool sorted(int arr[] , int size){
    if(size==0||size==1)return true;
    if(arr[0]>arr[1]){
        return false;
    }else{
        return sorted(arr+1,size-1);
    }
}
int main(){

}