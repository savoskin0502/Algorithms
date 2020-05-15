#include <iostream>

using namespace std;

struct element
{
	int value;
	element * next;
	element(int x){
		value = x;
		next = NULL;
	}
};

struct mQueue
{
private:
	element * head = NULL;
	element * tail = NULL;
	int count;
public:
	
	void push(int x){
		element * el = new element(x);

		if(head==NULL){
			head = el;
			count = 0;
		}

		if(tail!= NULL){
			(*tail).next = el;
		}

		tail = el;
		count ++;
	}

	int size(){
		if(head==NULL){
			return 0;
		}
		return count;
	}
	void pop(){
		head = (*head).next;
		count--;
	}
	int front(){
		return head->value;
	}
	void clear(){
		head = NULL;
		tail = NULL;
		count = 0;
	}
};

int main(){

	mQueue arr;
	string s;
	bool inside = true;
	while(inside){
		cin >> s;
		if(s=="push"){
			int number;
			cin >> number;
			arr.push(number);
			cout << "ok" << endl;
		}
		if(s=="pop"){
			cout << arr.front() << endl;
			arr.pop();
		}
		if(s=="front"){
			cout << arr.front() << endl;
		}
		if(s=="size"){
			cout << arr.size() << endl;
		}
		if(s=="clear"){
			cout << "ok" << endl;
			arr.clear();
		}
		if(s=="exit"){
			cout << "bye";
			inside = false;
		}
	}

	return 0;
}