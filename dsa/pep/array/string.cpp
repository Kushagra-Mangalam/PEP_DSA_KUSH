#include<iostream>
#include<cstring>
using namespace std;
// int main(){
//     int n=100;
//     string s;
//     cin>>s;
//     char str[n]=s;
    
//    cout<<strlen(str);
// }   

int main(){
int arr[8]={1,2,3,3,3,3,3,5};
int s=0;
int e=7;
int key=3;
int ans=-1;
while(s<=e){
int mid=(s+e)/2;
if(arr[mid]==key){
ans=mid;
e=mid-1;
}
else if(arr[mid]>key){
e=mid-1;
}
else{
s=mid+1;
}
}
cout<<ans<<endl;
}