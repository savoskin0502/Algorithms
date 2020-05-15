#include <iostream>

using namespace std;

int arr[100100];

void quick_sort(int left,int right){
	int l = left;
	int r = right;
	int truepos_value = arr[(l+r)/2];
	
	while(l<=r){
		while(arr[l] < truepos_value){
			l++;
		}
		while(arr[r] > truepos_value){
			r--;
		}
		if(l<=r){
			swap(arr[l++],arr[r--]);
		}
	}
	if(left < r){
		quick_sort(left,r);
	}
	if(right > l){
		quick_sort(l,right);
	}
}

int main(){

	int n;
	cin >> n;
	for(int i =0;i<n;++i){
		int num;
		cin >> num;
		arr[i] = num;
	}

	quick_sort(0,n-1);
	
	for(int i = 0;i<n;++i){
		cout << arr[i] << " ";
	}
	//cout << endl;

	return 0;
}