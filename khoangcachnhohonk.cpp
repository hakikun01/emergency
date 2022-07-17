#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n, k;
	cin>>t;
	while(t--)
    {
        long long result = 0;
        cin >> n >> k;
        int i, a[n+1];
        for(i=1; i<=n; i++) cin >> a[i];
        sort(a+1, a+n+1);
        for(i=n; i>1; i--){
            int tmp = upper_bound(a+1, a+n+1, a[i] - k) - a;
            tmp = i - tmp;
            if(tmp) result += tmp;
        }
        cout << result << endl;
    }
}