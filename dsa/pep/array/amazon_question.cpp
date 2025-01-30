//there is a combination of number inter change in that form that it is smallest among the every possible combination but larger than
// given number 

#include<iostream>
#include <vector>

using namespace std;

int main(){
    string n;
    cout<<"enter number:";
    cin>>n;
    string j=n;
    // int m=stoi(n);
    int s=n.length();
    int num;
    int end=s-1;
    while(j<=n){
        for(int i=end-1;i>=end-2;i++){
            swap(j[end],j[i]);
            if(j>n){
                break;
            }
        }
        end--;
    }
    cout<<j;
    
}