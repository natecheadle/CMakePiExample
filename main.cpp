#include <iostream>
#include <array>
#include <cstddef>

template<class InputIt>
void PrintArray(std::ostream& os, const InputIt begin, const InputIt end)
{
    os << "{ " << std::uppercase;
    for (auto it = begin; it != end; ++it)
    {
        if(*it <= 0x0F)
        {
            if(it != end - 1)
            {
                os << "0x0" << std::hex << int(*it) << std::dec << ", ";
            }
            else
            {
                os << "0x0" << std::hex << int(*it) << std::dec;
            }
        }
        else
        {
            if(it != end - 1)
            {
                os << "0x" << std::hex << int(*it) << std::dec << ", ";
            }
            else
            {
                os << "0x" << std::hex << int(*it) << std::dec;
            }
        }
       
    }
    os << std::nouppercase << " }";
}

int main()
{
    std::array<unsigned char, 5> myArray = {0x01, 0x10, 0x2A, 0x3F, 0xFF};

    std::cout << "Hello World!" << std::endl;
    
    PrintArray(std::cout, myArray.begin(), myArray.end());
    std::cout << std::endl;

    return 0;
}