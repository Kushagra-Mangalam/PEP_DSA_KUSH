#include<iostream>
#include<cstdlib>
#include<stack>

using namespace std;

class stack {
	public:
		int *arr;
		int size ;
		int top;
		
	stack (int size){
		this->size=size;
		arr= new int [size];
		top=-1;
		
	}	
	void push (int element ){
		if (size-top>1){
			top++;
			arr[top]=element;
		}
		else{
			cout<<"stack is overflow"<<endl;
		}
	}
	
	void pop(){
		if(top>=0){
			top--;
		}
		else{
			cout<<"stack underflow"<<endl;
		}
	}
	void peek(){
		if (top>=0){
			return arr[top];
		}
		else{
			cout<<"stack is empty"<<endl;
			return -1;
		}
	}
	void isempty(){
		if (top == -1){
			return true;
		}
		else{
			return false;
		}
	}
	
};


int main(){
	stack st(5);
	
	st.push(22);
	st.push(33);
	st.push(55);
	
	cout<<st.peek()<<endl;
}
