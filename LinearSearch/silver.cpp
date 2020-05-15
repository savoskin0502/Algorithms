#include <iostream>

using namespace std;

int main(){

	int mx1 = 0;
	int mx2 = 0;
	int n;
	cin >> n;

	for(int i=0;i<n;++i){
		int a;
		cin >> a;
		if(a > mx1){
			mx2 = mx1;
			mx1 = a;
		}
		if(a > mx2 && a< mx1){
			mx2 = a;
		}
	}
	cout << mx2;

	return 0;
}