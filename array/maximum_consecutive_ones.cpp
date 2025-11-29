//Maximum consecutive one’s (or zeros) in a binary array

#include <bits/stdc++.h>
using namespace std;


int maximum(int a, int b){
    if(a>b) return a;
    else return b;
}

int maxi_one(vector<int> &a)
{

    int count = 0;
    int maxi = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 1)
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

    vector<int> a = {0, 1, 0, 1, 1, 0, 1, 1, 1, 0};
    cout << maxi_one(a);
}