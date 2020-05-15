#include <iostream>

using namespace std;

int c[101];

void init(){
	for(int i = 0;i<101;++i){
		c[i] = 0;
	}
}

int main(){

	init();

	int n;
	cin >> n;

	for(int i = 0;i < n;++i){
		int stability;
		cin >> stability;
		c[i] = stability;
	}

	int k;
	cin >> k;
	for(int i = 0;i<k;++i){
		int press_num;
		cin >> press_num;
		c[press_num-1]--;
	}

	// for(int i = 0;i<n;++i){
	// 	cout << c[i] << " ";
	// }

	for(int i = 0;i<n;++i){
		if(c[i]>=0){
			cout << "no"<< endl;
		}
		else{
			cout << "yes" << endl;
		}
	}

	return 0;
}