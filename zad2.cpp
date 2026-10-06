#include <iostream>
using namespace std;

int main() {
    int a, B;
    cin >> a >> b;

    while (a > b) {
        if (a % 2 == 0 && a / 2 >= b) {
            cout << ":2" << endl;
            a = a / 2;
        } else {
            cout << "-1" << endl;
            a = a - 1;
        }
    }
    return 0;
}