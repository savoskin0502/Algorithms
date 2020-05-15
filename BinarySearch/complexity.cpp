#include <iostream>
#include <string>

using namespace std;


int main()
{
	int n, k;
	cin >> n;
	k = 1;
	int cnt = 0;
	while(k<n)
	{
		k = k * 2;
		cnt++;
	}

	cout << cnt;



    return 0;
}

