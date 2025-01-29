#include<iostream>
using namespace std;
int main(){
	int c,k,n,array[100],found=0,e,i,j;
	cout<<"enter number of element:";
	cin>>n;
	for (c=0;c<n;c++){
		cin>>array[c];
	}
	cout<<"\nelement you want to delete:";
	cin>>e;
	for  (i=0;i<n;i++){
		if(array[i]==e){
			for(j=i;j<n-1;j++){
				array[j]=array[j+1];
			
				n--;
				i--;
			}
		
		else{
	cout<<"elemnt deleted succesfully."<<endl;}
	}
	
	for (c=0;c<n;c++){
		cout<<array[c]<<"\t";
	}
	
}
