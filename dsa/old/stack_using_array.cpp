#include<iostream>
using namespace std;
#define MAX 1000
struct mystack{
	int *arr;
	int cap;
	int top;
	mystack(int c){
		cap=c;
		arr=new int[MAX];
		top=-1;
	}
	void push(int x){
		if(top==cap-1){cout<<"stack is full"<<endl;return;}
		top++;
		arr[top]=x;
	}
	int pop(){
		if(top==-1){cout<<"stack is empty"<<endl;return INT_MIN;}
		int res=arr[top];
		top--;
		return res;
	}
	int peek(){
		if(top==-1){
		cout<<"stack is empty"<<endl;
		return INT_MIN;}
		return arr[top];
		}
	
	int size (){
		return (top+1);
	}
	bool isempty(){
		return top==-1;
	}
};

int main(){
	mystack s(MAX);
	s.push(5);
	s.push(10);
	s.push(20);
	cout<<s.pop()<<endl;
	cout<<s.size()<<endl;
	cout<<s.peek()<<endl;
	cout<<s.isempty()<<endl;
	
	return 0;
}
