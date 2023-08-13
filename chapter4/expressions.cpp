#include <iostream>
#include <vector>
using namespace std;

//ex section 4.1.2
//105
//* (vec.begin())
//(* (vec.begin())) + 1

//ex section 4.2
//(((12 / 3) * 4) + (5 * 15)) + ((24 % 4) / 2)
//-90 + 4 = 86
//-30 + 12 = 18
//210%5 = 0
//-210%4 = -2
//210%-4 = 2
//overflow happens when the data type cannot represent a value outside its range, not enough bits

bool test(int a, int b, int  c, int d) {
	if (a > b && b > c && c > d)
		return 0;
	return 1;
}

//i != (j < k)
//if j smaller than k, test if i is not true

//int i; double d;
//d = i = 3.5; i is 3, d is 3.000
//i = d = 3.5; d is 3.5000, i is 3

//if (42 = i) error cannot put rvalue on left side of assignment
//if (i = 42) true, assignment returns 42 which is > 0

//dval = ival = pi = 0;
//cannot convert pointer to integer type;
//dereference pointer to get null value;

//if ((p = getPtr()) != 0)
//if (i == 1024)

//ex section 4.5
//prefix increment value and yield new value
//postfix increment value but yields copy of original value
//miss out index 0

//ptr != 0 && *ptr++; cannot convert pointer to int type, use *ptr
//vec[ival] <= vec[++ival]; easier to read, next element is greater than or equal to previous

//ex section 4.6
//legal, *(iter++)
//illegal, cannot increment value of string
//illegal, iter has no empty() function
//legal, (*iter).empty()
//illegal, prefix increment and dereference take same precedence,++(*iter), cannot increment string
//iter++ ->empty(); postfix inc takes precedence over arrow
//*(iter++).empty(); increment iter and call empty on string object, legal

//ex section 4.7
void double_odd(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		(i%2==1) ? (v[i] *= 2) : (0);
	}
	for (auto i : v)
		cout << i;
	cout << endl;
}

void assign_grade(int i) {
	string grade;
	grade = (i > 90) ? "high pass" 
					 : (i > 75) ? "pass"
					 			: (i > 60) ? "low pass" : "fail";
	cout << grade << endl;
}

//string pl = (((s + s[s.size() - 1]) == ’s’) ? "" : "s")
//string pl = (("wordd" == 's') ? 
//cannot compare string and char type
//fix: s + ((s[s.size() - 1] == 's') ? "" : "s")

//if left associative then whether condition true/false, it will evaluate left operand





int main() {
	int i = 63;
	assign_grade(i);
	string s = "word";
	string pl = ((s + s[s.size() - 1]) == ’s’ ? "" : "s") ;

}