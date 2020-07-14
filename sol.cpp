/**
 *	author: jasonpogi
 *	created: 14.07.2020 15:49:38
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n;
	cin >> n;
	long long tmp = n * (n + 1);
	tmp /= 2;
	cout << tmp % 2 << '\n';
	return 0;
}
