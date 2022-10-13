#include <iostream>
#include "QueueD.h"

int main() {

	QueueD<int> test;

	test.push(5);
	test.push(6);
	test.push(7);
	test.pop();
	std::cout << test.front() << std::endl;
	std::cout << test.back() << std::endl;
	std::cout << test.empty();

	return 0;
}