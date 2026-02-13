#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<string, int>> students;

    students.push_back({"Rahul", 85});
    students.push_back({"Amit", 90});
    students.push_back({"Neha", 78});

    for (auto &s : students) {
        cout << s.first << " scored " << s.second << endl;
    }

    return 0;
}
