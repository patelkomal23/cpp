// C++ program to illustrate time
// complexity for single for-loop
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
	int a = 0, b = 0;
	int N = 4, M = 4;

	// This loop runs for N time
	for (int i = 0; i < N; i++) {
		a = a + 10;
	}
	// This loop runs for M time
	for (int i = 0; i < M; i++) {
		b = b + 40;
	}

	cout << a << ' ' << b;

	return 0;
}
