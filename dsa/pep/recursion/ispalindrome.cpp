#include <iostream>
using namespace std;
bool ispalindrome(string s , int i){
    if(i==s.length()/2){
        return true;
    }
    if(s[i]!=s[s.length()-1-i]){
        return false;
    }
    return ispalindrome(s,i+1);
}
int main() {
    string s;
    cout<<"enter a string:";
    cin>>s;
    if(ispalindrome(s,0)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

    return 0;
}
