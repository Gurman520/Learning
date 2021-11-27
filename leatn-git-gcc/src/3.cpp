#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        a *= 2;
        cout << a << endl;
    }
    else {
        cout << b << endl;
    }
}