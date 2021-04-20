#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size;
    cin >> size;
    int* arr = new int[size];
    for (int k = 0; k < size; k++)
    {
        cin >> arr[k];
    }
    for (int k = size - 1; k >= 0; k--)
    {
        cout << arr[k] << " ";
    }


    delete[] arr;
    return 0;
}
