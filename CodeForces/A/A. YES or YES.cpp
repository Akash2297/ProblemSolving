#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string s;
	bool flag;

	cin >> n;

	while (n--)
	{
		cin >> s;
		flag = false;

		if (s.size() == 3)
		{
			if ((s[0] == 'Y' || s[0] == 'y') && (s[1] == 'E' || s[1] == 'e') && (s[2] == 'S' || s[2] == 's')) {
				flag = true;
			}
		}

		if(flag) cout << "YES\n";
		else cout << "NO\n";

		s = "";
	}
}