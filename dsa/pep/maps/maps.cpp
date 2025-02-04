// #include<iostream>
// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//     map<int , string>mp;
//     mp[9]="kush";
//     mp[9]="abc";
//     mp[1]="hello";
//     mp[8]="nice";

//     map<int , string> :: iterator it;

//     for(it=mp.begin();it!=mp.end();it++){
//         cout<<it->first<<" "<<it->second<<endl;
//     }
// }

#include <iostream>
#include <map>
using namespace std;

// int main(){
//     multimap<int, string> mp;
//     mp.insert({9, "kush"});
//     mp.insert({9, "abc"});
//     mp.insert({1, "hello"});
//     mp.insert({8, "nice"});

//     multimap<int, string>::iterator it;

//     for(it = mp.begin(); it != mp.end(); it++){
//         cout << it->first << " " << it->second << endl;
//     }
// }


#include <vector>
#include <algorithm>

int findMaxOccurrence(const vector<int>& arr) {
    multimap<int, int> freqMap;
    for (int num : arr) {
        freqMap.insert({num, 1});
    }

    int maxCount = 0;
    int maxElement = arr[0];
    for (auto it = freqMap.begin(); it != freqMap.end(); it = freqMap.upper_bound(it->first)) {
        int count = freqMap.count(it->first);
        if (count > maxCount) {
            maxCount = count;
            maxElement = it->first;
        }
    }

    return maxElement;
}

int main() {
    vector<int> arr = {1, 3, 2, 3, 4, 1, 3, 2, 1, 1};
    int maxOccurElement = findMaxOccurrence(arr);
    cout << "Element with maximum occurrence: " << maxOccurElement << endl;
    return 0;
}