#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    for (int k = a; k <= b; k++)
    {
        if (k == 1)
            cout << "one";
        else if (k == 2)
            cout << "two";
        else if (k == 3)
            cout << "three";
        else if (k == 4)
            cout << "four";
        else if (k == 5)
            cout << "five";
        else if (k == 6)
            cout << "six";
        else if (k == 7)
            cout << "seven";
        else if (k == 8)
            cout << "eight";
        else if (k == 9)
            cout << "nine";
        else if (k > 9)
        {
            if (k % 2 == 0)
                cout << "even";
            else
                cout << "odd";
        }
        cout << endl;
    }
    return 0;
}

