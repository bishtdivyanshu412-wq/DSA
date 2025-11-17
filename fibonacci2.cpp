#include<iostream>
using namespace std;
int main(){
    int n,num;
    cout<<"enter the n";
    cin>>n;
    int a=0;
    int b=1;
    int target[100];
   // cout<<a<<endl;
   // cout<<b<<endl;
    int sum =0;
    target[0]=0;
    target[1]=1;
    for(int i=0;i<n-2;i++){
        while(a==0 && b==1){
            cout<<a<<endl;
            cout<<b<<endl;
            break;
        }
        
        sum = a+b;
        a=b;
        b=sum;
        cout<<sum<<endl;
    
        target[i+2] = sum;
    }
    cout << "enter the index(use 0 based indexing): " << "\n";
    cin >> num;
    cout << target[num];
}