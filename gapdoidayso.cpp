#include <iostream>
#include <math.h>
using namespace std;
int tinh(int N, long long K)
{
	long long x = pow(2, N-1);
	if(K == x) return N;
	if(K < x) return tinh(N-1, K);
	return tinh(N-1, K-x);
}
int main(int argc, char const *argv[])
{
	int t, n; long long k;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		cout << tinh(n, k) << endl;
	}
	return 0;
}