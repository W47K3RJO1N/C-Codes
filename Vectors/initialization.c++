#include <bits/stdc++.h>
using namespace std;

void popback() {

    vector<int> vec = { 1, 2, 3, 4, 5};
   

    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    cout << " front " << vec.front() << endl;
    cout << " back " << vec.back() << endl;

}

int main () {
    popback();
    return 0;
}