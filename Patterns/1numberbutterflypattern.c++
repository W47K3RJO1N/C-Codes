#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // Upper half
    for(int i = 1; i <= n; i++) {
        // Left 1s
        for(int j = 1; j <= i; j++)
            cout << "1";

        // Spaces
        for(int space = 1; space <= 2*(n - i); space++)
            cout << " ";

        // Right 1s
        for(int j = 1; j <= i; j++)
            cout << "1";

        cout << endl;
    }

    // Lower half
    for(int i = n; i >= 1; i--) {
        // Left 1s
        for(int j = 1; j <= i; j++)
            cout << "1";

        // Spaces
        for(int space = 1; space <= 2*(n - i); space++)
            cout << " ";

        // Right 1s
        for(int j = 1; j <= i; j++)
            cout << "1";

        cout << endl;
    }

    return 0;
}
