#include <bits\stdc++.h>
using namespace std;
/**
 * K > n / 2  :  then calculate even numbers in this case (2(n/2))
 * k <= n / 2 : then calculate odd numbers in this case (2(n/2) - 1)
 * as in s set of n integers (1 to n odd integer has n/2 element and 1 to n even integer has n/2 elements) = that has a size of n elements
 * so if n/2 is greater than Kth element we will calculate 2(n/2) and if
 * Kth is greater than n/2 than Kth element falls in the odd set so we will calculate 2(n/2) - 1
 * */
#define ll long long

int main()
{
	ll n, k;
	cin >> n >> k;
	if(k<= n/2)
	{
		cout<< (2*(n/2) - 1) <<"\n";
	}
	else if( k > n/2 )
	{
		cout<< (2*(n/2)) << "\n";
	}
	return 0;
}
