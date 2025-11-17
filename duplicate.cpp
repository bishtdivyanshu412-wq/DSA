#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the n";
    cin>>n;
    int arr[100];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        for(int j=i+1;j<=n-1;j++){
            if (arr[i] == arr[j]){
            cout<<"duplicate found  i :"<<i<<"j :"<<j<<endl;
            cout<<arr[i] << endl <<arr[j];
        }
        }
    }
}