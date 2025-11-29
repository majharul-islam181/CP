// Given an array arr[] consisting of only 0’s and 1’s,
//  return count of the maximum number of 
// consecutive 1’s or 0’s present in the array. 

#include <bits/stdc++.h>
using namespace std;


int maximum(int a, int b){
    if(a>b) return a;
    else return b;
}

int maxi_one(vector<int> &a, int x)
{

    int count = 0;
    int maxi = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == x)
        {
            count++;
            maxi = maximum(maxi, count);
        }
        else
        {
            count = 0;
        }
    }
    return maxi;
}



int main()
{

    vector<int> a = {0, 1,0,0,0,0,0, 1, 1, 0, 1, 1, 1, 0};
    //  maxi_one(a, 0);
    //  maxi_one(a, 1);
     cout<< maximum(maxi_one(a, 0), maxi_one(a, 1));
}