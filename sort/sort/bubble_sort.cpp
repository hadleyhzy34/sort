//
//  bubble_sort.cpp
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

//bubble sort is the simplest sorting algorithm that works by repeatedly swapping adjacent elements if they are in the wrong order
class solution{
public:
    void bubble_sort(vector<int> &array){
        //O(n^2)
        int n=array.size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(array[j]>array[j+1]){
                    swap(array[j], array[j+1]);
                }
            }
        }
    }
    
    //optimized bubble sort
    void optimzied_bubble_sort(vector<int> &array){
        //worst case:O(n^2)  best case:O(n)
        int n=array.size();
        for(int i=0;i<n-1;i++){
            bool swapped=false;
            for(int j=0;j<n-i-1;j++){
                if(array[j]>array[j+1]){
                    swap(array[j], array[j+1]);
                    swapped=true;
                }
            }
            if(swapped==false)break;
        }
    }
    
    //recursive bubble sort
    void recursive_bubble_sort(vector<int> &array, int n){
        if(n==1)return;
        //worst case:
        for(int i=0;i<n-1;i++){
            if(array[i]>array[i+1]){
                swap(array[i],array[i+1]);
            }
        }
        recursive_bubble_sort(array, n-1);
    }
};
