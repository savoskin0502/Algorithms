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
    int max = a[0];
    int ind = 0;
    for(int i=0;i<n;++i){
    	if(a[i] > max){
    		max = a[i];
    		ind = i;

    	}
    }
    cout << ind +1;
	return 0;
}