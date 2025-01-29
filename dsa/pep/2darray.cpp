#include<iostream>
using namespace std;
int element(int arr[3][4] ){
    int sum=0;
    int maxvalue=0;
    int v=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            sum +=arr[i][j];
    
        }

       if(maxvalue<sum){
        v=i;
        maxvalue=sum;
        sum=0;
       }

    }
    cout<<maxvalue<<endl;
    return v;
   
}
int main(){
    int flag;
    int arr[3][4]={1,12,3,8,5,16,7,21,11,10,1,1};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }


    // int key;
    // cout<<"enter the key:";
    // cin>>key;
    
    flag= element(arr);
    cout<<flag;
   }