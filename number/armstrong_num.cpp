#include <bits/stdc++.h>
using namespace std;

bool check_am(int n)
{

    int original = n;

    int arm_value = 0;

    while (n > 0)
    {

        int last = n % 10;
        int last_cube = last * last * last;

        arm_value = arm_value + last_cube;
        cout << "arm value: " << arm_value << " " << endl;
        n = n / 10;
    }

    return (original == arm_value);
}

int main()
{
    cout << endl
         << endl;

    int x = 371;

    check_am(x);

    if (check_am(x))
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not Armstrong" << endl;
    }

    cout << endl
         << endl;
}