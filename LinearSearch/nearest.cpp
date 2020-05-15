#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n;
	cin >> n;
	
	int a[10000];



	for(int i=0;i<n;++i){

		cin >>a[i];
	}


	int x;
	cin >> x;

	int index = 0;
	int number = a[0];
	for(int i=0;i<n;++i){
		if(abs(a[i] - x) < abs(number - x)){
			number = a[i];
		}
	}

	cout << number ;
	return 0;
}