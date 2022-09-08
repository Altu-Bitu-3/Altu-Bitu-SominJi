//
// Created by user on 2022-09-07.
//
#include <iostream>
#include <vector>
#include <algorithm> //sort 사용

using namespace std;

struct point{
    int x,y;
};

//y좌표가 증가하는 순, 같으면 x좌표 증가

//a가 앞에 와야할 때 true
//false면 swap함
bool cmp(const point &a, const point &b){
    if (a.y != b.y){
        return a.y < b.y;
    }

    if (a.x != b.x){
        return a.x < b.x;
    }
}

int main() {

    int n;
    cin >> n;
    vector<point> arr(n);

    for (int i=0;i<n;i++){
        cin >> arr[i].x >> arr[i].y;
    }

    sort(arr.begin(), arr.end(), cmp);

    for (int i=0; i<n; i++){
        cout << arr[i].x << " " << arr[i].y << "\n";
    }

    return 0;
}
