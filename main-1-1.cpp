// main-1-1.cpp

#include <iostream>
#include <string>
#include "function-1-1.cpp"
using namespace std;

const int rows = 3;

int main()
{
    std::string a[rows][2] = { {"a", "b"}, {"c", "d"}, {"e", "f"} };
    std::string b[rows][2] = {};

    string_2d_copy(a, b, rows);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++) {
            cout << "b[" << i << "][" << j << "]: ";
            cout << b[i][j] << endl;
        }
}