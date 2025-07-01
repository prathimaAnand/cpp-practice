#include <iostream>
using namespace std;

// Base class 1
class MyFather{
    public:
    string MyFatherFunction(){
        return "I am a jovial person" ;
    }
};

// Base class 2
class MyMother{
    public:
    string MyMotherFunction(){
        return "I am a clam person" ;
    }
};

// child class
class MyChild: public MyMother, public MyFather{
};


int main(){
    MyChild MyObj;
    std::cout << "I am like my parents. \n" <<MyObj.MyFatherFunction() << "\n and " << MyObj.MyMotherFunction() ;
    return 0;
}

To make the code simple
#include <iostream>
using namespace std;

// Base class 1
class MyFather{
    public:
    void MyFatherFunction(){
        std::cout<< "I am a jovial person" << "\n";
    }
};

// Base class 2
class MyMother{
    public:
    void MyMotherFunction(){
        std::cout<< "I am a clam person" << "\n";
    }
};

// child class
class MyChild: public MyMother, public MyFather{
};


int main(){
    MyChild MyObj;
    std::cout << "I am like my parents. \n";
    MyObj.MyFatherFunction();
    MyObj.MyMotherFunction() ;
    return 0;
}
