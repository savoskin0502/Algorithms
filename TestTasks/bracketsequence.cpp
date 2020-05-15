#include <iostream>
#include <stack>

using namespace std;

stack<char> st;


int main(){

	string s;
	cin >> s;



	for(int i=0;i<s.length();++i){
		if(!st.empty())
		{
			if((st.top() == '(') && (s[i] == ')')){
				st.pop();
			}
			else if((st.top() == '[') && (s[i] == ']')){
				st.pop();
			}
			else if((st.top() == '{') && (s[i]=='}')){
				st.pop();
			}
			else
			{
				st.push(s[i]);
			}
		}
		else{
			st.push(s[i]);
		}

	}
	if(st.empty()){
		cout << "yes";
	}
	else {
		cout << "no";
	}


	return 0;
}