#include<bits/stdc++.h>
using namespace std;
struct toado
{
    int start, finish;
} x[100005];
bool cmp(toado x, toado y)
{
    return x.finish < y.finish;
}
int main()
{
    int t, n, i, j, d;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i=0;i<n;i++) cin >> x[i].start >> x[i].finish;
        sort(x, x+n, cmp);
        i = 0; d = 1;
        for(j=1;j<n;j++)
        {
            if(x[j].start >= x[i].finish)
            {
                i = j; d++;
            }
        }
        cout << d << endl;
    }
    return 0;
}