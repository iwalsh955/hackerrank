#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int high = 0;
    if (a > high)
        high = a;
    if (b > high)
        high = b;
    if (c > high)
        high = c;
    if (d > high)
        high = d;
    return high;
}

int main() {
    int a, b, c, d;
    scanf_s("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

