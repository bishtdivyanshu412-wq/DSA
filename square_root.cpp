#include<iostream>
using namespace std;
int search(int n){
     int s = 0;
     int e = n;
     long long  mid ;
     int ans = -1;
     while(s<=e){
         mid = s+(e-s)/2;
         if(mid*mid== n) return mid;
         else if(mid*mid>n){
             ans = mid;
          e = mid-1;
         }
         else {
             ans = mid-1;
             s = mid + 1;
         }
     }
     return ans;
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int find  = search(n);
    cout<<"number is "<<find;
}