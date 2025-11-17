#include<iostream>
using namespace std;
int search(int arr[],int n , int key){
    int s = 0;
    int e = n-1;
    int ans = -1;
   int  mid = s + (e-s)/2;
    while(s<=e){
        //for left side
        if(arr[mid] == key){
            ans = mid;
           e = mid-1; 
            
        }
        if(arr[mid] < key){
            s = mid+1;
        }
        if(arr[mid] > key){
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans ;
}
int again(int arr[],int n , int key){
    int s = 0;
    int e = n-1;
    int ans = -1;
   int  mid = s + (e-s)/2;
    while(s<=e){
        //for right side
        if(arr[mid] == key){
            ans = mid;
           s = mid+1; 
            
        }
        if(arr[mid] < key){
            s = mid+1;
        }
        if(arr[mid] > key){
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans ;
}
int main(){
   int n;
   cin>>n;
   int key;
   cin>>key;
   int arr[100];
   cout<<"enter the array"<<endl;
   for(int i=0;i<=n-1;i++){
       cin>>arr[i];
   } 
   cout<<"first occurrence is : "<<search(arr,n,key)<<endl;
   cout<<"last occurrence is : "<<again(arr,n,key)<<endl;  
}