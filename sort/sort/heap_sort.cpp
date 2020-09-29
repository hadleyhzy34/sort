//
//  heap_sort.cpp
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


//max heap condition is that parent node should be greater than its child nodes
//https://www.cnblogs.com/wanglei5205/p/8733524.html

//time complexity of heapify is O(logn), time complexity of create and build heap() is O(n), overall time complexity of heap sort is O(nlogn)
class solution_hs{
public:
    void heapify(vector<int> &array, int length, int index){
        int maxidx = index;
        int l=2*index+1;
        int r=2*index+2;
        
        if(l<length&&array[l]>array[maxidx])maxidx=l;
        if(r<length&&array[r]>array[maxidx])maxidx=r;
        
        if(maxidx!=index){
            swap(array[maxidx], array[index]);
            heapify(array, length, maxidx);
        }
    }
    
    void heap_sort(vector<int> &array){
        int n=array.size();
        for(int i=n/2-1;i>=0;i--){
            heapify(array, array.size(), i);
        }
        
        for(int i=array.size()-1;i>=0;i++){
            swap(array[0], array[i]);
            heapify(array, i, 0);
        }
    }
};
