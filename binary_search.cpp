#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
   int  mid = start + (end-start)/2;
    while(start <= end ){
       if(arr[mid] == key){
           return mid;
       } 
       if(key>arr[mid]){
           start = mid+1;
       }
       else{
         end = mid-1;  
       }
       mid = start+ (end - start)/2;
    }
  return -1;
}
int main(){
    int n;
    cout<<"enter the n"<<endl;
    cin>>n;
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    int arr[100];
    cout<<"enter the array"<<endl;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int index = binarysearch(arr,n,key);
    cout<< "key is find at the index"<<index <<" "<<endl; 
}