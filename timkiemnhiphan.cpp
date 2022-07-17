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
	int t, n, k, result; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int a[n];
        for(int &i:a) cin >> i;
        result = bs(a, 0, n - 1, k);
        (result == -1)
		? cout << "NO"
		: cout << result+1;
        cout << endl;
    }
	return 0;
}
