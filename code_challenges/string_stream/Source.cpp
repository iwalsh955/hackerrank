#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    vector<int> myVect;
    int count = 0;
    stringstream ss(str);
    char ch;

    for (int k = 0; k < str.length(); k++)
    {
        if (str[k] == ',')
        {
            count++;
        }
    }
    for (int k = 0; k < count + 1 && count != 0; k++)
    {
        myVect.push_back(0);
        ss >> myVect[k] >> ch;
    }
    return myVect;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}

