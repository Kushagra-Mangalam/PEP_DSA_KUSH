#include<iostream>
#include<string>
using namespace std;
int main(){
	string arr[5]={"apple,orange,grape,agduyqw,agwdy"};
	int i,count;
	count=0;
	string b;
	for (i=0;i<5;i++){
		b=arr[i];
		if(b[0]==97)
		count+=1;
		}
		cout<<count;
	}

