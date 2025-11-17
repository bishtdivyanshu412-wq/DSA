#include<iostream>
using namespace std;
double mydeposit(double);
double mywithdrawl(double);
double withdrawl = 0;
int main(){
    
    
    int choice = 0;
    double balance = 0;
    do{
    cout << "**********Welcome**********\n";
    cout << "1: deposit\n";
    cout << "2: balance\n";
    cout << "3: withdrawl\n";
    cout << "4: exit\n";
    cout << "Enter your choice : ";
    cin >> choice;
    cin.clear();
    fflush(stdin);

    switch(choice){
        case 1: balance = mydeposit(balance);
        break;
        case 2: cout << "Your balance is " << balance << endl;
        break;
        case 3: balance = mywithdrawl(balance);
        break;
        case 4: cout << "Thanks!!!!\n";
        break;
        default: 
        cout << "Enter vaild choice.. \n";
                }
    }while(choice != 4);
    
}
double mydeposit(double balance){
    double deposit = 0;
    cout << "Enter the amount you want to deposit: \n";
    cin >> deposit;
    balance = balance + deposit;
    cout <<"THE TOTAL AMOUNT IS: "<<balance << endl;
    return balance;
}
double mywithdrawl(double balance){
    cout << "Enter the amount you want to withdrawl: \n" ;
    cin >> withdrawl;
    if(withdrawl>=0){
    if(withdrawl == 0){
        cout << "Enter a valid amount!!!!\n";
    }
        if(withdrawl!=0){
        if(withdrawl < balance){
            balance = balance - withdrawl;
            cout << "THE AMOUNT LEFT IS : " << balance << endl;
            return balance; 
        }
        else{
            cout << "INSUFFICIENT BALANCE!!!!\n";
        }
    }
}
else{
    cout << "abe chutiye !!!!" << endl;
}
    
}