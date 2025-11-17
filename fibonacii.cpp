#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n";
    cin>>n;
    int a=0;
    int b=1;
   // cout<<a<<endl;
   // cout<<b<<endl;
    int sum =0;
    for(int i=0;i<=n-3;i++){
       // while(a==0 && b==1){
           // cout<<a<<endl;
           // cout<<b<<endl;
          //  break;
       // }
        
        sum = a+b;
        a=b;
        b=sum;
       // cout<<sum<<endl;
    }
    if(n==1){
        cout<<a;
    }
    if(n==2){
        cout<<b;
    }
    cout<<sum;
}