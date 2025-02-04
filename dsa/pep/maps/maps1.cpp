#include<iostream>
#include<map>

using namespace std;

void display(map<int , string>mp){
    map<int , string> :: iterator it;

    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}
int main(){
    map<int , string>mp;
    mp[9]="kush";
    mp[9]="abc";
    mp[1]="hello";
    mp[8]="nice";

    auto it=mp.find(9);
    if(it==mp.end()){
        cout<<"not found";}
        else{
            cout<<it->first<<" "<<it->second<<endl;
        }
    display(mp);
}