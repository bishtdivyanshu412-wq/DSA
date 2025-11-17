#include<iostream>
using namespace std;
int main(){
    int k,n;
    int arr[100];
    cout << "Enter k: " << endl;
    cin >> k;
    cout << "Enter Range of the array: " << endl;
    cin >> n ;
    cout << "Enter elements of the array : " << endl;
    for(int i = 0 ; i< n ; i++){
        cin >> arr[i] ;
    }

    for(int i = 1 ; i<=k ; i++){
        arr[0] = arr[n-1];
        for(int j = 0 ; j<n ; j++){
            arr[j+1] = arr[j];
        }
    }
    cout << "NEw array: " << endl;
    for(int i = 0 ; i< n ; i++){
        cout << arr[i] ;
    }
}