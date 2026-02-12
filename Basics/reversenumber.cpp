#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, reverse = 0;

    cout << "Enter a number: ";
    cin >> n;

    int original = n;  
    n = abs(n);         

    while(n > 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if(original < 0)
        reverse = -reverse;

    cout << "Reversed number: " << reverse;

    return 0;
}
