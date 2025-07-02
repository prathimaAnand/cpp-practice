#include <iostream>

template <typename T>
class Box{
    public:
    T content;
    // constructor : its called when an obj is created
    Box(T c){
        content = c;
    }
    void show(){
        std::cout << "content: " << content << "\n";
    }
};

int main(){
    Box<int> intBox(100);
    Box<std::string> strBox("doll");
    intBox.show();
    strBox.show();
    return 0;
}