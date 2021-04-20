#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num; cin >> num;
    set<int> s;

    for (int k = 0; k < num; k++)
    {
        int type, val;
        cin >> type >> val;
        switch (type) {
        case 1:
        {
            s.insert(val);
            break;
        }
        case 2:
        {
            set<int>::iterator itr = s.find(val);
            if (itr != s.end()) { s.erase(val); }
            break;
        }
        case 3:
        {
            set<int>::iterator itr = s.find(val);
            if (itr != s.end()) { cout << "Yes" << endl; }
            else { cout << "No" << endl; }
            break;
        }
        }
    }
    return 0;
}



