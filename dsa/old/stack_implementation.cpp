#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);
//	cout<<s.size()<<endl;
//	cout<<s.top()<<endl;
//	s.pop();
//	cout<<s.top()<<endl;
//	s.push(5);
//	cout<<s.top()<<endl;
	
	while(s.empty()!=true){
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}
