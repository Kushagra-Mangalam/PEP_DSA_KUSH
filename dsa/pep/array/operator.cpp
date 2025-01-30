#include<iostream>

using namespace std;

int main(){
    int a,b;
    string c;
    cout<<"enter the first number:";
    cin>>a;
    cout<<"enter the second number:";
    cin>>b;

    cout<<"enter airthmatic operator +,-,*,/:";
    cin>>c;
    if(c=="+"){
        cout<<a+b;

    }
    if(c=="-"){
        cout<<a-b;
    }
     if(c=="*"){
        cout<<a*b;
    }
     if(c=="/"){
        cout<<a/b;
    }

    
}