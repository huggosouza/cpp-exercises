#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    unsigned int microseconds = 1000000;
    int num = 0;

    while(num < 100){
        cout << "Okay " << num << endl;
        num++;

        usleep(microseconds);
    };

    return 0;
}
