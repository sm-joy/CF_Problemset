#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int sn = 0;
	cin >> n;cin.ignore();
	for(int i = 0; i < n; i++)
	{
		int n1, n2, n3;
		cin >> n1 >> n2 >> n3;
		if(n1+n2+n3 >= 2)
			sn++;
	}
	cout<<sn<<"\n";
	return 0;
}
