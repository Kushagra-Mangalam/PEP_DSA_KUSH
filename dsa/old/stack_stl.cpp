#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"enter how many value you want to push into stack:";
	stack<int>s;
	cin>>n;
	int i=0;
	cout<<"enter the values: ";
	int value;
	while (i!=n){
		cin>>value;
		s.push(value);
		i++;
	}
	while (!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
}
