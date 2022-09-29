#pragma once
#include<iostream>
using namespace std;

class Steck {
	
	enum { EMPTY = -1, FULL = 20 };
	
	char st[FULL + 1] = { "" };
	
	int top;

public:
	Steck();
	void Push(char c);
	char Pop();
	void Clear();
	bool IsEmpty();
	bool IsFull();
	int GetCount();
	void ChekSteck(string str);

	void Output() {
		for (int i = 0; i < top + 1; i++) {
			cout << st[i] << " ";
		}
		cout << endl;
	}
};


inline Steck::Steck() {
	
	top = EMPTY;
}

void Steck::Clear() {

	top = EMPTY;
}

bool Steck::IsEmpty() {
	
	return top == EMPTY;
}

bool Steck::IsFull() {
	
	return top == FULL;
}

int Steck::GetCount() {
	
	return top + 1;
}

void Steck::Push(char c) {

	if (!IsFull())
		st[++top] = c;
}

char Steck::Pop() {
	

	if (!IsEmpty())
		return st[top--];
	else 
		return 0;
}

void Steck::ChekSteck(string str) {
	Steck obj;
	int count = 0;
	for (int i = 0; i < FULL - 12; i++) {
		if (str[i] == '(') {
			count++;
			
		}
		else if (str[1] == '{') {
			count++;
			
		}
		else if (str[1] != '{') {
			count--;
		}
		else if (str[7] == '}') {
			count++;
			
		}
		else if (str[9] == '[') {
			count++;
			
		}
		else if (str[14] == ']') {
			count++;
			
		}
		else if (str[16] == '(') {
			count++;
			
		}
		else if (str[21] == ')') {
			count++;
			
		}
		else if (str[22] == ')') {
			count++;
			
		}
	}
	cout << "count = " << count << endl;
	if (count == 8) {
		cout << "correct!\n";
	}
	else if (count != 8) {
		cout << "wrong!\n";
	}
}
