#include<bits/stdc++.h>
using namespace std;
long long M = 1e9+7;
struct MaTran
{
    long long f[2][2];
};
MaTran operator*(MaTran A, MaTran B)
{
    MaTran C; int i, j , k;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            C.f[i][j] = 0;
            for(k=0;k<2;k++)
            {
                C.f[i][j] = (C.f[i][j] + A.f[i][k]*B.f[k][j]%M)%M;
            }
        }
    }
    return C;
}
MaTran powMod(MaTran A, int N)
{
    if(N == 1) return A;
    MaTran X = powMod(A, N/2);
    if(N%2) return X*X*A;
    return X*X;
}
int main()
{
    int t;
    long long n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        MaTran A;
        A.f[0][0] = A.f[0][1] = A.f[1][0] = 1;
        A.f[1][1] = 0;
        A = powMod(A, n);
        cout << A.f[0][1] << endl;
    }
    
    return 0;
}