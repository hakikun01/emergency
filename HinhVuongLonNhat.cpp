#include<bits/stdc++.h>
using namespace std;
int a[505][505], c[505][505], n, m;
int tinh()
{
    memset(c, 0, sizeof(c));
    int i, j, kq = 0;
    for(i=0;i<=m;i++) c[0][i] = a[0][i];
    for(i=1;i<=n;i++) c[i][0] = a[i][0];

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(a[i][j] == 1) c[i][j] = min(c[i-1][j], min(c[i][j-1], c[i-1][j-1])) + 1;
            else c[i][j] = 0;
            kq = max(kq, c[i][j]);
        }
    }
    return kq;
}
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin >> a[i][j];
        cout << tinh() << endl;
    }
}