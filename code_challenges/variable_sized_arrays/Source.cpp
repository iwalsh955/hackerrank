#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numOf;
    int que;
    cin >> numOf;
    cin >> que;
    int** masterArr = new int* [numOf];
    for (int k = 0; k < numOf; k++)
    {
        int temp;
        cin >> temp;
        masterArr[k] = new int[temp];
        for (int z = 0; z < temp; z++)
        {
            cin >> masterArr[k][z];
        }
    }
    int** queArr = new int* [que];
    for (int k = 0; k < que; k++)
    {
        queArr[k] = new int[2];
        for (int z = 0; z < 2; z++)
        {
            cin >> queArr[k][z];
        }
    }

    for (int k = 0; k < que; k++)
    {
        cout << masterArr[queArr[k][0]][queArr[k][1]] << endl;
    }

    //cout << masterArr[queArr[0][0]][queArr[0][1]] << endl;
    //cout << masterArr[queArr[1][0]][queArr[1][1]];

    return 0;
}

