#include <iostream>

using namespace std;

bool par(int num){
    if(num % 2 == 0)
        return true;
    return false;
}

int main() {
    int n;
    cout << "Digite um numero: ";
    cout << endl;
    cin >> n;

    if(par(n) == true){
        cout << "O numero eh par!!";
    }
    else{
        cout << "O numero eh impar!!";
    }
    return 0;
}
