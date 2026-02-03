/*
1
1 2
1 2 3
1 2 3 4
*/

#include <bits/stdc++.h>
using namespace std;

void numbertriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    numbertriangle(n);
    return 0;
}

/*
1 2 3 4 
1 2 3
1 2 
1 
*/

#include <bits/stdc++.h>
using namespace std;

void numbertriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    numbertriangle(n);
    return 0;
}