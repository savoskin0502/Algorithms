#include <iostream>


using namespace std;

int main(){

	int N;
	cin >> N;
	int a[N];

	for(int i=0;i<N;++i){
		int k;
		cin >> k;
		a[i] = k;
	}
	
	int x;
	cin >> x;

	int cnt = 0;

	for(int i=0;i<N;++i){
		if(a[i]==x){
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}