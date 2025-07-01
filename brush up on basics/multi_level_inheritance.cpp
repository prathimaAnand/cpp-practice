#include<iostream>
using namespace std;

class MyClass{
    public:
    string MyVar;
    void MyMember(){
        std::cout<< "Hi, I'm the base class" << "\n";
    }
};

class MyChild: public MyClass{
};

class MyGrandChild: public MyChild{
};

int main(){
    MyGrandChild MyObj;
    MyObj.MyMember();
    return 0;
}