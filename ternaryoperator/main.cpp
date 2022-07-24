#include <iostream>

using namespace std;

int main() {
    cout << "Type a number." << endl;
    int n = 0;
    cin >> n;
    string text = (n < 10) ? "less than ten" : "more than ten";
    cout << "Text: " << text << endl;
    return 0;
}
