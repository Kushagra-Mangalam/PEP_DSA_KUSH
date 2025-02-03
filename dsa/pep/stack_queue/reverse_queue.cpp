#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverse(queue<int> qe){
    stack<int> st;
    while (!qe.empty()){
        st.push(qe.front());
        qe.pop();
    }

    while(!st.empty()){
        qe.push(st.top());
        st.pop();
    }

    while(!qe.empty()){
        cout<<qe.front()<<" ";
        qe.pop();
    }
}

int main(){
    queue<int> q;
    int n;
    cout<<"enter the size of queue:";
    cin>>n;
    int data;
    for(int i=0;i<n;i++){
        cin>>data;
        q.push(data);
    }
    reverse(q);
}