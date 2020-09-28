//
//  Insertion_sort.cpp
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


class solution_is{
public:
    void insertion_sort(vector<int>& nums){
        //repeatedly find minimum element from unsorted part
        //O(n^2)
        int n=nums.size();
        for(int i=1;i<n;i++){
            int key=i;
            for(int j=i-1;j>=0;j--){
                if(nums[key]>nums[j]){
                    break;
                }else{
                    swap(nums[key],nums[j]);
                    key=j;
                }
            }
        }
    }
};
