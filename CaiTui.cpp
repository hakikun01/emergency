#include<bits/stdc++.h>
using namespace std;
struct DoVat
{
    int volume, value;
} a[1005];
long long c[1005][1005];
long long tinh(int n, int v)
{
    long long result = 0;
    memset(c, 0, sizeof(c));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=v;j++)
        {
            if(j < a[i].volume) c[i][j] = c[i-1][j];
            else c[i][j] = max(c[i-1][j],  c[i-1][j - a[i].volume] + a[i].value);
            result = max(result, c[i][j]);
        }
    }
    return result;
}
main()
{
    int t, n, v, i;
    cin >> t;
    while(t--)
    {
        cin >> n >> v;
        for(i=0;i<n;i++) cin >> a[i].volume;
        for(i=0;i<n;i++) cin >> a[i].value;
        cout << tinh(n, v) << endl;
    }
}