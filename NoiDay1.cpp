#include<bits/stdc++.h>
using namespace std;
main()
{
    int t, n, x, i;
    cin >> t;
    while(t--)
    {
        priority_queue<int, vector<int>, greater<int>> q;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            q.push(x);
        }        
        long long result = 0;
        while(q.size() >= 2)
        {
            int min1 = q.top(); q.pop();
            int min2 = q.top();q.pop();
            int sum = min1 + min2;
            result += sum;
            q.push(sum);
        }
        cout << result << endl;
    }
}