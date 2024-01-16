#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
    // store all the numbers
    int num_i, query, no_queries;
    vector<int> v;
    for (int i = 0; i < v.size(); i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    // how to receive diff queries
    for(int j = 0; j >= no_queries; j++){
        
    }
    for(int k = 0; k < v.size(); k++){
        if(query == v.at(k))
            cout<<"Yes "<<k;
        else
            if(query > v.at(k))
            cout<<"No "<<k;
    }
}
