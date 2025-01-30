#include<bits/stdc++.h>
using namespace std;

void showlist(list<int>g){
	list <int>::iterator t;
	for(t=g.begin();t!=g.end();++t){
		cout<<*t;
		cout<<"\t";
	}
}

int main(){
	list<int> g1,g2;
	
	int i,n;
	cout<<"enter how many numbers:";
	cin>>n;
	int value;
	for(i=0;i<n;i++){
		cin>>value;
		g1.push_back(value);
		g2.push_front(value);
	}
	showlist(g1);
	cout<<"\n";
	showlist(g2);
	cout<<"\n";
	cout<<"sorted linked list: ";
	g1.sort();
	showlist(g1);
}
