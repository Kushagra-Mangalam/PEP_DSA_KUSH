#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[]={4,4,1,3};
	int n=sizeof(arr)/sizeof(int);
	int count=0;
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		if(arr[n-1]==arr[i]){
			count++;
		}
		else{
			continue;
		}
	}
	cout<<"heighest candle is :"<<arr[n-1]<<"and number is:"<<count;
}
