#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    // delcaring and reading inputs
    vector<int> v;
    int n;
    cin>>n;
    for (int i; i<n; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    // sorting and writing sorted vector to output
    sort(v.begin(),v.end());
    for(int j = 0; j < n; j++){
        cout<<v.at(j)<<" ";// element with space
    }
    return 0;
}

