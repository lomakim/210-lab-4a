// COMSC210 | Lab 4A | Loma Kim
// This program will create and store a vector of structs
#include <iostream>
#include <vector>
using namespace std;

// STRUCT DECLARATION
struct Color {
    int red, green, blue;
};

int main(){
    // DECLARATIONS
    vector <Color> vec;

    // Test struct and empty vec
    Color c = {10, 190, 75};

    vec.push_back(c);

    cout << vec[0].red << ", " << vec[0].green << ", " << vec[0].blue;

    return 0;
}