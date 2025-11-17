#include<iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    int k = 0;
    int temp[50];
    int left = low;
    int right = mid + 1;
    // comparing both side array and storing in temporary array
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp[k++] = arr[left];
            left++;
        } else {
            temp[k++] = arr[right];
            right++;  
        }
    }
    // element if left on the left side
    while (left <= mid) {
        temp[k++] = arr[left++];
    }
    // element  if left on the right side
    while (right <= high) {
        temp[k++] = arr[right++];
    }

    //  Copy back AFTER merging
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergesort(int arr[],int low ,int high){
    if(low>=high) return ;
    int mid = (low+high)/2;
    mergesort(arr,low,mid); // for first half
    mergesort(arr,mid+1,high); // for second half
    merge(arr,low,mid,high); // for merging both the array
}


int main(){
    int n;
    cout<<"enter the size of the array";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}