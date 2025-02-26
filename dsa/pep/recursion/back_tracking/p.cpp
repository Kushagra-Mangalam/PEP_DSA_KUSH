#include <iostream>
#include <vector>
using namespace std;

void sub(vector<int> &s, vector<int> ans, int i) {
    if (i == s.size()) {
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << endl;
        return;
    }

    // Include the current element
    ans.push_back(s[i]);
    sub(s, ans, i + 1);

    // Exclude the current element
    ans.pop_back();
    sub(s, ans, i + 1);
}

int main() {
    vector<int> s = {1, 2, 3};
    sub(s, {}, 0);
    return 0;
}