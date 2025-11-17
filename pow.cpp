#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"enter the value of a  :";
    cin>>a;
    int b;
    cout<<"enter the value of b :";
    cin>>b;
    int ans = 1;
    for(int i=0;i<b;i++){
        ans = ans*a;
    }
    cout<<"value of the pow is :"<<ans;
}