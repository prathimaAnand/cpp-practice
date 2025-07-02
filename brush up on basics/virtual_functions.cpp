#include <iostream>

// Base class
class Animal{
    public:
    virtual void sound(){
        std::cout<< "Animal sounds: " << "\n";
    }
};

// Derived class
class Dog: public Animal{
    public:
    void sound() override{
        std::cout<< "Dog barks" << "\n";
    }
};

int main(){
    Animal* a;
    Dog d;
    a = &d;
    a->sound();
    return 0;
}