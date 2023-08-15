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

//ex section 4.8

//(~'q') << 6 
//(24 0s)10001110 << 6
//(18 0s)10001110 000000 
//may have not enough (less than 32) bits on some machines
//ul1 = 3; 11
//ul2 = 7; 111
//a) 3
//b) 7
//c)true
//d)true

void find_size_arr() {
	int arr[] = {1,2,3,4,5};
	constexpr size_t sz = sizeof(arr)/sizeof(*arr);
	cout << sz << endl;
	cout << arr[sz - 1] << endl;
}

//ex section 4.9

void builtin_size() {
	cout << "short " << sizeof(short) << "\n";
	cout << "int " << sizeof(int) << "\n";
	cout << "long " << sizeof(long) << "\n";
	cout << "float " << sizeof(float) << "\n";
	cout << "double " << sizeof(double) << "\n";
	cout << "long double " << sizeof(long double) << "\n";
	cout << "bool " << sizeof(bool) << "\n";
	cout << "char " << sizeof(char) << "\n";
	cout <<"wchar_t " << sizeof(wchar_t) << "\n";
	cout <<"char16_t " << sizeof(char16_t) << "\n";
	cout <<"char32_t " << sizeof(char32_t) << "\n";
}

//10
//size required to hold address/size of arr x

void test() {
	int x[10];   int *p = x;
	cout << sizeof(x)/sizeof(*x) << endl;//length of array = 10
	cout << sizeof(p)/sizeof(*p)<< endl;//size of pointer / size of first element in x
}

//(sizeof(x))+y
//sizeof((p->mem)[i])
//(sizeof(x)) < b
//sizeof(f())

//ex section 4.10
//no diff in for loop, postfix less efficient since need to hold old value;
//iterates through ia array using pointer and int
//if true inc xy else dec xy

//ex section 4.11
//float to bool
//int to float then float to double
//char to int, then int to double
//a)char to int, then int to char
//b)int to unsigned int, then to float
//c)unsigned int to float then to double
//d)int to float, then float to double, then double to char


//**avoid casts
void test_cast() {
	//static cast if confident no data loss
	int i=1,j=2;
	double d = static_cast<double> (i)/j;
	cout<<d<<endl;
	//cast away high level const
	//only useful for overloaded functions
	const int ci = 3;
	const int *p = &ci;
	int *p1 = const_cast<int*>(p);
	cout<<*p1<<endl;
	//reinterpret cast can be dangerous
}

void decl_in_loop() {
	for (int i=0;i<5;++i) {
		int sum=0;

	}
}

//ex section 4.11.3
void int_mul() {
	int i = 2; 
	double d = 1.5;
	i *= static_cast<int>(d);
	cout << i << endl;
}

void old_styles() {
	int i; double d; const string *ps; char *pc; void *pv;
	pv = const_cast<string*>(ps);
	i = static_cast<int>(*pc);
	pv = static_cast<double*>(&d);
	pc = static_cast<char*>(pv);
}
//do integral division then convert to double

int main() {
	old_styles();
}
