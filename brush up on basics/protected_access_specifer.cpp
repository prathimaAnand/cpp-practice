#include <iostream>

// base class
class Employee{
    protected:
    int salary;
};

class Software_Engineer: public Employee{
    public:
    void setSalary(int s){
        salary = s;
    }
    void getSalary(){
        return salary;
    }
};

int main(){
    Sofware_Engineer MyObj;
    MyObj.setSalary(120000);
    std::cout<< MyObj.getSalary();
    return 0;
}
