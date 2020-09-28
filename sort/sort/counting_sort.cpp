//
//  counting_sort.cpp
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

//sorting technique based on keys between a specific range, it works by counting the number of objects having distinct key values
class solution_cs{
public:
    void count_sort(vector<int> &array){
        //linear time to calculate range
        int max=*max_element(array.begin(), array.end());
        int min=*min_element(array.begin(), array.end());
        int range=max-min+1;
        
        //res to temporarily store otuput data, cnt to count each unique objects.
        vector<int> cnt(range), res(array.size());
        
        for(auto &x:array){
            cnt[x-min]++;
        }
        //accumulate all ranges of count numbers
        for(int i=1;i<cnt.size();i++){
            cnt[i]+=cnt[i-1];
        }
        
        //running time is O(n) with space porpotional to the range of data
        for(int i=array.size()-1;i>=0;i--){
            res[cnt[array[i]-min]-1]=array[i];
            cnt[array[i]-min]--;
        }
        
        for(int i=0;i<array.size();i++){
            array[i]=res[i];
        }
        
    }
};
