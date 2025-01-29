// #include<iostream>
// using namespace std;
// int fun(int n){
//     if(n>0){
//        return fun(n-1)+n;
//     }
//     return 0;
// }



// int main(){
// int x=5;
// cout<<fun(x);
// }

#include<iostream>
using namespace std;

int fibo(int m){
    if(m<=1){
        return m;
    }
    return fibo(m-2)+fibo(m-1);
}

int main(){
    int n;
    cin>>n;
    cout<< fibo(n);
}