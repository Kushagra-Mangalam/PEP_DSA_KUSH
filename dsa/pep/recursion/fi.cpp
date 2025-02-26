#include <iostream>
#include<vector>
using namespace std;

int fib(int n) {
    // cout << "Calculating fib(" << n << ")" << endl; // Debug statement
    if (n == 0 || n == 1) {
        return n;
    }
    int ans= fib(n - 1) + fib(n - 2);
    // cout<<ans<<" ";
    return ans;
}

int main() {
    int n;
    cout << "enter number:";
    cin >> n;

    vector<int>arr;

    // int ans = fib(n);
    // cout<<endl;
    // cout << "Fibonacci number is: " << ans << endl;

    for(int i =0;i<n;i++){
        arr.push_back(fib(i));
    }

    for(int k:arr){
        cout<<k<<" ";
    }
    return 0;
}