#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<string> log;

    for (int i = 0; i < n; i++) {
        string name, state;
        cin >> name >> state;

        if (state == "enter")
            log.insert(name);
        else
            log.erase(name);
    }

    for (auto iter = log.rbegin(); iter != log.rend(); iter++)
        cout << *iter << "\n";

    return 0;
}