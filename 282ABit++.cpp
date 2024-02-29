#include<bits\stdc++.h>
using namespace std;

int main()
{
	int n;
	int x = 0;
	cin >> n; cin.ignore();
	for(int i = 0; i < n; i++)
	{
		string temp;
		getline(cin, temp);
		if(temp[2] == 'X')
		{
			if(temp[0] == '+')
				x++;
			else
				x--;
		}
		else if(temp[0] == 'X')
		{
			if(temp[1] == '+')
				x++;
			else
				x--;
		}
	}
	cout<<x<<"\n";
	return 0;
}
