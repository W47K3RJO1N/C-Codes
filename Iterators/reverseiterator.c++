#include <bits/stdc++.h>
using namespace std;

void iteratorreverse() {
vector<int> vec = {1 , 23 ,4 ,5 ,6};

    // vector<int>::iterator it;
    // for (it = vec.begin() ; it != vec.end(); it++) {
    //     cout << *(it) << " ";

    vector<int> :: reverse_iterator it;
    for (auto it = vec.rbegin(); it != vec.rend(); it++) {
        cout << *(it) << " ";
    }

    cout << endl;
    }


int main() {
    iteratorreverse();
    return 0;
}