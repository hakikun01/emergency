#include<bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i = a; i <= b; i++)
 
int main()
{
    int t = 1, n, k, x;
    cin >> t;
    string s;
    while(t--)
    {
        int a[1005];
        cin >> n >> k;
        FOR(i, 1, k) cin >> a[i];
        int tmp = k;
        while(a[tmp] == n - k + tmp) --tmp;
        if(tmp > 0)
        {
            ++a[tmp];
            FOR(i, tmp + 1, k) a[i] = a[i - 1] + 1;
            FOR(i, 1, k) cout << a[i] << ' ';
        }
        else FOR(i, 1, k) cout << i << ' ';
        cout << endl;
    }
    return 0;
}