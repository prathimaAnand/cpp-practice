#include <iostream>
using namespace std;
#include <string>

class car{
    public:
    string brand;
    string color;
    car(){
        brand = "unknown";
        color = "unknown";
    }
    car(string a, string b){
        brand = a;
        color = b;
    }
};

int main(){
    car car1; // constructor 1
    car car2("new", "white"); // constructor 2
    std::cout<< car1.brand << " " << car1.color << "\n";
    std::cout<< car2.brand << " " << car2.color << "\n";
    return 0;
}
