#include<iostream>
#include<stack>
using namespace std;

class Mystack{
    public:
    int *arr;
    int top;
    int size;
    Mystack(){
        arr=new int [size];
         top=-1;
    }
    void push(int val){
        if(top==size-1){
            cout<<"stack overflow";
            return ;
        }
        top++;
        arr[top]=val;
    }
    void pop(){
        if(top==-1){
            cout<<"stack is empty";
            return ;
        }
        top--;
    }
    bool Isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    int top(){
        if(top==-1){
            int flag= Isempty();
            return flag;
        }else{
            return arr[top];
        }
    }
};
int main(){

}