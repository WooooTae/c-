#include <iostream>
using namespace std;

int main()
{
	int T;

	cin >> T;
	while (T--)
	{
		int cnt = 0, total = 0;
		string s;
		cin >> s;

		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'o')
			{
				cnt++;
				total += cnt;
			}
			else
			{
				cnt = 0;
			}
		}

		cout << total << endl;
		cout << total << endl;
	}
}



