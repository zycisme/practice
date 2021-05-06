#include<string>
#include<iostream>
struct Sales_item{
    std::string bookName;
    int bookSaleNum;
    double price;
    std::string ISBN;
    double revenue = 0;
};//error: expected ';' after struct definition
int main(){
    Sales_item book;
    std::cin >> book.ISBN >> book.bookSaleNum >> book.bookName >> book.price;
    book.revenue = book.bookSaleNum * book.price;
    std::cout << "ISBN：" << book.ISBN << "书名" << book.bookName << "价格" << book.price << "销量" << book.bookSaleNum << "总价格" << book.revenue << std::endl;
}
//