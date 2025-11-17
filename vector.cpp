#include<bits/stdc++.h>
using namespace std;
void samplevector(){
    vector<int>vec;
    vec.push_back(1);
    vec.emplace_back(5);
    cout<<vec[0]<<" "<<vec[1]<<endl;
 vector<int>v(5,20);
 vector<int>::iterator it = v.begin();
it++;
 cout<< *(it)<< " ";
 it = it+2;
 cout<< *(it)<<" ";
 for(vector<int>::iterator it = v.begin(); it != v.end() ;it++){
     cout<< *(it)<<" ";
 }
}

int main(){
 samplevector();  
}