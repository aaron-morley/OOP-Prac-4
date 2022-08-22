// function-2-2.cpp

#include<iostream>
using namespace std;

extern int max_sub_sum(int *nums, int length) {
   int current_max = 0;
   int working_max = 0;
   for(int i=0; i<length; i++) {
      working_max = max(nums[i], working_max + nums[i]);
      current_max = max(current_max, working_max);
   }
   return current_max;
}
