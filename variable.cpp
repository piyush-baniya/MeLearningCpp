#include <iostream>

int main()
{
    int variable = 8;
    // Size: 4bytes (31 bits because 1 bit for - sign)- depends on compiler
    // Range: -2.147Billion to 2.147Billion (-2^31) to (2^31 -1)
    // Maximum Digits: 10

    std::cout << variable << std::endl;
    variable = 20; // Reassigning value
    std::cout << variable << std::endl;

    unsigned int variable2 = 29;
    // size: 4bytes (32 bits because no need to reserve a bit for - sign it can only be positive number)
    // Range: Max 4.294Bllion
    // we get our 1 precious bit back when we use unsigned

    char a = 'A';
    char b = 65; // This also is 'A' because char datatype matches it with equivalent ascii.

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    short c = 65;
    short d = 'A'; // just opposite to char it prints 65 even it is 'A' assigned it with. Just equivalent ascii thing?

    std::cout << c << std::endl;
    std::cout << d << std::endl;

    float e = 5.5f;
    double f = 5.2;
    std::cout << e << std::endl;

    bool g = true;               // true(any other number except 0) or false(0)
    std::cout << g << std::endl; // prtnts 1 as we consider 1 as true but in reality any other number except 0 is true

    std::cout << sizeof(bool) << std::endl; // prints the size of any datatype. crazyyyy isn't it?
    std::cout << sizeof(long double) << std::endl;

    std::cin.get();
}

// Data Types
// 1. Char - 1byte
// 2. short - 2bytes
// 3. int - 4bytes
// 4. long - 4bytes (usually but depends upon the compiler)
// 5. long long - 8bytes
// 6. float - 4bytes
// 7. double - 8bytes
// 8. long double - 12bytes (usually but depends upon the compiler)
// 9. bool - 1byte