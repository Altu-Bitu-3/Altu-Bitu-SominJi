#include <iostream>
#include <algorithm> //sort 사용
#include <vector>

using namespace std;

int main() {
    int n;
    int ans=0;

    //입력
    cin >> n;

    vector<int> arrA(n);
    vector<int> arrB(n);
    for (int i=0;i<n;i++){
        cin >> arrA[i];
    }
    for (int i=0;i<n;i++){
        cin >> arrB[i];
    }
    sort(arrA.begin(), arrA.end());
    sort(arrB.rbegin(),arrB.rend());


    for (int i=0;i<n;i++){
        ans+=arrA[i]*arrB[i];
    }


    //출력
    cout << ans;


    return 0;
}
