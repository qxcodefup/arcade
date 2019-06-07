#include <bits/stdc++.h>
using namespace std;

int main() {
	int p; 
	cin >> p;

	int a = 0, b = 0;
	cin >> a >> b;

	if((a + b) % 2 == 0)
		if(p == 0)
			cout << "0" << endl;
		else
			cout << "1" << endl;
	else
		if(p == 0)
			cout << "1" << endl;
		else
			cout << "0" << endl;
	

	return 0;
}

