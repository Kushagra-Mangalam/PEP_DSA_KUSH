#include<iostream>
using namespace std;
int main(){
	char a[200];
	int i=0,count=0;
	cout<<"enter line: ";
	cin.getline(a,200);
	cout<<a<<endl;
	cout<<a[i]<<endl;
	while(a[i]==NULL){
		count++;
		i++;
	cout<<count;
}
}
