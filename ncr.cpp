#include<iostream>
using namespace std;
int send(int n,int r){
    int nfact = 1;
    for(int i=n;i>=1;i--){
        nfact = nfact*i; 
    }
    int rfact=1;
    for(int j=r;j>=1;j--){
        rfact = rfact *j;
    }
    int nrfact= 1;
    for(int z=n-r;z>=1;z--){
        nrfact = nrfact *z;
    }
    int answer = nfact/(rfact*nrfact);
    return answer ;
    
}
int main(){
    int n;
    cout<<"enter the n";
    cin>>n;
    int r;
    
    cout<<"enter the r";
    cin>>r;
    int ncr = send(n,r);
    cout<<"ncr of the given number is "<<ncr;
}