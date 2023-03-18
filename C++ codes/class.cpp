//  https://www.hackerrank.com/challenges/c-tutorial-class/problem?isFullScreen=true 

#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
  private:
    int age;
    string first_name;
    string last_name;
    int standard;
  public:
    void set_age(int s_age){
      age = s_age;
    }
    void set_first_name(string s_first_name){
      first_name = s_first_name;
    }
    void set_last_name(string s_last_name){
      last_name = s_last_name;
    }
    void set_standard(int s_standard){
      standard = s_standard;
    }
    int get_age(){
      return age; 
    }
    string get_first_name(){
      return first_name;
    }
    string get_last_name(){
      return last_name;
    }
    int get_standard(){
      return standard;
    }
string to_string(){
  string result = std::to_string(age) +','+get_first_name()+','+get_last_name()+','+std::to_string(standard);
  return result;
}
};


int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age()<< "\n";
    cout << st.get_last_name()<< "," << " " <<st.get_first_name()<< "\n";
    cout << st.get_standard()<< "\n";
    // cout  ", " <<  << ;
    // cout <<  "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
