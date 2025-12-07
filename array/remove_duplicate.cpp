#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr)
{

    unordered_set<int> seen;

    int count = 0;

    for (int x : arr)
    {
        if (!seen.count(x))
        {
            seen.insert(x);
            arr[count] = x;
            count++;
        }
    }

    return count;
}

int main()
{
    vector<int> a = {1, 1, 1, 2, 3, 4, 5, 3};

    int len = removeDuplicates(a);
    //
    cout << "size : " << len << endl;

    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
