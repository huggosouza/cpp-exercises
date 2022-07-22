#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num1 = 10;
    int num2 = 20;
    cout << "Num1 var = " << num1 << endl;
    cout << "Num2 var = " << num2 << endl;
    cout << setw(0) << num1 + num2 << endl;
    system("pause");
    return 0;
}