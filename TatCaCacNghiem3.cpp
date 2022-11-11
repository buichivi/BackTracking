#include <bits/stdc++.h>
using namespace std;
int N, K;
int a[11];
int hs[11];
int cnt = 0;
void inkq() {
	for (int i = 1; i <= N; i++)
		cout << a[i] << ' ';
	cout << endl;
}
void Try(int i, int k, int sum) {
	for (int j = k; j >= 0; j--) {
		if (j % hs[i] != 0)
			continue;
		a[i] = j / hs[i];
		sum += j;
		if (i == N) {
			// int sum = 0;
			// for (int x = 1; x <= N; x++) 
			// 	sum += a[x]*hs[x];
			if (sum == K) {
				inkq();
				cnt++;
			}
		}
		else Try(i + 1, k - j, sum);
		sum -= j;
	}
}
int main() {
	freopen("input2.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	cin >> N >> K;
	int n = N;
	for (int i = 1; i <= N; i++) hs[i] = n--;
	Try(1, K, 0);
	if (cnt == 0)
		cout << "Vo nghiem!";
	return 0;
}