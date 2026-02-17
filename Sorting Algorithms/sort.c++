#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[4] = {1 , 4, 2, 0};

    sort(arr, arr + 5);

    for (int val : arr) {

        cout << val << " ";

    }
    cout << endl;
    return 0;

}


