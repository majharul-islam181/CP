#include <bits/stdc++.h>
using namespace std;


int re_num(int n){
    int last_digit;
    int reverse ;

    while(n>0){
      last_digit = n % 10; 
      n = n/10;
      reverse =((reverse *10)+last_digit);
    }

    return reverse;
    
}


int main(){
    cout<<"Starting point......"<<endl;
    cout<<"Enter number"<<endl;
    int nm;
    cin>>nm;
    cout<<re_num(nm)<<endl;




    cout<<"Ending time"<<endl;
}