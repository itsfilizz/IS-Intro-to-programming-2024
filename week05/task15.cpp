#include <iostream>

void toUpperCase(std::string& str) 
{
    for (char& ch : str) 
    {      
        if (ch >= 'a' && ch <= 'z') 
        {            
            ch = ch - 'a' + 'A';
        }
    }
}

int main()
{
    
}
