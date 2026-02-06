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

    if (vec.empty()) {
        cout << "Vector is empty.\n";
    }

    cout << c.red << ", " << c.green << ", " << c.blue;

    return 0;
}