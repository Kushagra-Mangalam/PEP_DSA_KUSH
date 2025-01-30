#include<iostream>
using namespace std;
	void bubble_sort(int vec[],int n){
		int i,j;
		for (i=0;i<n-1;i++){
			for(j=0;j<n-i-1;j++){
				if (vec[j]>vec[j+1])
				swap(vec[j],vec[j+1]);
			}
		}
	}
int main(){
	int vec[]={5,1,3,8,4,9};
	int n=sizeof(vec)/sizeof(vec[0]);
	bubble_sort(vec,n);
	cout<<"sorted array: \n";
	for(int i=0;i<n;i++){
		cout<<vec[i]<<" ";
	}
	cout<<endl;
}
