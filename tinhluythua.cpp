#include<iostream>
using namespace std;
long long m = 1e9+7;
long long luythua(long long N, long long P)
{
	if(!P) return 1;
	long long res = luythua(N, P/2);
	res = (res * res) % m;
	if(P % 2) res = (res * N) % m;
	return res;
}
int main()
{
	long long a, b;
	while(true)
	{
		cin >> a >> b;
		if(a == 0 && b == 0) return 0;
		cout << luythua(a, b) << endl;
	}
	return 0;
}