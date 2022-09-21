#include <iostream>

using namespace std;

int main(void) {
    int redT, brownT;

    cin >> redT >> brownT;

    //redT+brownT=L*W
    //brownT=(L-2)*(W-2)
    //redT=L*W-brownT
    for (int i = 3; ; i++) {
        for (int j = i; j >= 3; j--) {
            int TryRed, TryBrown;
            TryBrown = (i - 2) * (j - 2);
            TryRed = i * j - TryBrown;

            if (TryRed == redT && TryBrown == brownT) {
                cout << i << ' ' << j;
                return 0;
            }

        }
    }

    return 0;
}