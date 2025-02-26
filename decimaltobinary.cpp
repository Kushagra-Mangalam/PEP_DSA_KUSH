#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the number:";
    cin>>n;
    int bin=0;
    while(n>0){
        // bin=n%2+bin*10;
        // cout<<n%2;
        bin=bin+(n%2);
        bin=bin*10;
        cout<<bin<<endl;
        n=n/2;
    }
    bin=bin/10;
    cout<<endl;
    cout<<bin;

    return 0;
}
