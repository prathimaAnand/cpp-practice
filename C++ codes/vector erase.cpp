#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    // delcaring and reading inputs
    int n;
    vector<int> v;
    cin>>n;
    
    for(int i=0; i<n ; i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    int pos;
    int range_start, range_end;
    cin>>pos>>range_start>>range_end;
    v.erase(v.begin()+ (pos - 1));
    v.erase(v.begin()+ (range_start - 1), v.begin() + (range_end - 1));
    //printing results
    cout<<v.size()<<endl;
    for(int j = 0; j<v.size(); j++){
        cout<<v[j]<<" ";
    }
    return 0;
}
