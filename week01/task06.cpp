#include <iostream>

int main()
{
	int price;
	int USB_ports;
	int RAM;
	bool SSD;

	bool canBuy;

	std::cout << "Price: ";
	std::cin >> price;

	std::cout << "USB ports: ";
	std::cin >> USB_ports;

	std::cout << "RAM: ";
	std::cin >> RAM;

	std::cout << "SSD/ 1-true; 0-false /: ";
	std::cin >> SSD;
	
	//С булев израз
	canBuy = (price >= 1000 && price <= 1500 && USB_ports >= 3 && RAM >= 8 && SSD == 1) || (price <= 800 && SSD == 0 || RAM < 8);

	if (canBuy)
	{
		std::cout << "Tishko can buy it";
	}
	else
	{
		std::cout << "Tishko can't buy it";
	}

	//Без булев израз
	if (price >= 1000 && price <= 1500 && USB_ports >= 3 && RAM >= 8 && SSD == 1)
	{
		std::cout << "Tishko can buy it";
	}
	else if (price <= 800 && SSD == 0 || RAM < 8)
	{
		std::cout << "Tishko can buy it";
	}
	else
	{
		std::cout << "Tishko can't buy it";
	}
}
