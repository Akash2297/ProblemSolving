#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    int a, b, c;
    int temp;

    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c;

        if (a + b == c || b + c == a || c + a == b)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
