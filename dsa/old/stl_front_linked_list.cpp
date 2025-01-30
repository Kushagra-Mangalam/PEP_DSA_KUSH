#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,n;
	cout<<"enter teh number of value:";
	cin>>n;
	list<int> g;
	int v;
	for (i=0;i<n;i++){
		cin>>v;
		g.push_back(v);
	}
	list<int>::iterator t;
	for (t=g.begin();t!=g.end();++t){
		cout<<*t;
		cout<<"\t";
	}
	cout<<"\n"
	int e=g.front();
	cout<<"first value is:"<<e;
	
}
