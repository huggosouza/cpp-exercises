#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    int num = 0;

    while(num < 100){
        cout << "Okay " << num << endl;
        num++;

        this_thread::sleep_for(chrono::milliseconds(1000));
    };

    return 0;
}
