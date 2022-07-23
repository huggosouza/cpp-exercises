#include <iostream>

using namespace std;

int main() {
    char operation = 0;
    int n1, n2 = 0;
    cout << "Type an operation signal: ";
    cin >> operation;
    cout << endl << "Type n1: ";
    cin >> n1;
    cout << endl << "Type n2: ";
    cin >> n2;

    switch (operation){
        case '+':
            cout << "SUM: " << n1 + n2 << endl;
            break;
        case '-':
            cout << "DECREASE: " << n1 - n2 << endl;
            break;
        case '/':
            cout << "DIVISION: " << n1 / n2 << endl;
            break;
        case '*':
            cout << "MULTI: " << n1 * n2 << endl;
            break;
        default:
            cout << "TYPE A VALID OPERATION SIGNAL!!!" << endl;
    }

    return 0;
}
