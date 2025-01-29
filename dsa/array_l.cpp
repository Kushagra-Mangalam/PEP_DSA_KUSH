// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
	
// //	for(int j=0; j<n ;j++){
// //		cout<<arr[j];
// //	}
// //	cout<<endl;
// //	
// //	int si = sizeof(arr)/sizeof(arr[0]);
// //	cout<<si;
	
// 	int arr2[n];
// 	int si = sizeof(arr)/sizeof(arr[0]);
	
// 	copy(arr, arr+si , arr2);
	
// 	sort(arr2 , arr2+si);
	
	
// 	cout<<"array before sorting";
	
// 	for(int i=0;i<n;i++){
// 		cout<<arr[i]<<" ";
// 	}
// 	cout<<"array after sorting ";
	
// 	for(int j =0;j<n;j++){
// 		cout<<arr2[j]<<" ";
// 	}

// int arr[5]={1,2,3,4,5};
// int n;
// n=sizeof(arr)/sizeof(arr[0]);
// // cout<<n;
// 	for(int st=0;st<n;st++){
// 		for(int end=st;end<n;end++){
// 			for(int i=st;i<=end;i++){
// 				cout<<arr[i];
// 			}
// 			cout<<" ";
// 		}
// 		cout<<endl;
	// }
	

// #include<iostream>
// using namespace std;
// int main(){
// 	int row=5;
// 	for(int i=0;i<row;i++){
// 		for(int j=0;j<row-i;j++){
// 			cout<<" ";
// 		}
// 		for(int j=0;j<2*i-1;j++){
// 			cout<<"*";
// 		}
// 		cout<<endl;
// 	}
// }

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int arr[5]={1,2,3,4,5};
	int arr2[5];
	copy(arr,arr+5,arr2);

	reverse(arr2,arr2+5);
	for(int i: arr2){
		cout<<i<<" ";
	}
	cout<<endl;

	if(find(arr,arr+5,3)!=arr+5){
		cout<<"3 found in the array";
	}
	else{
		cout<<"3 not found";
	}

cout<<endl;
	int maxe=*max_element(arr,arr+5);
	cout<<maxe;
}





