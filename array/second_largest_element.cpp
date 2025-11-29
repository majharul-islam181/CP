// Second Largest Element in an Array

#include <bits/stdc++.h>
using namespace std;

int second_lar(vector<int> &arr)
{

    int f_lar = INT_MIN;
    int s_lar = INT_MIN;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > f_lar)
        {
            s_lar = f_lar;
            f_lar = arr[i];
        }
        else if (arr[i] > s_lar && arr[i]< f_lar)
        {
            s_lar = arr[i];
        }
    }

    if(s_lar == INT_MIN) return -1;

    return s_lar;
}

int main()
{

    cout << "Insert array" << endl;
    // int arr_size;
    // cin >> arr_size;
    // vector<int> arr(arr_size);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cin >> arr[i];
    // }
    // Assign Array initially: 
    vector<int> arr = {10, 12, 3, 10, 9, 12};

    cout <<"Second largest : "<< second_lar(arr)<<endl;

    cout << "end" << endl;
}