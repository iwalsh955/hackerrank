#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
public:
    string name;
    int age;
    virtual void getdata() {}
    virtual void putdata() {}
};

class Professor : public Person {
public:
    int publications, cur_id;
    static int id;
    Professor() :cur_id(id++)
    {
    }

    void getdata() {
        cin >> name;
        cin >> age;
        cin >> publications;
    }
    void putdata()
    {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};

int Professor::id = 1;

class Student : public Person {
public:
    int marks[6];
    int cur_id;
    static int id;
    Student() :cur_id(id++)
    {
    }

    void getdata() {
        cin >> name;
        cin >> age;
        for (int k = 0; k < 6; k++)
        {
            cin >> marks[k];
        }
    }
    void putdata()
    {
        int sum = 0;
        for (int k = 0; k < 6; k++)
        {
            sum += marks[k];
        }
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }
};

int Student::id = 1;


int main() {

    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person** per = new Person*[n];

    for (int i = 0; i < n; i++) {

        cin >> val;
        if (val == 1) {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.
        delete per[i];
    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.
    delete[] per;
    return 0;

}
