#include<iostream>
#include<stack>
using namespace std;

void rev(string rev){
    int n=rev.length();
    stack<string> st;
    for(int i=0;i<n;i++){
    string word="";
        while(rev[i]!=' ' && i<n){
            word+=rev[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}


int main(){
    string str="hello how are you";
    rev(str);
}