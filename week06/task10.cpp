#include <iostream>

void reverseCharArray(char arr[])
{
    int counter = 0;
    while (arr[counter] != '\0')
    {
        counter++;
    }

    for (int i = 0; i < counter / 2; i++)
    {
        char temp = arr[i];
        arr[i] = arr[counter - 1 - i];
        arr[counter - 1 - i] = temp;
    }
}

int main()
{
    char arr[1000];

    std::cout << "Enter something: ";
    std::cin >> arr;

    reverseCharArray(arr);

    std::cout << "Reversed array: " << arr;
}