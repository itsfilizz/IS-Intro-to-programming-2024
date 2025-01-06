#include <iostream>

void reverse(char* text)
{
    size_t size = strlen(text) - 1;

    for (int i = 0; i < (size / 2) + 1; i++) 
    {
        char temp = text[i];
        text[i] = text[size - i];
        text[size - i] = temp;
    }
}

int main()
{
    char arr[100];
    std::cout << "Enter a string: ";
    std::cin.getline(arr, 100);

    reverse(arr);

    std::cout << "Reversed string: " << arr;
    
}