#include <iostream>

using namespace std;

struct Person{
    string name;
    string lastname;
    int age;
};

int main() {

    Person p;
    Person h;

    h.name = "hugo";
    h.age = 17;
    h.lastname = "souza";
    p.name = "paulo";
    p.age = 20;
    p.lastname = "anderson";

    cout << "Which person do you want to see? (p or h): ";
    char ans;
    cin >> ans;

    if (ans == 'p'){
        cout << "Person P: " << endl << "Name: " << p.name << " " << p.lastname << endl << "Age: " << p.age;
    }
    else{
        if (ans == 'h'){
            cout << "Person H: " << endl << "Name: " << h.name << " " << h.lastname << endl << "Age: " << h.age;
        }
        else{
            cout << "YOU NEED TO CHOOSE P OR H!!!";
        }
    }


    return 0;
}
