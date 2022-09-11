#include<iostream>
#include<map>
using namespace std;

int main()
{
	int N, M, ans = 0;
	string s;
	map<string, bool> S;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> s;
		S[s] = true;
	}

	for (int i = 0; i < M; i++)
	{
		cin >> s;
		if (S[s]) ans++;
	}

	cout << ans << '\n';

	return 0;
}