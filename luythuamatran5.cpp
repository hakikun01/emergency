#include<bits/stdc++.h>
using namespace std;
long long m = 1e9+7, n;
struct M
{
    long long f[10][10];
};
M operator*(M A, M B)
{
    M C; int i, j, k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            C.f[i][j] = 0;
            for(k=0;k<n;k++)
            {
                C.f[i][j] = (C.f[i][j] + A.f[i][k]*B.f[k][j]%m)%m;
            }
        }
    }
    return C;
}
M powMod(M A, long long N)
{
    if(N == 1) return A;
    M X = powMod(A, N/2);
    if(N%2) return X*X*A;
    return X*X;
}
int main()
{
    int t;
    long long k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        M A;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin >> A.f[i][j];
            }
        }
        A = powMod(A, k);
        long long res = 0;
        for(int i=0;i<n;i++)
        {
            res = (res+A.f[n-1][i])%m;
        }
        cout << res << endl;
    }
}