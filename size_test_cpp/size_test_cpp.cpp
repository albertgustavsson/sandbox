#include <iostream>

int main()
{
    std::cout << "Size of short int is " << sizeof(short int) << " bytes" << std::endl;
    std::cout << "Minimum of short int is " << std::numeric_limits<short int>::min() << std::endl;
    std::cout << "Maximum of short int is " << std::numeric_limits<short int>::max() << std::endl;
    std::cout << "Size of int is " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Minimum of int is " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "Maximum of int is " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Size of long int is " << sizeof(long int) << " bytes" << std::endl;
    std::cout << "Minimum of long int is " << std::numeric_limits<long int>::min() << std::endl;
    std::cout << "Maximum of long int is " << std::numeric_limits<long int>::max() << std::endl;
    std::cout << "Size of long long int is " << sizeof(long long int) << " bytes" << std::endl;
    std::cout << "Minimum of long long int is " << std::numeric_limits<long long int>::min() << std::endl;
    std::cout << "Maximum of long long int is " << std::numeric_limits<long long int>::max() << std::endl;
    std::cout << "Size of float is " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Minimum of float is " << std::numeric_limits<float>::min() << std::endl;
    std::cout << "Maximum of float is " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "Size of double is " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Minimum of double is " << std::numeric_limits<double>::min() << std::endl;
    std::cout << "Maximum of double is " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "Size of long double is " << sizeof(long double) << " bytes" << std::endl;
    std::cout << "Minimum of long double is " << std::numeric_limits<long double>::min() << std::endl;
    std::cout << "Maximum of long double is " << std::numeric_limits<long double>::max() << std::endl;
}