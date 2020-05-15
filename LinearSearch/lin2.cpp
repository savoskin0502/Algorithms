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

	if(cnt>0){
		cout << "YES";
	}
	else {
		cout << "NO";
	}


	return 0;
}