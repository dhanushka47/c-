#include <iostream>
#include <string>
using namespace std;

struct person {
    string name;
    int age;
    float salary;
    string email;
};

int main(){
    person p1;

    cout << "Enter person name: ";
    getline(cin, p1.name);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;
    cout << "Enter email: ";
    cin >> p1.email;

    cout << "The name is: " << p1.name << endl;
    cout << "The age is: " << p1.age << endl;
    cout << "The salary is: " << p1.salary << endl;
    cout << "The email is: " << p1.email << endl;

    return 0;
}

