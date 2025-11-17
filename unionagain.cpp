#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    cout<<"enter the array 1 : ";
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int z;
    cout<<"enter the value of z";
    cin>>z;
    cout<<"enter the array 2 : ";
    int brr[10];
    for(int i=0;i<z;i++){
        cin>>brr[i];
    }
    int temp[20];
    int k =0;
    for(int i=0;i<n;i++){
        temp[k++] = arr[i];
    }
    for(int i=0;i<z;i++){
        int  found = 0;
        for(int j=0;j<k;j++){
            if(brr[i] == temp[j]){
                found = found + 1;
                break;
            }
        }
        if (found == 0){
            temp[k++] = brr[i];
        }
    }
    for(int i=0;i<k;i++){
        cout<<temp[i];
    }
}