#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	
	int x;
	cin >> x;
	int n;
	cin >> n;

	int a[n][n];
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cin >> a[i][j] ; 
		}
	}
	
	

	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			if(a[j][i]==x){
				cout << "YES";
				break;
			}
			else if(j==n-1){
				cout << "NO";
			}
		}
		cout << endl;
	}

	

	return 0;
}