#include <iostream>


int main()
{
	int number = 0;
	int number2 = 0;
	char action;
	std::cout << "Insert 2 numbers" << std::endl;
	std::cin >> number >> number2;
	std::cout << "Choose action" << std::endl;
	std::cin >> action;
	switch (action)
	{
	case 1:
		std::cout << number + number2 << std::endl;
		break;
	case 2:
		std::cout << number - number2 << std::endl;
		break;
	case 3:
		std::cout << number * number2 << std::endl;
		break;
	case 4:
		std::cout << number / number2 << std::endl;
		break;
	default:
		std::cout << "Something wrong";
		break;
	}
	return 0;
}

