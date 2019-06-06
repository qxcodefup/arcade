#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios::sync_with_stdio(0);
	int n;	
	cin >> n;
	int a = 0, b = 0;
	while (n--)
	{
		int x; cin >> x;
		a = !a;
		if (x == 2) b = !b;
	}
	cout << a << endl;
	cout << b << endl;
}

