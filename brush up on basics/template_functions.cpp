#include <iostream>

T sensor(T a, T b){
    return a + b;
} 

int main(){
    std::cout << sensor<int>(4, 8) << "\n";
    std::cout << sensor<double>(1.2, 3.4) << "\n";
    return 0;
}