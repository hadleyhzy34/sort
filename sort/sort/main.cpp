//
//  main.cpp
//  sort
//
//  Created by Hadley on 28.09.20.
//  Copyright © 2020 Hadley. All rights reserved.
//

#include <iostream>
#include "bubble_sort.cpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    vector<int> d1={5,1,4,2,8};
    vector<int> d2={};
    solution test1;
    test1.optimzied_bubble_sort(d2);
    for(auto &x:d2){
        cout<<x<<" ";
    }
    return 0;
}
