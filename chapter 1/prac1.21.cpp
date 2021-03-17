#include<iostream>
int main(){
    std::cout << "请输入两个整数" << std::endl;
    int var1 = 0, var2 = 0;
    std::cin >> var1 >> var2;
    if(var1>var2){
        int tmp = 0;
        tmp = var1;
        var1 = var2;
        var2 = tmp;
    }
    while(var1<=var2){
        std::cout << var1 << std::endl;
        var1++;
    }
    return 0;
    }