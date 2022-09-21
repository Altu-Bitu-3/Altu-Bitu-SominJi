#include <iostream>
#include <set>

using namespace std;

int circleWord(int n, set<string>& s) {
	string tmp;
	int ans = 0;

	for (int i = 0; i < n; i++) {
		cin >> tmp;

		if (s.find(tmp) == s.end()) {
			ans++;
			s.insert(tmp);

			int str_len = tmp.length();
			for (int j = 0; j < str_len - 1; j++) {
				tmp = tmp.substr(1, str_len - 1) + tmp[0];
				s.insert(tmp);
			}
		}

	}
	return ans;
}

int main() {
	int N;
	set<string> s;

	cin >> N;

	cout << circleWord(N, s);
}