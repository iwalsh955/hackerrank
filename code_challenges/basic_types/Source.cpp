#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    long li;
    char c;
    float f;
    double d;
    scanf_s("%i %li %c %f %lf", &i, &li, &c, 1, &f, &d);
    printf("%i\n%li\n%c\n%f\n%lf", i, li, c, f, d);
    return 0;
}

