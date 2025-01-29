#include<iostream>
#include<vector>

using namespace std;

int main(){
	int n;
	cout<<"enter the size of an array";
	cin>>n;
	
	vector<int> nums;
	int val;
	for(int i=0;i<n;i++){
		cin>>val;
		nums.push_back(val);
	}
	
	int num=nums.size();
	cout<<num;
	
	vector<int> nums2(nums);

	
	
	nums2.erase(find(nums2.begin(),nums2.end(),3));
	for(int i=0 ; i<nums2.size();i++){
		cout<<nums2[i];
	}
	
}
