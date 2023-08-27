#include <iostream>
using namespace std;


//ex 5.4
//bool only within scope of while loop, define it outside while loop

//**else is matched with closest unmatched if
void dangling_else() {
	int a = 0;
	if (a < 2) {
		if (a == 1)
			a -= 1;
	}
	else
		a += 1; //matches to inner if, resolved with braces
}

//ex 5.7
//indent after else
//use braces for 2 statements
//else if so that only one is executed
//dangling else is when there is more ifs than elses
//else is matched with closest unmatched if

void switch_test() {
	int i = 3;
	switch(i) {
		case 1:
			++i;
			break;
		case 2:
			--i;
			break;
		default:
			i *= i;
	}
	cout << i << endl;
}

void counting_vowels() {
	unsigned v = 0;
	char ch;
	while (cin << ch) {
		switch(ch) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				++v;
				break;
			default:
				;
		}
	}
	cout << v << endl;
}

//ex 5.13
//missing breaks
//init ix before switch body
//replace , with :
//case expression needs to be int type

void count_dupl() {
	string prev, curr;
	cin >> prev;
	int count = 1;
	while (cin >> curr) {
		if (curr == prev)
			count += 1;
		else {
			count = 0;
			prev = curr;
		}
	}
	cout << count << endl;
}

//ix only within scope of for loop
//explicit null exp required
//sz not in scope of for loop
//for, details are kept within for expression

//dowhile=do once, then while loop
//no curly braces for do
//init not allowed in while cond
//ok

void exception_test() {
	int i = 0;
	try {
		i *= 0;
	} 
	catch (runtime_error err) {
		;
	}
}


int main() {
	exception_test();
}
