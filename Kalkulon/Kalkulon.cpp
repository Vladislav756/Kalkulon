#include <iostream>


int main()
{
	int number = 0;
	int number2 = 0;
	char action;
	std::cout << "Calculator" << std::endl;
	std::cin >> number >> action >> number2;
	switch (action)
	{
	case '+':
		std::cout << number + number2 << std::endl;
		break;
	case '-':
		std::cout << number - number2 << std::endl;
		break;
	case '*':
		std::cout << number * number2 << std::endl;
		break;
	case '/':
		std::cout << number / number2 << std::endl;
		break;
	default:
		std::cout << "Something wrong";
		break;
	}
	return 0;
}

