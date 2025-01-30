#include<iostream>
using namespace std;
int main(){
	int i , n , first , last ,middle,num;
	cout<<"enter number of elements:";
	cin>>n;
	int arr[n];
	cout<<"enter elements:\n";
	for (i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"\nenter elements to be search:";
	cin>>num;
	first=0;
	last=n-1;
	middle=(first+last)/2;
	while(first <= last){
		if (arr[middle]<num)
		first=middle+1;
		
		else if(arr[middle]==num){
			cout<<"\n the number ,"<<num<<" found at position:"<<middle+1;
			break;
		}
		else{
		
		last=middle-1;}
		middle=(first+last)/2;
	}
	if (first>last)
	cout<<"\n the number,"<<num<<"is not found in the given array"<<endl;
	return 0;
}
