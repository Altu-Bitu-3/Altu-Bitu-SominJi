#include <iostream>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	string s;
	cin >> n;
	set<int> SET, temp;
	for (int i = 1; i <= 20; i++)temp.insert(i);
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "add") {
			cin >> m;
			SET.insert(m);
		}

		else if (s == "check") {
			cin >> m;
			if (SET.find(m) == SET.end()) cout << "0" << '\n';
			else cout << "1" << '\n';
		}

		else if (s == "remove") {
			cin >> m;
			SET.erase(m);
		}

		else if (s == "toggle") {
			cin >> m;
			if (SET.find(m) == SET.end()) SET.insert(m);
			else SET.erase(m);

		}

		else if (s == "all") {
			SET = temp;
		}

		else if (s == "empty")
			SET.clear();

	}
	return 0;
}