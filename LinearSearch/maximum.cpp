#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n;
	cin >> n;
	
	int a[10000];



	for(int i=0;i<n;++i){
		int k;
		cin >> k;
		a[i] = k;
	}

	int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }	

    cout << a[n-1];
	return 0;
}