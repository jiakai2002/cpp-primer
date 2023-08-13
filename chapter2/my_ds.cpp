#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{	
	Sales_data data1, data2;
	double price = 0;
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = price * data1.units_sold;
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = price * data2.units_sold;

	//sum transactions
	if (data1.bookNo == data2.bookNo){
		int total_count = data1.units_sold + data2.units_sold;
		double total_revenue = data1.revenue + data2.revenue;
		std::cout << data1.bookNo << " " << total_count << " " << total_revenue << std::endl;
		//no sales
		if (total_count == 0)
			std::cout << data1.bookNo << " " << total_revenue << std::endl;
		return 0;
	}
	else{
		std::cerr << "ISBN not the same" << std::endl;
		return -1;
	}
}
