#include<bits/stdc++.h>
using namespace std;
pair<int,int> printpair(){
    pair<int,int>p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;
    return p;
}
int main(){
   pair<int,int>mypair = printpair();
    cout<<mypair.first<<" "<<mypair.second<<endl;
}