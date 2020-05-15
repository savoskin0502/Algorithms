#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> vec;

int it = 0;
int cnt = 0;

void push(int x){
	vec.push_back(x);
	it++;
	cnt++;
}

int pop(){
	it--;
	cnt--;
	vec.pop_back();
	return vec[it];
}

int back(){
	return vec[it-1];
}

int size(){
	return cnt;
}

void clear(){
	vec.clear();
	it = 0;
	cnt = 0;
}

bool pop_check(){
	if(it>0){
		return true;
	}
	return false;
}

int main(){

	string s;
	bool in = true;
	while(in){
		cin >> s;
		if(s=="push"){
			int n;
			cin >> n ;
			push(n);
			cout << "ok" << endl;
		}
		if(s=="pop"){
			if(pop_check()){
				cout << pop() << endl;
			}
			else{
				cout << "error"<< endl;
			}
			
		}
		if(s=="back"){
			if(pop_check()){
				cout << back()<< endl;
			}
			else{
				cout << "error"<< endl;
			}
			
		}
		if(s=="size"){
			cout << size()<< endl;
		}
		if(s=="clear"){
			clear();
			cout << "ok"<< endl;
		}
		if(s=="exit"){
			cout << "bye";
			in = false;
		}
	}
	return 0;
}