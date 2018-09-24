/*Dipur code*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, x;
	cin >> a >> b >> c;

	set<int> prev;

	bool found = false;
	while(!prev.count(a)) {
		prev.insert(a);
		a *= 10;
		x = a / b;
		a %= b;
		if(x == c) {
			found = true;
			break;
		}
	}

	if(found) {
		cout << prev.size();
	} else {
		cout << -1;
	}

	return 0;
}
