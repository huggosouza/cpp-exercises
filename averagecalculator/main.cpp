#include <iostream>

using namespace std;

int main() {
    double average, n1, n2, n3, n4;

    cout << "Insert n1 value: ";
    cin >> n1;
    cout << "Insert n2 value: ";
    cin >> n2;
    cout << "Insert n3 value: ";
    cin >> n3;
    cout << "Insert n4 value: ";
    cin >> n4;
    cout << endl;

    average = (n1 + n2 + n3 + n4) / 4;

    cout << "Your average is: " << average << endl;

    if (average < 6){
        cout << "Sorry! Try again next year, you're disapproved.";
    }
    else{
        cout << "Congrats! Your average was >6 and you're approved. Enjoy your vacation.";
    }

    return 0;
}
