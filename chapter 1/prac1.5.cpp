#include <iostream>
int main()
{
    std::cout << "请输入两个整数"<< std::endl;
    int var1 = 0, var2 = 0;
    std::cin >> var1 >> var2;
    int result = var1 * var2;
    std::cout << var1;
    std::cout << "*";
    std::cout << var2;
    std::cout << "=";
    std::cout << result;
    std::cout << std::endl;
    return 0;
} 
// /* 正常注释 /* 嵌套注释 */ 正常注释*/