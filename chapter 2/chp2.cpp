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

	//references cannot be rebinded
	y = r2; // assigns y to value of d
	r1 = d; // assigns y to value of d
	std::cout << y << r2 << std::endl;
	
	int z = 1, &rz = z;
	z = 5;   //assign z to 5
	rz = 10; //reassign z to 10
	std::cout << z << rz << std::endl;
}
