// program1-2.cpp

#include <iostream>

using namespace std;

int main()
{
    int *ptr, a[10]={1,2,3,4,5,6,7,8,9,10};
    int *b = new int[10];
    
    /* address of a[0] is assigned to ptr */
    ptr = &a[0];
    
    // I want to copy the values in a into b; since I've declared b
    // as a dynamically allocated array,
    // I can now do pointer magic!!
    b = ptr; // This NOT a copy! It's causing b to alias a; b's value is just the address of a's first element
    // From this point on, changing a value of a[i] OR b[i] will mean the change appears to happen in a[i] AND b[i]
    
    cout << "Value of first element in b " << b[0] << endl;
    cout << "Value of second element in b " << b[1] << endl;
    
    a[1] = 42; // a[i] AND b[i] are both changed by this line
    cout << "Value of second element in b " << b[1] << endl;
    return 0;
}
    
