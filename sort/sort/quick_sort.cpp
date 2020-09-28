//
//  quick_sort.cpp
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

//it picks an element as pivot and partitions the given array around the picked pivot
class solution_qs{
public:
    //it matters if it's not referenced
    int partition(vector<int> &nums, int l,int r){
        //takes last element as pivot
        int pivot=nums[r];
        
        //using index to track current most right position that element is smaller than pivot
        int i=l-1;
        for(int j=l;j<=r-1;j++){
            if(nums[j]<pivot){
                i++;
                swap(nums[i],nums[j]);
            }
        }
        //places the pivot at the last position
        swap(nums[i+1],nums[r]);
        return i+1;
    }
    
    //worst case: O(n^2) every time it picks the smallest or largest number
    //best case: O(nlogn) everytime it picks the number in the middle of the array
    
    void quick_sort(vector<int> &nums, int l, int r){
        int n=nums.size();
        if(l<r){
            int pi=partition(nums,l,r);
            
            quick_sort(nums, l, pi-1);
            quick_sort(nums, pi+1, r);
        }
    }
};
