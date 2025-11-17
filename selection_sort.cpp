#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int min = i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[min]>arr[j]){
                int temp = arr[min];
                arr[min] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main(){
    int n;
    cout<<"enter the number of element ";
    cin>>n;
    int arr[10];
    cout<<"enter the array";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
    cout<<"sorted array is : ";
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<"\n";
        
    }
}