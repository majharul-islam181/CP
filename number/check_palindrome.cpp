#include <bits/stdc++.h>
using namespace std;

bool palindrome(int num)
{
    if (num < 0)
        return false;

    string s = to_string(num);

    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

int main()
{
    cout <<endl << endl;

    int x = 1221;
    // bool y = palindrome(x);
    // cout << "is palindrome ? :  "<<y;
    if (palindrome(x)) {
        cout << "Palindrome Number" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    cout<<endl<<endl;
}