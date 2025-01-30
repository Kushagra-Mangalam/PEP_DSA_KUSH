#include<iostream>
#include<string>
using namespace std;

int main(){
	cout<<"enter name:";
	string  b;
	//char b[100];
//	cin>>b;
	getline(cin,b);
	//cin.getline(b,100); 
	string a="! you are welcome to our website!";
	b.insert(0,"Hi ");
//	cout<<b;
	int n;
	n=b.length();
	//cout<<n;
	b.insert(n,a);
	cout<<b<<endl;
	
	string c="you are";
	int d=c.length();
	b.erase(n+2,d);
	cout<<b<<endl;
	c="website";
	
	string e="page";
	b.replace(b.find("website"),c.length(),"page");
	cout<<b<<endl;
	int p;
	p=b.length();
	//for(int i=0;i<n;i+2){
	int i;
	while ( i<p){
	
		if (b[i]=='o'){
		
		b.replace(i,1,"ooo");
		i+=3;
		}
		else i++;
	}
	cout<<b<<endl;
	string sur;
	cout<<"enter full name: ";
	cin>>sur;
	int s;
	int x=sur.length();
	for (i=0;i<x;i++){
		if (sur[i]==' '){
			s=i;
			break;
		}
	}
	sur.erase(0,s);
	b.append(sur,n,4);
	cout<<b;
}
