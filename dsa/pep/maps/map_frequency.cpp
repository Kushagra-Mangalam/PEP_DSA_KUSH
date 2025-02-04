/* given n string , print unique string 
in lexographical order with their frequency
*/




#include<iostream>
#include<map>

using namespace std;

int main(){
    map<string , int>mp;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        mp[s]++;

    }

    for(auto pr:mp){
        cout<<pr.first<<" "<<pr.second<<endl;
    }


    string s="";

    int max=0;

    for(auto iterator=mp.begin();iterator!=mp.end();iterator++){
        if(iterator->second>max){
            max=iterator->second;
            s=iterator->first;
        }
    }
    cout<<"frequency of "<<s<<" is "<<max;
}