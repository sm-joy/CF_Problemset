#include <bits\stdc++.h>
using namespace std;

int main()
{
	int n, current;
	int prev = 0; 
	int long_nds = 0;
	int nds = 0;
	cin>>n; cin.ignore();
	for(int i = 0; i < n; i++)
	{
		cin >> current;
		if(i == 0 || current >= prev) 
		{
			nds++;
			if(nds > long_nds) long_nds = nds;
		}
		else nds = 1;
		prev = current;
	}
	cout<<long_nds<<"\n";
	return 0;
}
