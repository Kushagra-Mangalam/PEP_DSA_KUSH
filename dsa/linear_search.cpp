//linear search
#include<iostream>
using namespace std;
int main(){
	int arr[10],n,i,e,index,found;
	cout<<"enter number of element:";
	cin>>n;
	for (i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter the number you want to seach:";
	cin>>e;
	for (i=0;i<n;i++){
		if(arr[i]==e){
			index=i;
			break;
		}
	}
	cout<<"element found:"<<index;
	cout<<endl;
	return 0;
}
