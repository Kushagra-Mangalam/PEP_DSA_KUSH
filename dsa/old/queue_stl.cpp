#include<bits/stdc++.h>
using namespace std;
int main(){
	
	queue<int>q;
	
	int n;
	cout<<"enter the no of values to be inserted:";
	cin>>n;
	int value;
	for (int i=0;i<n;i++){
		cin>>value;
		q.push(value);
	}
	cout<<"\nback of queue is :"<<q.back();
	cout<<"\nfront of the queue is: "<<q.front();
	
	q.pop();
	cout<<"\nqueue values are: ";
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
}
