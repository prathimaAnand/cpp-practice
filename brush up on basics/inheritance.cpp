#include <iostream>
using namespace std;

class Fruit{
    public:
    string taste = "sweet";
    void Taste(string t){
        taste = t;
        std::cout<<"yum yum" <<"\n";
    }
};

class Seaonsal:public Fruit {
	public:
    string type = "Mango";
};

int main(){
    Seaonsal myfruit;
    std::cout << myfruit.taste << " " << myfruit.type << "\n";
    return 0;
}