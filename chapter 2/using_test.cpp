#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main(){
    // string s1, s2;
    // cout << "请输入两个字符串，空格作为分隔符" << endl;
    // cin >> s1 >> s2;
    // cout << s1 << s2 << endl;
    string s;
    while (getline(cin,s))
    {   if(s.size()>=5){
             cout << s <<endl; 
         }
        
    }
    
    return 0;
}