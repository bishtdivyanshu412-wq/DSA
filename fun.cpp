#include<iostream>
using namespace std;
int  power(int a, int b){
    int answer = 1;
    for(int i=0;i<b;i++){
        answer = answer * a;
    }
    return answer;
}
int main(){
   int a;
   cout<<"enter a";
   cin>>a;
   cout<<"enter b";
   int b;
   cin>>b;
   int count = power(a,b);
   cout<<count;
}