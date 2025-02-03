#include <iostream>
#include <stack>
using namespace std;


void deleteMiddle(stack<int>& st, int mid) {
    if (mid == 0) { 
        st.pop();
        return;
    }

    int temp = st.top(); 
    st.pop();

    deleteMiddle(st, mid - 1);

    st.push(temp); 
}

int main() {
    stack<int> st;
    int n;
    
    cout << "Enter the size: ";
    cin >> n;

    int data;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> data;
        st.push(data);
    }

    int mid = n / 2; 
    deleteMiddle(st, mid);

 
    cout << "Stack after deleting middle element: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    
    return 0;
}
