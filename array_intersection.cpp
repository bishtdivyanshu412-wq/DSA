#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    int arr[15];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int z;
    cout<<"enter the z";
    cin>>z;
    int brr[z];
    for(int j=0;j<z;j++){
        cin>>brr[j];
    }
    int p=0;
    for(int i=0;i<n;i++){
     for(int j=0;j<z;j++) {
         if(arr[i]==brr[j]){
             cout<<arr[i];
             brr[j] = INT_MIN;
             break;
         }
     }  
    }
}