#include <iostream>
using namespace std;
int main(){
int num;
cout << "Enter your number : ";
cin >> num;
for(int i = 0;i<num ;i++){
    int sum = num  - i;
    cout << sum << "\n";
}
    return 0;
}