#include <iostream>
int a;
int main()
{
    std::cout << "Hell";
    std::cin >> a;
}
// debian based

// #include <iostream>
// int a;
// int main()
// {
// #if defined(__clang__)
//     std::cout << "Compiler: Clang " << __clang_major__ << "."
//               << __clang_minor__ << "." << __clang_patchlevel__ << std::endl;
// #elif defined(__GNUC__)
//     std::cout << "Compiler: GCC (GNU) " << __VERSION__ << std::endl;
// #elif defined(_MSC_VER)
//     std::cout << "Compiler: MSVC (Visual Studio) " << _MSC_VER << std::endl;
// #else
//     std::cout << "Compiler: Unknown" << std::endl;
// #endif
//     std::cin >> a;
//     return 0;
// }