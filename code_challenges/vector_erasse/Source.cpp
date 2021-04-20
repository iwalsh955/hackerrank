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
    vector<int> v;
    for (int k = 0; k < size; k++)
    {
        v.push_back(0);
        cin >> v[k];
    }
    int erase;
    cin >> erase;
    v.erase(v.begin() + erase - 1);
    int begin, end;
    cin >> begin >> end;
    v.erase(v.begin() + begin - 1, v.begin() + end - 1);
    cout << v.size() << endl;
    for (int k = 0; k < v.size(); k++)
    {
        cout << v[k] << " ";
    }
    return 0;
}
