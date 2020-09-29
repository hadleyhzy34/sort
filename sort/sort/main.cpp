//
//  main.cpp
//  sort
//
//  Created by Hadley on 28.09.20.
//  Copyright © 2020 Hadley. All rights reserved.
//

#include <iostream>
#include "bubble_sort.cpp"
#include "selection_sort.cpp"
#include "Insertion_sort.cpp"
#include "quick_sort.cpp"
#include "merge_sort.cpp"
#include "bucket_sort.cpp"
#include "shell_sort.cpp"

int main(int argc, const char * argv[]) {
    //input array data
    vector<int> d1={5,1,4,2,8};
    vector<int> d2={};
    vector<int> d3={4,3,2,10,12,1,5,6};
    
    //bubble sort
//    solution test1;
//    int n=d1.size();
//    test1.recursive_bubble_sort(d1,n);
//    test1.optimzied_bubble_sort(d2);
//    for(auto &x:d1){
//        cout<<x<<" ";
//    }
    
    //selection sort
//    solution_ss test2;
//    test2.selection_sort(d1);
//    for(auto &x:d1){
//        cout<<x<<" ";
//    }
    
    //insertion sort
//    solution_is test3;
//    test3.insertion_sort(d3);
//    for(auto &x:d3){
//        cout<<x<<" ";
//    }
    
    //selection sort
//    solution_qs test4;
//    int r=d3.size();
//    test4.quick_sort(d3,0,r-1);
//    for(auto &x:d3){
//        cout<<x<<" ";
//    }
    
    //quick sort
//    solution_ms test5;
//    int r=d3.size()-1;
//    test5.merge_sort(d3,0,r);
//    for(auto &x:d3){
//        cout<<x<<" ";
//    }
    
    //bucket sort
//    vector<float> d4={ 0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434 };
//    solution_bs test6;
//    test6.bucket_sort(d4);
//    for(auto &x:d4){
//        cout<<x<<" ";
//    }
    
    //shell sort
    
    return 0;
}
