#include<iostream>
int main(){
    typedef double wages;//wages是double的同义词
    typedef wages base, *p;//base是double的同义词，p是double*的同义词
    using si = double;
    si num = 5.0;
    base num2 = 2.0;
    std::cout << num << "," << num2;
    return 0;
}