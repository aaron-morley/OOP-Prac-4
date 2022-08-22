// function-1-1.cpp    
	
#include <string>
	
void string_2d_copy(std::string first[][2], std::string second[][2], int n) {

    for (int index = 0; index < n; index++) {
        second[index][0] = first[index][0];
        second[index][1] = first[index][1];
    }
}