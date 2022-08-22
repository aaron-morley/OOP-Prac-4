// function-2-1.cpp

#include<iostream>
using namespace std;

extern void multiples_of_seven(int *nums, int length) {
    int *p = nums;
	
    for(;p < nums+length; p++){
          if(*p % 7 == 0) {
              cout << *p << endl;
          }
    }
}
