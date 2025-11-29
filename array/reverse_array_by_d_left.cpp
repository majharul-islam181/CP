// Rotate an Array by d - Counterclockwise or Left
#include <bits/stdc++.h>
using namespace std;



// Brute Force solution
// TC : O(d) + O(n) : O(n+d)
// SC : O(d) // d extra space needed.
vector<int> reverse_d(vector<int> &arr, int d)
{

    d = d % arr.size();
    if(d==0) return arr;

    vector<int> tmp;
    for (int i = 0; i < d; i++)
    {
        tmp.push_back(arr[i]);
    }

    for (int i = d; i < arr.size(); i++)
    {
        arr[i - d] = arr[i];
    }

    int j = 0;

    for (int i = arr.size() - d; i < arr.size(); i++)
    {
        arr[i] = tmp[j];

        j++;
    }

    return arr;
}

int main()
{

    cout << "starting" << endl;
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int d = 3;

    vector<int> arr_r = reverse_d(arr, d);

    for (int i = 0; i < arr_r.size(); i++)
    {
        cout << arr_r[i] << " ";
    }
    cout<<endl;
}