#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
string s1(10, 'c');
string s2("hello"); 
string s3 = "hello"; 
string s4 = "hi";
string s5 = s4 + "im" + "a human";
string s6 = "im" + s4 + "a human";
string s7 = "hi" + "im" + s4; 
//error cant add string literals
//works same way as cout, cin chaining
	
string line;
getline(cin,line);
auto len = line.size();
if (!line.empty())
	cout << line << " length: " << len << endl;
	
string word;
while (cin >> word) {
	if (word == "-1")
		break;
	cout << word << endl;
}
*/

//get line returns whitespaces as it is
//string input sees whitespace as the end of a string
	
void compare_strings(string str1, string str2) {
	auto len1 = str1.size(), len2 = str2.size();
	if (len1 == len2)
		cout << "Equal strings" << endl;
	else{
		if (len1 > len2)
			cout << str1 << endl;
		else{
			cout << str2 << endl;
		}
	}
}

string conc_string(string s) {
	string result;
	while (cin >> s) {
		if (s == "-1")
			break;
		result += s;
		result += " ";
	}
return s;
}

string make_upper(string str) {
	if (!str.empty()) 
 		for (decltype(str.size()) index = 0;
		index <= str.size() && !isspace(str[index]);
		++index)
		str[index] = toupper(str[index]);
	return str;
}

string make_hexdigits() {
	const string hexdigits = "0123456789ABCDEF";
	cout << "enter a number (0-15):" << endl;
	string result;
	decltype(hexdigits.size()) n;
	while (cin >> n)
		if (n < hexdigits.size())
			result += hexdigits[n];
	return result;
}

string replace(string s, char c1) {
	int l = s.length();
	//for loop preferred to abstract away count define and increment
	for (int i = 0; i < l; i++) {
		s[i] = c1;
	}
	/*
	int i = 0;
	while (i < l) {
		s[i] = c1;
		i++;
	}
	*/
	return s;
}

string cleanse(string s) {
	char c = '\0';
	int l = s.length();
	for (int i = 0; i < l; i++) {
		if (ispunct(s[i]))
			s[i] = c;
	}
	return s;
}

//legal, c is a cost string ref bound to s

void init_vectors() {
	vector<int> ivec1; //default init, empty
	vector<int> ivec2 = ivec1; //copy
	vector<int> ivec3(10, 1); //construct 10 int elements, each init as -1

	vector<int> ivec4{1,2,3,4,5}; //list init
	vector<int> ivec5 = {1,2,3,4,5};
	vector<string> ivec3s{10,"hi"}; //if no way to list initialize, then construct
}

//ex 3.12
vector<vector<int>> ivec6; //vector containing vectors, each holds int type objects
// vector<string> svec = ivec6; not allowed, different types
vector<string> svec(10, "null"); //vector containing 10 string objects, each with value "null"

/* ex 3.13
 * a)0
 * b)10, null
 * c)10, 42
 * d)1, 10
 * e)10, 42
 * f)1, "10"
 * g)10, "hi"
 */

void push_vector() {
	vector<int> v;
	for (int i = 0; i < 100; ++i)
		v.push_back(i);
}

void store_inputs() {
	vector<string> v;
	string word;
	while (cin >> word) {
		v.push_back(word);
	}
}

void square_ints() {
	vector<int> v;
	int i;
	while (cin >> i) {
		v.push_back(i);
	}
	for (auto &r : v)
		r *= r;
	for (auto r : v)
		cout << r << " ";
cout << "size: " << v.size() << endl;
}

void grades(vector<int> v) {
	vector<unsigned> score(11,0);
	int l = score.size();
	for (int i = 0; i < l; ++i) {
		if (v[i] <= 100)
			++score[v[i]/10];
	}
	for (int j = 0; j < l; ++j) {
		cout << score[j] << " ";
	}
	cout << endl;
}

void make_upper() {
	int count = 0;
	string word;
	vector<string> text;
	while (cin >> word) {
		if (word == "-1")
			break;
		for (decltype(word.size()) index = 0;
		index <= word.size() && !isspace(word[index]);
		++index)
		word[index] = toupper(word[index]);
	text.push_back(word);
	}
	for (auto w : text) {
		if (count == 8) {
			cout << "\n";
			count = 0;
		}
		else {
			cout << w << " ";
			++count;
		}
	}
	cout << endl;
}

void fix() {
	vector<int> ivec;
	ivec.push_back(42);
}

void inits() {
	vector<int> v1{42,42,42,42,42,42,42,42,42,42};
	vector<int> v2(10, 42); //preferred method, succinct
	// vector<int> v3; then push_back elements
}

void sum_pair() {
	vector<int> v;
	vector<int> result;
	int i;
	while (cin >> i) {
		v.push_back(i);
	}
	int l = v.size();
	for (int j = 0; j < l; j+=2)
		result.push_back(v[j]+v[j+1]);
	for (auto k : result)
		cout << k << " ";
	cout << endl;
}

void sum_pair2() {
	vector<int> v;
	vector<int> result;
	int j;
	while (cin >> j) {
		v.push_back(j);
	}
	int l = v.size();
	for (int i = 0; i < l/2; i++) {
		result.push_back(v[i]+v[l-1-i]);
	}
	if (l % 2 == 1)
		result.push_back(v[l/2]);
	for (auto k : result)
		cout << k << " ";
	cout << endl;
}

void itercaps() {
	string s = "hello";
	/*
	auto c = s.begin();
	while (c != s.end()) {
		*c = toupper(*c);
		++c;
	}
	*/
	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
		*it = toupper(*it);
	cout << s << endl;
}

void itersquare() {
	vector<int> v{1,2,3};
	for (auto it = v.begin(); it != v.end(); ++it)
		*it = *it * *it;
	for (auto i : v)
		cout << i;
	cout << endl;
}

void mulnums() {
	vector<int> v{1,2,3,4,5,6,7,8,9,10};
	for (auto it = v.begin(); it != v.end(); ++it)
		*it = *it * 2;
	for (auto i : v) {
		if (i == v.back())
			cout << i;
		else
			cout << i << ",";
	}
	//arithmetic on iterators, moves iterator forward/backwards by value of int
	auto mid = v.begin() + v.size() / 2;
	cout << " middle " << *mid;
	cout << endl;
}

int binary_search(vector<int> v, int x, vector<int>::iterator start, vector<int>::iterator end) {
	auto mid = start + (end - start) / 2;
	if (*mid == x)
		return x;
	else if (x > *mid)
		return binary_search(v, x, mid + 1, end);
	else 
		return binary_search(v, x, start, mid - 1);
}

void grade_cluster(vector<unsigned> v) {
	vector<unsigned> result(11,0);
	for (auto it = v.begin(); it != v.end(); it++) {
		if (*it <= 100) {
			int i = *it / 10;
			++result[i];
		}
	}
	for (auto r : result)
		cout << r << " ";
	cout << endl;
}

//iter1 + iter2 not allowed
//only iter2 - iter1, which gives index difference

int main() {
vector<unsigned> v{14,55,73,88,84,3,26,37,47,5,58,68,70,100};
grade_cluster(v);
return 0;
}

