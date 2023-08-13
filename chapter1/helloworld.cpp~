#include <iostream>
#include "Sales_item.h"
int main()
{
	std::cout << "Enter 2 numbers to multiply:" << std::endl;
 	int x = 0, y = 0;
	std::cin >> x >> y;
	std::cout << x;
	std::cout << " * ";
	std::cout << y;
	std::cout << " = ";
	std::cout << x * y << std::endl;

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
	
	std::cout << "Enter a number" << std::endl;
	int end1 = 0, sum1 = 0;
	std::cin >> end1;
	for (int val = 1; val <= end1; ++val)
	   sum1 += val;	

	std::cout << "Sum of 1 to " << end1 << " inclusive is " << sum1 << std::endl;
	return 0;
	
	int sum2 = 0, value = 0;
	while(std::cin >> value){
		sum2 += value;
	}
	std::cout << "Sum is:" << sum2 << std::endl;
	
	int start1 = 0, end3 = 0, temp = 0;
	std::cout << "start:" << std::endl;
	std::cin >> start1;
	std::cout << "end3:" << std::endl;
	std::cin >> end3;

	if (start1 > end3){
		temp = start1;
		start1 = end3;
		end3 = temp;
	}
	while(start1 <= end3){
		std::cout << start1 << std::endl;
		start1 += 1;
		}

	int prev1 = 0, curr1 = 0, count1 = 0;
	if (std::cin >> prev1)
		count1 += 1;
		while (std::cin >> curr1){
			if (curr1 == prev1)
				count1 += 1;
			else{
				std::cout << "(" << prev1 << " occured " << count1 << " times)" << std::endl;
				prev1 = curr1;
				count1 = 1;
			}
		}
		std::cout << "(" << prev1 << " occured " << count1 << " times)" << std::endl;
	
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

	Sales_item item, sum3;
	while (std::cin >> item){
		sum3 += item;
	}
	std::cout << sum3 << std::endl;
	return 0;

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
