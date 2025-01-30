#include<iostream>
#include<algorithm>
using namespace std;

void reversal(int arr[],int n){
    int rev[n];
    for(int i=0;i<n;i++){
        rev[i]=arr[(n-1)-i];

    }
    cout<<"reversal of array is:";
    for(int k=0;k<n;k++){
        cout<<rev[k]<<" ";
    }
    cout<<endl;
}
void sorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<=arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
    cout<<"sorted array is:";

    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }    
    cout<<endl;
}

void maxele(int arr[] , int n){ 
    int Maxe=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>=Maxe);
        Maxe=arr[i];
    }
    cout<<"maximum element is:"<<Maxe;
    cout<<endl;
}
void minele(int arr[] , int n){ 
    int Mine=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<=Mine){
            Mine=arr[i];
        }
    }
    cout<<"minimum element is:"<<Mine;
    cout<<endl;

}


int main(){
    int arr[10];
    cout<<"enter 10 array values:";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    reversal(arr,10);
    sorted(arr,10);
    maxele(arr,10);
    minele(arr,10);
}