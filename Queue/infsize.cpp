// Epro.cpp: определяет точку входа для консольного приложения.
//

//#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;


struct element
{
	int value;
	element * next;
	element(int x) {
		value = x;
		next = NULL;
	}
};
	struct mQueue 
	{
		element * head = NULL;
		element * tail = NULL;
		int count = 0;
		void push(int x)
		{
			element * el = new element(x);
			if (tail != NULL) {
				tail->next = el;
			}

			if (head == NULL) {
				head = el;
			}

			tail = el;
			count++;
		
		}
		void pop() 
		{
			head = head->next;
			count--;
		}
		int front() 
		{
			return head->value;
		}

		void clear() 
		{
			count = 0;
			head = NULL;
			tail = NULL;
		}

		int size() 
		{
			return count;
		}
		bool empty() 
		{
			return count == 0;
		}
	};

int main()
{
	mQueue q;
	while (1) 
	{
		string s; 
		cin >> s;
		if (s == "push") {
			int n;
			cin >> n;
			q.push(n);
			cout << "ok" << endl;

		}
		if (s == "pop") {
			if (q.empty() == false) {
				cout << q.front() << endl;
				q.pop();
			 
			}
			else 
			{
				cout << "error" << endl;
			}
		}
		if (s == "front") 
		{
			if (q.empty() == false) {
				cout << q.front() << endl;
			}
			else
			{
				cout << "error" << endl;
			}
		}
		if (s == "size")
		{
			cout << q.size() << endl;
		}
		if (s == "clear") {
			q.clear();
			cout << "ok" << endl;
		}
		if (s == "exit") {
			cout << "bye" << endl;
			return 0;
		}

		
	}




    return 0;
}

