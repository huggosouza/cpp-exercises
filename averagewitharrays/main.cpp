#include <iostream>

using namespace std;

int main() {
    double calculatedAverage = 0.0;
    double average[9] = {};

    for (int i = 0; i < 10; ++i) {
      cout << "Type average for student " << i << ": ";
      cin >> average[i];

      calculatedAverage += average[i];
    }

    calculatedAverage = calculatedAverage / 10;
    cout << "The class average is: " << calculatedAverage << endl;

    return 0;
}
