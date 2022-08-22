// function-1-4.cpp

#include<iostream>
using namespace std;

void copy_doubles(double *old_array, double *new_array, int length) {
    double *a1 = old_array;
    double *a2 = new_array;

    for(int i=0 ; i<length ; i++) {
        *(a2+i) = *(a1+i);
    }
}
