#include <iostream>

int main() 
{
    int tomatoes, peppers, carrots, olives, potatoes, seasoning_ml;
    bool hasHelper;

    std::cout << "Tomatoes: ";
    std::cin >> tomatoes;

    std::cout << "Peppers: ";
    std::cin >> peppers;

    std::cout << "Carrots: ";
    std::cin >> carrots;

    std::cout << "Olives: ";
    std::cin >> olives;

    std::cout << "Potatoes: ";
    std::cin >> potatoes;

    std::cout << "Seasoning in ml: ";
    std::cin >> seasoning_ml;

    std::cout << "Has helper (1 yes, 0 no: ";
    std::cin >> hasHelper;

    bool canMakeSalad = (tomatoes >= 1) && (peppers >= 2) && (carrots >= 4) && 
        (olives >= 3) && (potatoes >= 3) && (seasoning_ml >= 150);

    bool canMakeSoup = (tomatoes >= 2) && (peppers >= 3) && (carrots >= 5) &&
        (olives >= 6) && (potatoes >= 10) && (seasoning_ml >= 200) && hasHelper;

    bool canMakeCasserole = (tomatoes >= 5) && (peppers >= 6) && (carrots >= 12) &&
        (olives >= 7) && (potatoes >= 12) && (seasoning_ml >= 300) && hasHelper;

    bool can_eat = canMakeSalad || canMakeSoup || canMakeCasserole;

    if (can_eat) 
    {
        std::cout << "Traycho will eat!" << std::endl;
    }
    else 
    {
        std::cout << "Traycho won't eat." << std::endl;
    }
}
