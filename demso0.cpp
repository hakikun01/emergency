#include <bits/stdc++.h>
using namespace std;
int bs(int a[], int l, int r, int x)
{
	while (l <= r) {
		int m = l + (r - l) / 2;
		if (a[m] == x)
			return m;
		if (a[m] < x)
			l = m + 1;
		else
			r = m - 1;
	}
	return -1;
}

int main(void)
{
	int t, n, result; cin >> t;
    while(t--)
    {
        cin >> n;
        vector<int> a(n);
        for(int &i:a) cin >> i;
        cout << lower_bound(a.begin(), a.end(), 1) - a.begin() << endl;
    }
	return 0;
}
