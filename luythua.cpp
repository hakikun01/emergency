#include<iostream>
using namespace std;
const long long m = 1e9+7;
long long luythua(int N, long long K)
{
	if(K == 1) return N;
	long long res = luythua(N, K/2) % m;
	res = (res * res) % m;
	if(K % 2) res = (res * N) % m;
	return res % m;
}
int main(int argc, char const *argv[])
{
	int t, n;
	long long k;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		cout << luythua(n, k) << endl;
	}
	return 0;
}