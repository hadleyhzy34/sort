//
//  shell_sort.cpp
//  sort
//
//  Created by Hadley on 28.09.20.
//  Copyright © 2020 Hadley. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <stack>
using namespace std;

class solution_shells{
public:
    //best cass O(nlogn)
    void shell_sort(vector<int> array){
        int n=array.size();
        
        int interval = n/2;
        while(interval){
            for(int i=interval;i<n;i++){
                int temp = array[i];
                int j=i;
                while(j>=interval && temp<array[j-interval]){
                    array[j]=array[j-interval];
                    j-=interval;
                }
                array[j]=temp;
            }
            interval/=2;
        }
    }
};
