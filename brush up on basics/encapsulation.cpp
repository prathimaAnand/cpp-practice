#include <iostream>
using namespace std;

class Employee{
    private:
    int salary;
    public:
    void setSalary(int s){
        salary = s;
    }
    int getSalary(){
        return salary;
    }
};

int main(){
    Employee obj;
    obj.setSalary(160000);
    std::cout<< obj.getSalary() << "\n";
    return 0;
}