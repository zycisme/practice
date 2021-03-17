#include<iostream>
int main(){
    std::cout << "请输入任意个整数，输入非数字符或按下ctrl+z结束输入" << std::endl;
    int value = 0,sum=0;
    while (std::cin>>value)
    {
        sum += value;
    }
    std::cout << sum << std::endl;

    return 0;
}