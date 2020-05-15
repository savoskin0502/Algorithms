#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	vector<int> myVector;
	int n, k;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		myVector.push_back(k);
	}
	sort(myVector.begin(), myVector.end());
	if (n % 2 == 0) { //6 2  4
		for (int i = n / 2 - 1; i < n / 2 + 1; i++) {
			cout << myVector[i] << " ";
		}
	}
	else{ //5
			cout << myVector[n/2];
	}

	system("pause");
	return 0;
}