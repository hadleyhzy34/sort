//
//  bucket_sort.cpp
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

class solution_bs{
public:
    void bucket_sort(vector<float> &nums){
        int n=nums.size();
        vector<vector<float>> b(n);
        
        //put array elements in different buckets
        //O(n) to insert nums[i] into bucket
        for(int i=0;i<n;i++){
            int bi=n*nums[i];
            b[bi].push_back(nums[i]);
        }
        
        //sort individual buckets
        //O(n) on average if all number are uniformly distributed
        for(int i=0;i<n;i++)
            sort(b[i].begin(), b[i].end());
        
        //concatenate all buckets into nums
        //O(n) time to concatenate
        int index=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<b[i].size();j++){
                nums[index++]=b[i][j];
            }
        }
    }
};
