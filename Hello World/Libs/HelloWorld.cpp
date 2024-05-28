#include <iostream>

extern "C" __declspec(dllexport) void say_hello();

void say_hello()
{
    std::cout << "Hello, from HelloWorld!\n";
}
