#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // Upper half
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++)
            cout << "*";

        for(int space = 1; space <= 2*(n - i); space++)
            cout << " ";

        for(int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    // Lower half
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++)
            cout << "*";

        for(int space = 1; space <= 2*(n - i); space++)
            cout << " ";

        for(int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}
