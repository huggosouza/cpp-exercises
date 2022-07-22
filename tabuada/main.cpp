#include <iostream>

using namespace std;

int main() {
    int tabuada;
    cout << "Por favor informe a tabuada que você deseja: ";
    cin >> tabuada;
    cout << endl;

    for (int i = 0; i <= tabuada; ++i) {
        cout << i << " x " << tabuada << " = " << i*tabuada << endl;
    }

    return 0;
}
