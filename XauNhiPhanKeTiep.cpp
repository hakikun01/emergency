#include<bits/stdc++.h>
using namespace std;
string s;
void solve()
{
    int i = s.size() - 1;
    while(s[i] == '1' && i >= 0) i--;
    if(i < 0)
    {
        for(int j = 0; j < s.size(); j++)
            cout << 0;
    }
    else{
        s[i]='1';
        for(int j = i+1; j < s.size(); j++)
            s[j] = '0';
        cout << s << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        cin >> s;
        solve();
    }
}