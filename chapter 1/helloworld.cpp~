#include <iostream>
#include "Sales_item.h"
int main()
{
	/*
	std::cout << "Enter 2 numbers to multiply:" << std::endl;
 	int x = 0, y = 0;
	std::cin >> x >> y;
	std::cout << x;
	std::cout << " * ";
	std::cout << y;
	std::cout << " = ";
	std::cout << x * y << std::endl;
    */

	/*
	std::cout << "Enter start number:" << std::endl;
	int val = 0, end = 0, sum = 0, start = 0;
	std::cin >> start;
	val = start;
	std::cout << "Enter end number:" << std::endl;
	std::cin >> end;
	while (val <= end){
		sum += val;
		std::cout << val << "\n";
		++val;
	}
	*/
	
	/*
	std::cout << "Enter a number" << std::endl;
	int end = 0, sum = 0;
	std::cin >> end;
	for (int val = 1; val <= end; ++val)
	   sum += val;	

	std::cout << "Sum of 1 to " << end << " inclusive is " << sum << std::endl;
	return 0;
	*/
	
	/*
	int sum = 0, value = 0;
	while(std::cin >> value){
		sum += value;
	}
	std::cout << "Sum is:" << sum << std::endl;
	*/
	
	/*
	int start = 0, end = 0, temp = 0;
	std::cout << "start:" << std::endl;
	std::cin >> start;
	std::cout << "end:" << std::endl;
	std::cin >> end;

	if (start > end){
		temp = start;
		start = end;
		end = temp;
	}
	while(start <= end){
		std::cout << start << std::endl;
		start += 1;
		}
	*/

	/*
	int prev = 0, curr = 0, count = 0;
	if (std::cin >> prev)
		count += 1;
		while (std::cin >> curr){
			if (curr == prev)
				count += 1;
			else{
				std::cout << "(" << prev << " occured " << count << " times)" << std::endl;
				prev = curr;
				count = 1;
			}
		}
		std::cout << "(" << prev << " occured " << count << " times)" << std::endl;
	*/
	
	/*
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	if (item1.isbn() == item2.isbn()){
		std::cout << item1 + item2 << std::endl;
		return 0;
	}
	else{
		std::cout << "items isbn must be the same" << std::endl;
		return -1;
	}
	*/

	/*
	Sales_item item, sum;
	while (std::cin >> item){
		sum += item;
	}
	std::cout << sum << std::endl;
	return 0;
	*/
	
	/*
	Sales_item curr, prev;
	if (std::cin >> curr){
		int count = 1;
		prev = curr;
		while (std::cin >> curr){
			if (curr.isbn() == prev.isbn()){
				count += 1;
			}
			else{
				std::cout << "transactions " << prev.isbn() << " is " << count; 
				count = 1;
				prev = curr;
			}
		}
		std::cout << "transactions of isbn " << curr.isbn() << " is " << count;

	}
	*/
	
	Sales_item total;
	if (std::cin >> total){
		Sales_item trans;
		while (std::cin >> trans){
			if (trans.isbn() == total.isbn())
				total += trans;
			else{
				std::cout << total << std::endl;
				total = trans;
			}
		}
		std::cout << total << std::endl;
		return 0;
	}
	else{
		std::cout << "No valid input" << std::endl;
		return -1;
	}


	}

