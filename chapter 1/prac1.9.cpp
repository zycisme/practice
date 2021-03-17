// 计算50-100的和
#include<iostream>
int main(){
    int sum = 0, num = 50;
    while (num<=100){
        sum += num;
        num++;
    }
    std::cout << "50-100的和为" << sum << std::endl;
// 1.20 ：递减输出0-10
    int n = 10;
    while(n>=0){
        std::cout << n << std::endl;
        --n;
    }
    return 0;
}