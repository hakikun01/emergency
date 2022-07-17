#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define all(x) (x).begin(), (x).end()
 
int main()
{
    int t, n, k, x;
    cin >> t;
    string s;
    while(t--)
    {
        cin >> n;
        vi a(n);
        for(int &i : a) cin >> i;
        next_permutation(all(a));
        for(int i : a) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
