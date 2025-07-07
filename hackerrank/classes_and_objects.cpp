#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

class student{
    public:
    int scores[5];
    void input(){
        for(int i = 0; i < 5; ++i){
            std::cin >> scores[i];
        }
    }
    }
    int calculateTotalScore(){
        int sum = 0;
        for(int i=0;i<5;++i){
            sum += scores[i];
        }
        return sum;
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    student S;
    int num;
    int s1, s2, s3, s4, s5;
    std::cin>> num ;
    std::cin >> s1 >> s2 >> s3 >> s4 >> s5 ;
    
    std:: cout << S.calculateTotalScore();
    return 0;
}
