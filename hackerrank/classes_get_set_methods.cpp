#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

class Student{
    private:
    int age;
    std::string first_name;
    std::string last_name;
    int s;
    public:
    void set_age(int a){
        age = a;
    }
    int get_age(){
        return age;
    }
    void set_first_name(std::string s_name){
        first_name = s_name;
    }
    std::string get_first_name(){
        return first_name;
    }
    void set_last_name(std::string l_name){
        last_name = l_name;
    }
    std::string get_last_name(){
        return last_name;
    }
    void set_standard(int s_std){
        s = s_std;
    }
    int get_standard(){
        return s;
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    Student S;
    int s_age, s_std;
    std::string s_fname, s_lname;
    std::cin>> s_age >> s_fname >> s_lname >> s_std;
    
    S.set_age(s_age);
    S.set_first_name(s_fname);
    S.set_last_name(s_lname);
    S.set_standard(s_std);
    
    std::cout<< S.get_age() <<"\n";
    std::cout<< S.get_last_name() << ", " << S.get_first_name() <<"\n";
    std::cout<< S.get_standard() <<"\n";
    std::cout<< "\n";
    std::cout << S.get_age() << "," << S.get_first_name() << "," << S.get_last_name() << "," << S.get_standard();
    return 0;
}
