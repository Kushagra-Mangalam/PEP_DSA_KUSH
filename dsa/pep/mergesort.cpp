#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& nums,int st, int mid,int end){
     vector<int>temp;
     int i=st;
     int j=mid+1;
    while(i<=mid && j<=end){
        if(nums[i]<=nums[j]){
            temp.push_back(nums[i]);
            i++;

        }else{
            temp.push_back(nums[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(nums[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(nums[j]);
        j++;
    }

    for(int id=0;id<temp.size();id++){
        nums[id+st]=temp[id]; 
    }
}

void mergesort(vector<int> &nums , int start , int end){
    if(start<end){
        int mid=start+(end-start)/2;
        mergesort(nums,start,mid);
        mergesort(nums,mid+1,end);

        merge(nums,start,mid,end);
    }
}


int main(){
vector<int>nums={21,31,35,38,2,17};
mergesort(nums,0,nums.size()-1);

for(int j:nums){
    cout<<j<<" ";
}
}