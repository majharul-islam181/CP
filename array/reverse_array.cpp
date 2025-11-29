// Array Reverse

#include <bits/stdc++.h>
using namespace std;

// Native Approche // Brute Force
// TC : O(N) 
// SC : O(N)
vector<int> reverse_arr_native(vector<int> &arr)
{

    int tmp_s = arr.size();
    vector<int> arr_c;

    // vector<int> arr_c;
    // arr_c.reserve(arr.size()); // Prevents resizing for efficiency

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        arr_c.push_back(arr[i]);
    }

    return arr_c;
}

int main()
{
    cout << "Reverse array" << endl;

    vector<int> arr = {1, 2, 3, 4, 5};

    vector<int> new_ar = reverse_arr_native(arr);

    cout << "Final Reverse Array: " << endl;

    for (int i = 0; i < new_ar.size(); i++)
    {
        cout << new_ar[i] << " ";
    }

    cout << endl
         << "Execution end" << endl;
}