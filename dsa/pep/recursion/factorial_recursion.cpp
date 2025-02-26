#include <iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    int ans = n * fact(n-1);
    // int ans= fact(n-1);
    // return n*ans;
    return ans;
}
int main() {
    int n;
    cout<<"enter the number:";
    cin>>n;
    int ans=fact(n);
    cout<<ans;
    return 0;
}