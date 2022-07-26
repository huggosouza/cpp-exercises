#include <iostream>

using namespace std;

struct Window{
    string title;
    int left;
    int top;

};

int main() {

    Window j1;
    j1.title = "Window1";
    j1.left = 0;
    j1.top = 0;

    Window j2;
    j2.title = "Linux";
    j2.left = 250;
    j2.top = 250;

    cout << "The title is " << j2.title << endl
        << "Left: " << j2.left << endl
        << "Top: " << j2.top << endl;



    return 0;
}
