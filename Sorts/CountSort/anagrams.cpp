#include <iostream>
#include <string>

using namespace std;

int c1[50];
int c2[50];
void init(){
	for(int i = 0;i<50;++i){
		c1[i] = 0;
		c2[i] = 0;
	}
}

int main(){

	string s1;
	string s2;
	getline(cin,s1);
	getline(cin,s2);
	init();

	for(int i = 0;i<s1.length();++i){
		int num = int(s1[i]);
		if(s1[i]>='0' && s1[i]<='9'){
			c1[num-48]+=1;
		}else{
			c1[num-88]+=1;
		}
	}

	for(int i = 0;i<s2.length();++i){
		int num = int(s2[i]);
		if(s2[i]>='0' && s2[i]<='9'){
			c2[num-48]+=1;
		}else{
			c2[num-88]+=1;
		}
	}

	// for(int i = 0;i<=33;++i){
	// 	cout << c1[i] << " ";
	// }
	// cout << endl;
	// for(int i = 0;i<=33;++i){
	// 	cout << c2[i] << " ";
	// }

	bool is = true;

	for(int i = 0;i<=33;++i){
		if(c1[i]!=c2[i]){
			is = false;
		}	
	}

	if(is==false){
		cout << "NO";
	}
	else{
		cout << "YES";
	}
	return 0;
}