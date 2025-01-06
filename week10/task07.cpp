#include <iostream>

size_t countVowels(const char* text)
{
    size_t count = 0;
    for (int i = 0; text[i] != 0; i++)
    {
        if (text[i] == 'a' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' || text[i] == 'e') 
        {
            count++;
        }
        if (text[i] == 'A' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U' || text[i] == 'E')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char arr[100];

    std::cout << "Enter your string: ";
    std::cin.getline(arr, 100);

    int vowels = countVowels(arr);
    std::cout << "Number of vowels: " << vowels << std::endl;
}
