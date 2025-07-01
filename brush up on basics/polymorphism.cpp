#include <iostream>

// Base class
class Animal{
    public:
    void make_a_sound(){
        std::cout<< "Animal makes sounds like: " << "\n";
    }
};

// Derived classes
class Dogs: public Animal{
    public:
    void make_a_sound(){
        std::cout<< "Dogs makes a sound like bow bow " << "\n";
    }
};

class Cats: public Animal{
    public:
    void make_a_sound(){
        std::cout<< "Cats makes a sound like meow meow" << "\n";
    }
};

class Birds: public Animal{
    public:
    void make_a_sound(){
        std::cout<< "Birds makes a sound like tweet tweet " << "\n";
    }
};

int main(){
    Dogs MyDog;
    Cats MyCat;
    Birds MyBird;
    MyDog.make_a_sound();
    MyCat.make_a_sound();
    MyBird.make_a_sound();
    return 0;
}