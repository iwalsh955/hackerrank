#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n1;
    cin >> n1;
    vector<int> v;
    for (int k = 0; k < n1; k++)
    {
        v.push_back(0);
        cin >> v[k];
    }
    sort(v.begin(), v.end());
    for (int k = 0; k < n1; k++)
    {
        cout << v[k] << " ";
    }
    return 0;
}
