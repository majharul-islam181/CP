#include <bits/stdc++.h>
using namespace std;

int main()
{

    cout << "Staring........" << endl;
    cout << "Enter the numbers" << endl;
    int x;
    cin >> x;
    int count = 0;
    while(x>0){

       x =  x / 10;
       count ++; 

    }
    cout<<count<<endl;
}