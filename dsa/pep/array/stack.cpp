#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<int> s;

    s.push(2);
   // s.push(1);
   s.pop();

    
    cout<<s.top();
    // if(s.empty()){
    //     cout<<"stack is empty";
    // }else{
    // cout<<s.top();
    // }
}