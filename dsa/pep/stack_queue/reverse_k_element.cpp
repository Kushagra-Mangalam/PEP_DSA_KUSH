#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void rev(queue<int> &qe , int n , int k){
    stack<int>st;
    int si=qe.size();
    int count;
    int data;
    for(count=0;count<k;count++){
        data=qe.front();
        st.push(data);
        qe.pop();
    }
    for(count=0;count<k;count++){
        data=st.top();
        qe.push(data);
        st.pop();
    }
    for(int i=0;i<si-k;i++ ){
        data=qe.front();
        qe.pop();
        qe.push(data);
    }

    while(!qe.empty()){
        cout<<qe.front();
        qe.pop();
    }
}

int main(){
    queue<int>qe;
    int n;
    cout<<"enter the size:";
    cin>>n;
        int data;
    for(int i=0;i<n;i++){
        cin>>data;
        qe.push(data);
    }
    int k;
    cout<<"enter k:";
    cin>>k;
    rev(qe,n,k);
}