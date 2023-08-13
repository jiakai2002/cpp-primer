#include <iostream>
#include <string>
#include <vector>
using namespace std;

void test_arr() {
	int arr[10];
	string arr0[5];
	int arr1[3] = {1, 2, 3};
	int arr2[] = {1, 2, 3};
	string arr3[3] = {"hi", "im", "kai"};
	//can init char arr using a string, null added automatically
	char arr4[] = {'a', 'b', 'c'};
	char arr5[] = "abc";
	cout << arr5[1] << endl;
	//int arr6[] = arr1; error to init with array
	int *arr_of_ptrs[10]; //array of 10 pointers to int 
	//read from inside out
	//(*ptr_arr) is a pointer
	//R: adress of arr of size 10
	//L: int elements
	int (*ptr_arr)[10] = &arr; //ptr to arr with 10 int
	int (&ref_arr)[10] = arr; //ref to arr with 10 int
}

//ex 3.27
//a)illegal, buf_size is not a constexpr
//b)legal
//c)legal
//d)illegal, no space for null value \0

//ex 3.28
//sa,sa2: 10 string elements
//ia,ia2: 10 int elements

//ex 3.29
//need to declare number of elements which may not be known beforehand
//arr of pointers not so straight forward to define

//ex 3.30
//arr index should begin with 0 and end at arr_size - 1

void def_arr() {
	int arr[10];
	for (int i = 0; i < 10; i++)
		arr[i] = i;
	for (int i : arr)
		cout << i;
	cout << endl;
}

void def_vec() {
	vector<int> v(10,0);
	for (size_t i = 0; i < v.size(); i++)
		v[i] = i;
	for (auto i : v)
		cout << i;
	cout << endl;
}

//error for referring to uninitialized object
string greet[] = {"hi", "hello", "howru"};
string *pp = greet; // converted to *pp = &greet[0]
auto greet2(greet); //auto greet2(&greet[0])
decltype(greet) greet3; // no conversion

void pointer_arithmetic() {
	int arr[] = {1,2,3,4,5};
	cout << *arr << endl; //arr is a pointer to first element
	int *p = arr; //pointer points to first element in arr
	++p; 
	cout << arr[1] << endl;
	cout << *(arr + 1) << endl; // same
	//arr is a pointer to first element
	//subscript used on arr are equivalent to on pointer
}

//ex 3.34
//p1 += p2 - p1;
//if p1 and p2 point to strings

void zero_arr() {
	int arr[] = {1,2,3,4,5};
	int *pbegin = begin(arr), *pend = end(arr);
	while (pbegin != pend) {
		*pbegin = 0;
		++pbegin;
	}
	for (auto c : arr)
		cout << c;
	cout << endl;
}

bool check_arr(int arr1[], int arr2[]) {
	for (int i = 0; i < 3; ++i){
		if (arr1[i] != arr2[i])
			return 1;
	}
	return 0;
}

bool check_vect(vector<int> v1, vector<int> v2) {
	if (v1 != v2)
		return 1; 
	return 0;
}

//ex 3.37
//use pointer to iterate through array
//print out each char
//ex 3.38
//pointers hold addresses so adding pointers would add addresses

bool compare_str(string s1, string s2) {
	/*
	if (s1.size() != s2.size())
		return 1;
	for (size_t i = 0; i < s1.size(); ++i) {
		if (s1[i] != s2[i])
			return 1;
	}
	*/
	if (s1 == s2)
		return 0;
	return 1;
}

bool compare_c_str(const char s1[], const char s2[]) {
	if (strcmp(s1, s2) == 0)
		return 0;
	return 1;
}

void init_vec_from_arr() {
	int arr[] = {1,2,3,4,5};
	vector<int> v(begin(arr), end(arr));
	for (auto i : v)
		cout << i;
	cout << endl;
}

void init_arr_from_vec() {
	vector<int> v{1,2,3,4,5};
	int arr[v.size()];
	for (int i = 0; i < v.size(); ++i)
		arr[i] = v[i];
	for (auto i : arr)
		cout << i;
	cout << endl;
}

void multid_arr() {
	int arr[3][3] = {{1},{2},{3}};
	cout << arr[1][0] << endl;
}
int main() {
	multid_arr();
	return 0;
}
