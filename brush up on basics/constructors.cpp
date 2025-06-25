#include <iostream>
#include <string>
using namespace std;

class pizza{
    public:
    string name;
    string type;
    int num;
    pizza(string a, string b, int c){
        name = a;
        type = b;
        num = c;
    }
};

int main(){
    pizza order1("veg", "regular", 1 );
    pizza order2("non veg", "large", 2);

    std::cout<< order1.name << ", " << order1.type << ", " << order1.num <<"\n";
    std::cout<< order2.name << ", " << order2.type << ", " << order2.num <<"\n";
    return 0;
}

// constructer defination outside class
class pizza{
    public:
    string name;
    string type;
    int num;
    pizza(string a, string b, int c);
};

pizza::pizza(string a, string b, int c){
        name = a;
        type = b;
        num = c;
    }


int main(){
    pizza order1("veg", "regular", 1 );
    pizza order2("non veg", "large", 2);

    std::cout<< order1.name << ", " << order1.type << ", " << order1.num <<"\n";
    std::cout<< order2.name << ", " << order2.type << ", " << order2.num <<"\n";
    return 0;
}