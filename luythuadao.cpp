#include<iostream>
using namespace std;
const long long m = 1e9+7;
long long dao(long long N)
{
	long long res = 0;
	while(N > 0)
	{
		res = res*10 + N%10;
		N /= 10;
	}
	return res;
}
long long luythua(long long N, long long P)
{
	if(P == 1) return N;
	long long res = luythua(N, P/2) % m;
	res = (res * res) % m;
	if(P % 2) res = (res * N) % m;
	return res % m;
}
int main(int argc, char const *argv[])
{
	int t;
	long long n, r;
	cin >> t;
	while(t--)
	{
		cin >> n;
		r = dao(n);
		cout << luythua(n, r) << endl;
	}
	return 0;
}