#include <iostream>
using namespace std;

int main() {
    int n, z = 0, i = 1, last = 0;
    cin >> n;
    while (z < n) {
        z = i * i;
        i += 1;
        if (z < n)
            cout << z << " ";
        else
            z = n;
        last = z;
    }
}