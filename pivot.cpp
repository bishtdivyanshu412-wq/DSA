#include<iostream>
using namespace std;
int search(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    while(s<e){
    if(arr[mid]>arr[0]){
        s= mid + 1 ;
    }
    else{
        e = mid ;
    }
    mid = s + (e-s)/2;
    }
    return s ;
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int arr[100];
    cout<<"enter the array"<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"index  is : "<<search(arr,n)<<"\n"<<" pivot element is : "<<arr[search (arr,n)]<<endl;
    
}
