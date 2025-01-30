//Question 2

// Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

// Example 1:
// Input:
// [1,2,4,7,7,5]
// Output:
// Second Smallest : 2
// Second Largest : 5
// Explanation:
// The elements are as follows 1,2,3,5,7,7 and hence second largest of these is 5 and second smallest is 2









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
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    cout<<"enter which place is to find:";
    int largest;
    cin>>largest;
    int count=1;
    int count1=1;
    int smallest=largest;
    int flag=0;
    while(flag<=(largest*2)){
       
        if(arr[i]!=arr[i-1]){
            count++;
            i++;
            if(count<=largest){
                flag++;
            }
        }else if(arr[i+1]==arr[i]){
            i++;
        }
        
        if(arr[j]!=arr[(n-1)-j]){
            count1++;
            j--;
            if(count1<=smallest){
                flag++;
            }
        } 
        else if(arr[j]==arr[j-1]){
        j--;
        }
        }
    
    cout<<endl;
    cout<< arr[i]<<" ";
    cout<<arr[j];
}