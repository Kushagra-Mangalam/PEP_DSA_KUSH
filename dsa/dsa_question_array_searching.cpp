#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i;
	string arr[n];
	for (i=0;i<n;i++){
		cin>>arr[i];
	}
	string s;
	cin>>s;
	int a=-1;
	for (i=0;i<n;i++){
		if (arr[i]==s);
		a=i;
	}
	if (a!=-1){
		cout<<a;
	}
	else cout<<"s";
}
