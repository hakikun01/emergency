#include<bits/stdc++.h>
using namespace std;
long long m = 1e9+7;
struct M
{
    long long f[2][2];
};
M operator*(M A, M B)
{
    M C; int i, j, k;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            C.f[i][j] = 0;
            for(k=0;k<2;k++)
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
    int t; long long n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        M A;
        A.f[0][0] = A.f[0][1] = A.f[1][0] = 1;
        A.f[1][1] = 0;
        A = powMod(A, n);
        cout << A.f[0][1] << endl;
    }
}