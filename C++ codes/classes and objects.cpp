#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student{
  public:
  int s1,s2,s3,s4,s5;
    void input(){
      
      cin >> s1 ;
      cin >> s2 ;
      cin >> s3 ;
      cin >> s4 ;
      cin >> s5 ;
    }
    int calculateTotalScore(){
      return s1+s2+s3+s4+s5;
    }
};

int main() {
