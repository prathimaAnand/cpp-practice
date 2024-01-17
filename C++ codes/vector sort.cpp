#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    // store all the numbers
    int num_i, query, no_queries;
    vector<int> v(num_i);
    for (int i = 0; i < v.size(); i++){
        // int ele;
        // cin>>ele;
        // v.push_back(ele);
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int l =0; l<v.size();l++){
        cout<<"v printing";
        cout<<v[l];
    }
    // how to receive diff queries
    // for(int j = 0; j >= no_queries; j++){
        
    // }
    // for(int k = 0; k < v.size(); k++){
    //     if(query == v.at(k))
    //         cout<<"Yes "<<k;
    //     else
    //         if(query > v.at(k))
    //         cout<<"No "<<k;
    // }
    // cout<<"outside while";
    cin>>query;
    while(query--){// false when query = 0
        // cout<<"inside while";
        int y;
        cin>>y;
        auto z = lower_bound(v.begin(),v.end(), y);
        if(z != v.end() && y == *z)
            cout<<"Yes "<<z - v.begin()<<endl;
        else
            cout<<"No "<<z - v.begin()<<endl;
    }  
    return 0;
    
}

