#include <iostream>
using namespace std;

class Employee{
    private:
    int salary;
    public:
    Employee(int s){
        salary = s;
    }
    friend void some_func(Employee num);
};

void some_func(Employee num){
    std::cout<< "salary:" << num.salary << "\n";
}

int main(){
    Employee myEmp(160000);
    some_func(myEmp);
    return 0;
}
