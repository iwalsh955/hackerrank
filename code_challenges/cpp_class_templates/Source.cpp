#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*Write the class AddElements here*/




/*Write the class AddElements here*/
template <class T>
class AddElements
{
public:
    T var1;
    AddElements(T v1) {
        var1 = v1;
    }
    T add(T v2)
    {
        return var1 + v2;
    }
};
template <>
class AddElements <string>
{
public:
    string var1;
    AddElements(string v1) {
        var1 = v1;
    }
    string concatenate(string v2)
    {
        return var1 + v2;
    }
};




int main() {
    int n, i;
    cin >> n;
    for (i = 0; i < n; i++) {
        string type;
        cin >> type;
        if (type == "float") {
            double element1, element2;
            cin >> element1 >> element2;
            AddElements<double> myfloat(element1);
            cout << myfloat.add(element2) << endl;
        }
        else if (type == "int") {
            int element1, element2;
            cin >> element1 >> element2;
            AddElements<int> myint(element1);
            cout << myint.add(element2) << endl;
        }
        else if (type == "string") {
            string element1, element2;
            cin >> element1 >> element2;
            AddElements<string> mystring(element1);
            cout << mystring.concatenate(element2) << endl;
        }
    }
    return 0;
}
