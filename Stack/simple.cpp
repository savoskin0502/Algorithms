#include <iostream>

using namespace std;

struct element
{
	int value;
	element * prev;
	element(int x){
		value = x;
		prev = NULL;
	}
};

struct Stack
{
	private:
		element * head = NULL;
		int count;
	public:
		void push(int x){
			element *el = new element(x);

			if(head==NULL){
				count = 0;
			}
			if(head!=NULL){
				(*el).prev = head;
			}

			head = el;
			count ++;
		}

		void pop(){
			head = (*head).prev;
			count--;
		}

		int back(){
			return head->value;
		}

		void clear(){
			count = 0;
			head = NULL;
		}

		int size(){
			return count;
		}
};

int main(){

	Stack st;

	string s;
	bool in = true;
	bool inp = false;
	while(in){
		cin >> s;
		if(s=="push"){
			int n;
			cin >> n;
			st.push(n);
			inp = true;
			cout << "ok" << endl;
		}
		if(s=="size"){
			if(!inp){
				cout << 0 << endl;
			}
			else{
				cout << st.size() << endl;
			}
			
		}
		if(s=="back"){
			cout << st.back() << endl;
		}
		if(s=="pop"){
			cout << st.back() << endl;
			st.pop();
		}
		if(s=="clear"){
			st.clear();
			cout << "ok" << endl;
		}
		if(s=="exit"){
			cout << "bye";
			in = false;
		}
	}

	return 0;
}