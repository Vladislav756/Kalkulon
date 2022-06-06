#include <iostream>


int main()
{
	int chislo = 0;
	int chislo2 = 0;
	int action = 0;
	std::cout << "Insert 2 numbers" << std::endl;
	std::cin >> chislo >> chislo2;
	std::cout << "Choose action: 1 = + " << std::endl << "2 = - " << std::endl << "3 = * " << std::endl << "4 = :" << std::endl;
	std::cin >> action;
	switch (action)
	{
	case 1:
		std::cout << chislo + chislo2 << std::endl;
		break;
	case 2:
		std::cout << chislo - chislo2 << std::endl;
		break;
	case 3:
		std::cout << chislo * chislo2 << std::endl;
		break;
	case 4:
		std::cout << chislo / chislo2 << std::endl;
		break;
	default:
		std::cout << "Something wrong";
		break;
	}
	return 0;
}

