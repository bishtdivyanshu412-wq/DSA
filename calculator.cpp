#include<iostream> 
using namespace std;
int  main(){
    int a;
    cout<<"enter the a :";
    cin>>a;
    int b;
    cout<<"enter the b :";
    cin>>b;
    char ch;
    cout<<"enter the charater + , - , * , /  :";
    cin>>ch;
    cout<<"calculating ..............."<<endl;
    switch (ch){ case('+') : cout<<a+b<<endl;
            break;
    
            case('-') : cout<<a-b<<endl;
            break;
            
            case('*') : cout<<a*b<<endl;
            break;
            
            case('/') : cout<<a/b<<endl;
            break;
            
            default : cout<<"invalid character by user";
            }
      cout<<"calculating ................"<<endl;
} 