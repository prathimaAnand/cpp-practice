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
    int num; // number of students
    std::cin>> num ;
    std::vector<student> S(num); // all students
    
    for(int j = 0; j < num; ++j){
        S[j].input();
    }
    int kristen_score = S[0].calculateTotalScore();
    
    // check if num of students who scored greater than kristen
    int count = 0;
    for(int k = 1; k < num; ++k){
        if(S[k].calculateTotalScore() > kristen_score)
        count += 1;
    }

    std::cout << count << std::endl;
    return 0;
}
