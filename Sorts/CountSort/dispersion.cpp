#include <iostream>

using namespace std;

int c[215];
int arr[1000000];

void init(){
	for(int i = 0;i<215;++i){
		c[i] = 0;
	}
}

int main(){

	int n;
	cin >> n;
	int number;
	cin >> number;
	c[107]+=1;
	int val;
	if(n==1){
		//cout << number;
	}
	else{
		for(int i = 0;i<n-1;++i){
			cin >> val;
			c[val-number+107]+=1;
		}
	}

	for(int i = 0;i<215;++i){
		if(c[i]>0){
			while(c[i]>0){
				cout << number - (107-i) << " ";
				c[i]--;
			}
		}
		//cout << c[i] << " ";
	}

	return 0;
}