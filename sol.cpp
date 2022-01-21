#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string month;
	cin >> month;
	int k;
	cin >> k;
	// simply convert the textual month into its numeric equivalent and add k, then take modulo 12
	string months[] = {"January", "February", "March", "April", "May", "June",
					 "July", "August", "September", "October", "November", "December"};
	int m = -1;
	for (int i = 0; i < 12; i++) {
		if (months[i] == month) {
			m = i;
		}
	}
	cout << months[(m + k) % 12] << '\n';
	return 0;
}
