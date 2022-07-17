#include<bits/stdc++.h>

using namespace std;

#define FOR(i, a, b) for(int i = a; i <= b; i++)

 
int a[1005];

int main()
{
    int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        FOR(i, 1, k) cin >> a[i];
        int tmp = k;
        while(a[tmp - 1] + 1 == a[tmp] && tmp) --tmp;
        if(tmp)
        {
            --a[tmp];
            FOR(i, tmp + 1, k) a[i] = n - k + i;
            FOR(i, 1, k) cout << a[i] << ' ';
        }
        else FOR(i, n - k + 1, n) cout << i << ' ';
        cout << endl;
    }
    return 0;
}