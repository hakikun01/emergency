#include<bits/stdc++.h>
using namespace std;
struct Friend
{
    int length;
    long long at[25];
};
Friend f[300005];
main()
{
    long long n, k, i, j, len, result = 0; string tmp;
    cin >> n >> k;
    f[0].length = 0;
    for(i=1;i<=20;i++) f[0].at[i] = 0;
    for(i=1;i<=n;i++)
    {
        cin >> tmp;
        len = tmp.length();
        f[i].length = len;
        for(j=2;j<=20;j++) f[i].at[j] = f[i-1].at[j];
        f[i].at[len]++;
    }
    for(i=1;i<=n;i++)
    {
        len = f[i].length;
        if(i > k)
        {
            result += f[i].at[len] - f[i-k-1].at[len] - 1;
        }
        else
        {
            result += f[i].at[len] - f[0].at[len] - 1;
        }
    }
    cout << result;
    return 0;
}
/*
####
4 2
NAM
TAM
THU
HAI
####
5
*/
/*
####
6 3
NAM
TRUNG
TRUONG
HUYEN
TU
NGUYEN
####
2
*/


