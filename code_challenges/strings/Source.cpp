#include <iostream>
#include <string>
using namespace std;

int main() {
    // Complete the program
    string n1, n2;
    cin >> n1 >> n2;
    cout << n1.length() << " " << n2.length() << endl;
    cout << n1 + n2 << endl;
    cout << n2[0] << n1.substr(1, n1.length()) << " " << n1[0] <<
        n2.substr(1, n2.length()) << endl;

    return 0;
}

