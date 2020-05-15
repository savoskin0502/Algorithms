#include <iostream>

using namespace std;

int c[100000];
int arr[100001];
int mn[100000];

void init(){
	for(int i = 0;i< 100000;++i){
		c[i] = 0;
		mn[i] = 0;
	}
}

void print_all(){
	for(int i=0;i< 5;++i){
		cout << mn[i] << " ";
	}	
}

int main(){


	int n;
	cin >> n;
	
	for(int i = 0;i<n;++i){
		int number;
		cin >> number;
		arr[i] = number;
	}

	init();

	for(int i = 0;i<n;++i){
		c[arr[i]+10000]+=1;
	}

	
	int k1 = 0;

	for(int i=0;i<=20000;++i){
		while(k1<c[i]){
			k1++;
			cout << i - 10000<< " ";
		}
		k1=0;
		//cout << C[i] << " ";
	}


	//print_all();
	return 0;
}