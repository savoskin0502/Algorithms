#include <iostream>
#include <string>

using namespace std;

int c[30];

void init(){
	for(int i = 0;i<30;++i){
		c[i] = 0;
	}
}

int main(){


	init();

	int n;
	cin >> n;
	
	string s="";
	string helper1 = "";
	string helper2 = "";

	for(int i = 0;i<n;++i){
		char a;
		cin >> a;
		s+=a;
	}


	for(int i = 0;i<s.length();++i){
		int bukva = int(s[i]-65);
		//cout << bukva;
		c[bukva]+=1;		
	}
	//cout << "lol";

	// for(int i = 0;i<30;++i){
	// 	cout << c[i] << " ";
	// }

	for(int i = 0;i<30;++i){
		if(c[i]>0){
			if(c[i]%2 == 0 && c[i]!=0){
				while(c[i]%2 == 0 && c[i]!=0){
					char a = char(i+65);
					helper1+=a;
					helper2+=a;
					c[i] = c[i]-2;
				}
			}
			else if(c[i]%2 == 1 && c[i]!=1){
				while(c[i]!=1){
					char b = char(i+65);
					helper1+=b;
					helper2+=b;
					c[i] = c[i]-2;	
				}
			}
		}
	}
	for(int i = 0;i<helper1.length();++i){
		cout << helper1[i];
	}
	for(int i = 0;i<30;++i){
		if(c[i]>0){
			cout << char(i+65);
			break;
		}
	}
	for(int i = helper2.length()-1;i>=0;--i){
		cout << helper2[i];
	}

	//cout << helper1 << " " << helper2;


	return 0;
}