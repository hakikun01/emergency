#include<bits/stdc++.h>
using namespace std;
main()
{
    int i, j, n, t, a[1001], f[1001], kq;
    cin >> t;
    while(t--)
    {
        cin >> n;
        kq = 0;
        for(i=0;i<n;i++) cin >> a[i];
        for(i=0;i<n;i++)
        {
            f[i] = 1;
            for(j=0;j<i;j++)
            {
                if(a[j]<=a[i])
                {
                    f[i] = max(f[i], f[j] + 1);
                }
            }
            kq = max(kq,  f[i]);
        }
        cout << n-kq << endl;
    }
    return 0;
}