#include <iostream>
#include <set>

using namespace std;

int main(){

	int n;
	cin >> n;
	set<int> my;

	for(int i = 0;i<n;++i){
		int num;
		cin >> num;
		my.insert(num);
	}

	cout << my.size();

	return 0;
}
