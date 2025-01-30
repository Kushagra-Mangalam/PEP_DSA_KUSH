#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     vector<int> v={1,2,3,4,5,6,7};
//     vector<int>v2(v.begin(),v.end());
//     for(int i:v2){
//         cout<<i<<" ";
//     }

// }

// void fun(int n){
//     if(n>0){
        
//         fun(n-1);
//         cout<<n<<" ";
//     }
// }
// int main(){
//     int x;
//     cin>>x;
//     fun(x);
//     cout<<endl;
//     cout<<"end";
// }

// int main(){
//     int a=5;
//     int *b=&a;
// cout<<*b;   
// }

int main(){
    // vector<int>vect={1,2,3,4,5,6,7,5,6,7};
    // vect.push_back(23);
    // int n=vect.size();
    // cout<<vect[n-1];
    // int back=vect.();
    // cout<<back;

    vector<vector<int>> intervals = {{1, 3}, {5, 7}, {8, 10}};

    for (const auto& interval : intervals) {
    // Access each `interval` (a vector<int>) in `intervals`
    cout << interval<<" " << endl;
}

}