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
		
	public:
		int count;
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
			
			if(count!=0){
				count--;
				head = (*head).prev;
			}
			
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
			if(st.count>0){
				cout << st.size() << endl;
			}
			else{
				cout << "error" << endl;
			}
			
		}
		if(s=="pop"){
			if(st.count>0){
				cout << st.back() << endl;
				st.pop();
			}
			else{
				cout << "error" << endl;
			}

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