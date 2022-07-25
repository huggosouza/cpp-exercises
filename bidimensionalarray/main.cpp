#include <iostream>

using namespace std;

int main() {
    int tabela[5][5] = {};
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            tabela[i][j] = 9;
            cout << tabela[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
