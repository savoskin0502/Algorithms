#include <iostream>

using namespace std;

int main(){

	int a[100];

	int n;
	cin >> n;
	for(int i = 0;i < n; ++i){
		int k;
		cin >> k;
		a[i] = k;
	}

	int mx = a[0];
	int mn = a[0];
	for(int i=0;i<n;++i){
		if(a[i] > mx){
			mx = a[i];
		}
		if(a[i]<mn){
			mn = a[i]; 
		}
	}

	for(int i=0;i<n;++i){
		if(a[i] == mx){
			a[i] = mn;
		}
	}

	for(int i=0;i<n;++i){
		cout << a[i] << " ";
	}

	return 0;
}