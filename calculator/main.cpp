#include <iostream>

using namespace std;

int main() {
    char operation = 0;
    int n1 = 0;
    int n2 = 0;
    cout << "Type the n1: ";
    cin >> n1;
    cout << "Type the n2: ";
    cin >> n2;

    cout << "Type the operation signal (+, -, *, /): ";
    cin >> operation;

    if (operation == '+'){
        cout << n1 + n2 << " - SUM" << endl;
    }
    if (operation == '-') {
        cout << n1 - n2 << " - DECREASE" << endl;
    }
    if (operation == '/'){
        cout << n1 / n2 << " - DIVISION" << endl;
    }
    if (operation == '*'){
        cout << n1 * n2 << " - MULTIPLICATION" << endl;
    }
    if (operation != '+' && '-' && '/' && '*'){
        cout << " NOT A VALID OPERATION SIGNAL!!" << endl;
        system("pause");
    }

    return 0;
}
