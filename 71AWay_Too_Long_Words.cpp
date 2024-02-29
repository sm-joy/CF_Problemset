#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n = 0;
	vector<string> input;
	cin >> n;
	cin.ignore();
	string temp;
	for(int i = 0; i < n; i++)
	{
		getline(cin, temp);
		input.push_back(temp);
	}
	for(int i = 0; i < n; i++)
	{
		if(input[i].size() <= 10)
			cout<<input[i]<<"\n";
		else
		{
			string res = input[i][0] + to_string(input[i].size()-2) + input[i][input[i].size() - 1];
			cout<<res<<"\n";
		}
	}
	return 0;
}
