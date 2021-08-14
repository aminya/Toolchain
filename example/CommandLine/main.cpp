//---------------------------------------------------------------------------------------------------------------------
//
//---------------------------------------------------------------------------------------------------------------------
#include <exception>
#include <iostream>

int main(int argc, char** argv)
{
    try
    {
        std::cout << "Hello, World!";
    }
    catch (const std::exception& ex)
    {
        std::cout << "Exception: " << ex.what();
    }
}
