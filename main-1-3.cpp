// main-1-3.cpp

#include <iostream>
using namespace std;
#include "function-1-3.cpp"

int main() {

	int old_array[5] = {1,2,3,4,5,};
	int new_array[5];
	int length = (sizeof(old_array)/sizeof(*old_array));

    copy_integers(old_array, new_array, length);
	
	for (int i = 0; i < length; i++)
    {
        printf("%d ", new_array[i]);
    }

    return 0;
}
    