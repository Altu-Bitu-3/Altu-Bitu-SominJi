#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int carry;
int num1[10001], num2[10001];
string A, B, tmp;
vector<int> ans;

int main()
{
	cin >> A >> B;

	if (A.size() < B.size())
	{
		swap(A, B);
	}

	for (int i = 0; i < A.size(); i++)
		num1[i + 1] = A[i] - '0';

	for (int i = 0; i < B.size(); i++)
		num2[i + 1 + (A.size() - B.size())] = B[i] - '0';

	//끝에서부터 carry 신경쓰며 더하기
	for (int i = A.size(); i > 0; i--)
	{
		carry = num1[i] + num2[i];
		if (carry >= 10)
		{
			carry -= 10;
			num1[i - 1]++;
		}
		ans.push_back(carry);
	}
	//맨 첫째자리
	if (num1[0] != 0) cout << 1;

	//출력
	for (int i = ans.size() - 1; i >= 0; i--)
	{
		cout << ans[i];
	}

}
