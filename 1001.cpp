#include <iostream>
#include <string>
using namespace std;
int main(){
    int a,b;
    std::cin >> a>>b;
    int c = a+b;
    string s = to_string(c);
    if(c<0){
        std::cout << "-";
        s = s.substr(1,s.length()-1);
    }
    int length = s.length();
    int others = length%3;
    int i ;
    for(i=0;i<others;i++) std::cout <<s[i];
    if(i!=0 && i<length) std::cout << "," ;
    while(i<length-2){
        int index;
        for(index = i;index<i+3;index++) std::cout <<s[index];
        i = index;
        if(i<length) std::cout << ",";
    }
    return 0;
}
