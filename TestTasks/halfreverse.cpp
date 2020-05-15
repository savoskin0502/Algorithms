#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	vector<int> myVector;
	int k, n = 0;
	while (cin >> k && k != 0) {
		n++;
		myVector.push_back(k);
	}
	reverse(myVector.begin(), myVector.begin() + n / 2);
	reverse(myVector.begin() + n / 2, myVector.end());
	for (int i = 0; i < n; i++) {
		cout << myVector[i] << " ";
	}

	system("pause");
	return 0;
}