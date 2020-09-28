//
//  selection_sort.cpp
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

class solution_ss{
public:
    void selection_sort(vector<int>& nums){
        //repeatedly find minimum element from unsorted part
        //O(n^2)
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            //record the index of smallest integer from i to the end of array
            int min_idx=i;
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[min_idx]){
                    min_idx=j;
                }
            }
            swap(nums[i],nums[min_idx]);
        }
    }
};
