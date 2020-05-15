#include <iostream>
#include <string>


using namespace std;

int a[100000];

bool find(int l, int r, int x)
{
	if (l > r) return false;
	int m = (l + r) / 2;
	if (a[m] == x) 
	{
		return true;
	}
	else if (a[m] > x) 
	{
		return find(l, m - 1, x);
	}
	else if (a[m] < x)
	{
		return find(m + 1, r, x);
	}

}


int main()
{
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	while (k > 0) 
	{
		int num;
		cin >> num;
		k--;
		if (find(0, n - 1, num) == true) 
		{
			cout << "YES" << endl;
		}
		else 
		{
			cout << "NO" << endl;
		}


	}
	
	


    return 0;
}

