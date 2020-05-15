#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int size = 0;
int value[2*100101];

struct heap
{

	void init(){
		for(int i = 0;i<2*100101;++i){
			value[i] = int(-1e9);
		}
	}

	void add(int x){
		value[size] = x;
		//sift_up(size);
		//sift_down(0);
		size++;
	}

	void sift_up(int pos){
		if(pos <=0)return;
		int npos = (pos-1)/2;
		if(value[pos]>=value[npos]){
			swap(value[npos],value[pos]);
			sift_up(npos);
		}
	}

	void sift_down(int pos){
		if(pos>size)return;
		int npos1 = 2 * pos + 1;
		int npos2 = 2 * pos + 2;
		if(value[pos] < max(value[npos1],value[npos2])){
			if(value[npos1] >= value[npos2]){
				swap(value[npos1],value[pos]);
				sift_down(npos1);
			}
			else if(value[npos1] < value[npos2]){
				swap(value[npos2],value[pos]);
				sift_down(npos2);
			}
		}
	}

	void print(){
		for(int i = 0;i< size;++i){
			cout << value[i] << " ";
		}
	}
};

int main(){

	heap h;
	h.init();

	int n;
	cin >> n;
	for(int i = 0;i<n;++i){
		int number;
		cin >> number;
		value[i] = number;
		size++;
		//h.add(number);
	}
	
	for(int i = 0;i< n;++i){
		h.sift_up(i);
	}

	h.print();

	return 0;
}