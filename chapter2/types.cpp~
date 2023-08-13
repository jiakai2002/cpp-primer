#include <iostream>

int main(){

	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl; //ok, 32
	std::cout << u - u2 << std::endl; //not ok, wrap around
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl; //ok, 32
	std::cout << i - i2 << std::endl; //ok, -32
	std::cout << i - u << std::endl; //ok, 0
	std::cout << u - i << std::endl; //ok, 0

	//'h' is a character literal
	//"hello" is a string literal - an array of characters
	//"h" is actually an array of of two characters: h and \0 (null)
	
	std::cout << "Just \" \\ \' \? testing \n out \t some \a escape \v characters" << std::endl;
	
	//specifying the type of a literal
	std::cout << L'a' << "\n" << 42ULL << std::endl;

	/* Ex 2.5
	 * 'a' - character literal
	 * L'a' - wide character literal
	 * "a" - string literal
	 * L"a" - wide string literal
	 *
	 * 10 - integer literal
	 * 10u - unsigned integer literal
	 * 10L - long integer literal
	 * 10uL - unsigned long integer literal
	 * 012 - octal integer literal
	 * 0xC - hexadecimal integer literal
	 *
	 * 3.14 - floating-point literal
	 * 3.14f - float floating-point literal
	 * 3.14L - long double floating-point literal
	 *
	 * 10. - floating-point literal (value = 10)
	 * 10e-2 - floating-point literal (value = 0.01)
	 */
	 
	 /* Ex 2.6
	  * 9 - integer literal
	  * 09 - octal integer literal
	  * difference is in their base system
	  */

	 /* Ex 2.7
	  * "Who goes with F\145rgus?\012" - string literal (with escape sequences of characters)
	  * 3.14e1L - long double floating-point literal
	  * 1024f - float floating-point literal
	  * 3.14L - long double floating-point literal
	  */

	//Ex 2.8
	std::cout << "2\t" << "\115\n" << std::endl;

	//Ex 2.9
	//(a) 
	//>> operator takes in a variable, initialize input_value before passing it
	int input_value = 0;
	//std::cin >> input_value;
	//(b)
	//data loss as 3.14 is a floating-point and i is an integer
	//initialize with no curly brackets for implicit conversion
	int i_ = 3.14;
	//or better yet, use a double type
	double _i = 3.14;
	//(c)
	//wage not initialized
	double wage = 9999.99, salary = wage;

	//Ex 2.10
	//global_str, local_str = the_empty_string
	//global_int, local_int = \0 (null)
	
	//Ex 2.2.2
	//extern int ix = 1024; error, extern cannot have initializer
	int iy; //definition, value implicitly set to null
	extern int iz; //declaration, extern with no initializer provided
	
	int y = 10;
	int &r1 = y;
	double d = 11;
	double &r2 = d;

	//a reference is not an object and cannot be re-bound once initialized
	y = r2; // assigns y to value of d
	r1 = d; // assigns y to value of d
	std::cout << y << r2 << std::endl;
	
	int z = 1, &rz = z;
	z = 5;   //assign z to 5
	rz = 10; //reassign z to 10
	std::cout << z << rz << std::endl;

	//a pointer is an object and can be reassigned, holds an address
	int x = 5;
	int *p = &x;
	std::cout << *p << std::endl;
	*p = 10; //dereference, to assign 10 to x
	std::cout << x << std::endl;
	// p = x; error to assign variable to a pointer
	int *q = nullptr;

	//Ex 2.18
	int n = 1;
	int *a = 0;
	a = &n; //change value of pointer
	*a = 2; //change value to which pointer points to
	
	//Ex 2.19
	/* Pointer  		    		Reference
	 * can be reassigned			cannot be reassigned
	 * is an object					not an object
	 * holds an address				holds no value
	 * can be initialized to null	must be initialized to some object
	 */

	//Ex2.20
	int j = 42;
	int *p1 = &j; //p1 points to j
	*p1 = *p1 * *p1; //j=j*j
	std::cout << j << std::endl;
	
	/*Ex2.21
	 *a)illegal, pointer and i type different
	 *b)illegal, pointer cannot be assigned to variable, only addresses
	 *c)pointer p points to address of i
	 */

	//Ex 2.22
	int *p2; //p2 is a pointer of int type
	std::cout << p2 << std::endl; //true: bits in the memory where pointer resides in used as address
	std::cout << *p2 << std::endl;//false:p2 is uninitialized, value = 0

	//Ex 2.23
	//if uninitialized, bits in memory where pointer resides in is used as address
	//pointer points to whichever object is at that location
	//if (*p) is true, it means p is initialized with a valid object
	
	//Ex 2.24
	//void* pointer can hold address of any object (of any type)
	
	//const type, value is constant
	int h = 5;
	const int ch = h;
	++h;
	std::cout << h << ch << std::endl;

	//reference to const
	const int &rh = h;
	//pointer to const
	const int *p3 = &h;
	//const pointer, address is constant
	int *const cp = &h;

	/*Ex 2.27
	 * a)illegal, cannot bind reference to a value
	 * b)legal, can assign address to const pointer
	 * c)legal, can bind literal to const ref
	 * d)legal, const pointer pointing to const int
	 * e)legal, pointer to const
	 * f)legal, const reference bound to const int
	 * g)legal, assign i to const int, bind const ref to i
	 *
	 *Ex 2.28
	 * a)illegal, const pointer must be initialized
	 * b)illegal, const int must be initialized
	 * c)legal
	 * d)legal, const pointer pointing to const int
	 * e)legal, pointer to const no need to be initialized
	 *
	 *Ex 2.29
	 * a)legal, assign const int to int var i
	 * b)legal, p1 points to p3
	 * c)legal, p1 points to address of ic
	 * d)illegal, cannot reassign const int ic
	 * e)illegal, cannot reassign const pointer p2
	 * f)illegal, cannot reassign const int ic
	 */

	/*
	 * Ex 2.30
	 * const int v2 = 0; //top-level
	 * int v1 = v2; 	  //low-level
	 * int *p4 = &v1, &r1 = v1; //both low-level
	 * const int *p2 = &v2; //low-level
	 * const int *const p3 = &i; //high-level
	 * const int &r2 = v2; //low-level
	 */

	/*
	 * r1 = v2; illegal, low-level const int v2
	 * p1 = p2; legal, p1 points to int v1
	 * p2 = p1; illegal, high-level const pointer p2
	 * p1 = p3; legal, p1 points to int v1
	 * p2 = p3; illegal, p2 points to low-level const int v2
	 */

	// constexpr works a bit differently from const
	
	// p here is a constexpr pointer, not pointer to constexpr
	// constexpr int *p = nullptr; 
	
	// int i = 1;
	// const ci = 2;
	// constexpr int *p = &i; constexpr pointer p which points to int i
	// constexpr const int *p = &ci; constexpr pointer p which points to const int ci
	
	//Ex 2.32
	int null = 0, *k = &null;
	
	//type alias
	typedef double wages; //wages is a synonym of double
	typedef wages base, *po; //base is synonym of double, po is a pointer to double

	//type alias,const,pointers

	int *ps1; //ps1 is a pointer to int (how normal pointer declaration works)

	typedef char *pstring; //pstring is a (pointer to char) + can be used as type alias

	const pstring cstr = 0; //cstr is a constant (pointer to char)
	pstring *ps2; //ps2 is a pointer to (pointer to char)
	const pstring *ps; //ps is a pointer to const pointer to char
	
	//int item1 = 5, item2 = 2;
	//auto sum = item1 + item2;
	//auto d = &i; //d is an int*

	//*** when initializing auto type(except refs), top-level const is dropped
	//int b = 0;
	//const int a = b, &r = a;
	//auto c = a; c is int type, top-level const is dropped
	//auto c = r; c is int type, r is an alias for a
	
	//for references, follow normal initialization rules
	//auto &r1 = a; r1 is a const int reference that is bound to a
	
	/*Ex 2.35
	 * const int __i = 42;
	 * auto j = i; j is a const int
	 * const auto &k = i; k is a const auto int
	 * auto *p = &i; p is a pointer to const int
	 * const auto j2 = i; j2 is a const int
	 * const auto &k2 = __i; //k2 is a const int reference bound to i
	 */

	//decltype, same initialization rules
	//** reference variables not treated as synonyms
	const int cj = 0, &ci = cj;
	decltype(cj) m = 0; //m is a const int
	decltype(ci) m1 = cj; //m1 is a const int reference bound to cj
	int *p4 = &i;
	decltype(*p4) p5 = i; //p5 is a int pointer, though dereferenced
	
	//parenthesized variables treated as reference
	//compiler evaluates the operand as an expression
	//expression type is ref of the variable type
	decltype((cj)) ref = i;
	
	//Ex 2.36
	int a_ = 3, b_ = 4;
	decltype(a_) c_ = a_; //c is int type
	decltype((b_)) d_ = a_; //d is a int reference bound to a
	++c_; //c = 4
	++d_; //++a, a = 4
	std::cout << c_ << a_ << std::endl;

	//Ex 2.37
	int a1 = 3, b1 = 4;
	decltype(a1) c1 = a1; //c is int type
	decltype(a1 = b1) d1 = a1; //d is int reference type, bound to a1
	
	//Ex 2.38
	//auto ignores top-level const for non-refs but decltype follows normal initialization rules
	//auto treats ref vars as synonyms for the objects but decltype does not
	//auto initializes value and declares type but decltype only declares type
	
	auto a2 = i; //a2 is an int
	decltype(i) a3 = i; //a3 is an int
	
	const int ic = i;
	auto a4 = ic; //a4 is int
	decltype(ic) a5 = 2; //a5 is const int
	
	//class body defines members of the class
	//members = data members(attributes) + function members(methods)
	struct Sales_data {
		std::string bookNo;
		unsigned units_sold = 0;
		double revenue = 0.0;
	}; //semi-colon to indicate end of declarators
	
	Sales_data accum, trans, *salesptr; //def variables outside of class body

}
