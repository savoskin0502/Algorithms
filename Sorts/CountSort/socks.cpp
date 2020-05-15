#include <iostream>

using namespace std;

int c[10001];
void init(){
	for(int i = 0;i<10001;++i){
		c[i] = 0;
	}
}

int main(){

	int l,n,m;
	cin >> l >> n >> m;
	init();


	for(int i = 0;i<n;++i){
		int left;
		int right;
		cin >> left >> right;
		for(int j = left;j<=right;++j){
			c[j]+=1;
		}
	}

	for(int i = 0;i<m;++i){
		int point;
		cin >> point;
		cout << c[point] << " ";
	}

	return 0;
}