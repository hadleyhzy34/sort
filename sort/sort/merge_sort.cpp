//
//  merge_sort.cpp
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

class solution_ms{
public:
    //merge two arrays, arrays1: index from l to m, array2: index from m+1,r
    void merge(vector<int> &nums, int l,int m, int r){
        
        //two arrays to be merged
        vector<int> temp1(nums.begin()+l,nums.begin()+m+1);
        vector<int> temp2(nums.begin()+m+1,nums.begin()+r+1);
        
        int n1=temp1.size();
        int n2=temp2.size();
        int k=l,i=0,j=0;
        //using two pointers to merge into nums
        while(i<n1&&j<n2){
            if(temp1[i]<temp2[j]){
                nums[k]=temp1[i];
                i++;
            }else{
                nums[k]=temp2[j];
                j++;
            }
            k++;
        }
        //if one of them is not fully merged
        while(i<n1){
            nums[k]=temp1[i];
            i++;
            k++;
        }
        while(j<n2){
            nums[k]=temp2[j];
            j++;
            k++;
        }
    }
    
    //worst case, best case and average case, time complexity all should be O(nlogn)
    //logn: merge sort divides the array into two halves
    //n:for each two halves, merge them cost linear time
    
    void merge_sort(vector<int> &nums, int l, int r){
        if(l<r){
            int m=l+(r-l)/2;
            
            //sort first and second halves
            merge_sort(nums, l, m);
            merge_sort(nums, m+1, r);
            
            merge(nums,l,m,r);
        }
    }
};
