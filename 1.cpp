/* Great template of typing practice for ACMers */
#include <ctime>
#include <iostream>
using namespace std;
typedef long long LL;

LL gcd(LL a, LL b)
{
	return b == 0 ? a : gcd(b, a % b);
}

LL lcm(LL a, LL b)
{
	return a * b / gcd(a, b);
}

int main()
{
	cout << (double)clock() / CLOCKS_PER_SEC << endl;
	for (int i = 1; i <= 1e8; i++);
	cout << (double)clock() / CLOCKS_PER_SEC << endl;
}
