#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    cin>>a,b,c;
    int ans;
    if(a>b&&a>c){
        ans=a;
    }else if(b>a&&b>c){
        ans=b;
    }else{
        ans=c;
    }
    cout<<"largest number is:";
    cout<<ans;
}


