#include <iostream>

int Multiply(int a, int b)
{
    return a * b;
}

void MultiplyAndLog(int a, int b)
{
    int result = Multiply(a, b);
    std::cout << result << std::endl;
}

int main()
{
    // int result = Multiply(3, 2);
    // std::cout << result << std::endl;

    int result2 = Multiply(6, 3);
    std::cout << result2 << std::endl;

    int result3 = Multiply(9, 5);
    std::cout << result3 << std::endl;

    MultiplyAndLog(5, 9); // Woah more simpler CRAZYYYY
    MultiplyAndLog(45, 94);
    MultiplyAndLog(53, 90);
    std::cin.get();

    // main() function and only main() function assumes that we are returning 0 when we don't do return 0;
    // ONLY THE main() FUNCTION.
    // This is a feature of Modern C and C++ versions.
}

// We use functions because it make us easy to use the same piece of logic multiple times in multiple places WITHOUT copying and pasting the code multiple times. We call the function every time we need and woah it works lesss go. crazyyy isn't it?

// Don't create a function for every line of code its gonna make our program slower.