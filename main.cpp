// COMSC210 | Lab 4A | Loma Kim
// This program will create and store a vector of structs
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

// CONST DECLARATIONS
const int MAX_VALUE = 255, WIDTH = 8;


// STRUCT DECLARATIONS
struct Color {
    int red, green, blue;
};

int main(){
    // DECLARATIONS
    vector <Color> vec;
    int n;

    // Generate random number between 25-50
    srand(time(0));
    n = rand() % 26 + 25;

    // Push random num of colors into vector with random values
    Color temp;                                 // temp object to push into vector elements
    for (int i = 0; i < n; i++){
        temp.red = rand() % (MAX_VALUE + 1);
        temp.green = rand() % (MAX_VALUE + 1);
        temp.blue = rand() % (MAX_VALUE + 1);
        vec.push_back(temp);
    }

    // Print Table of Values
    cout << setw(WIDTH) << "Color #" << "R Value" << "G Value" << "B Value" << endl;
    cout << setw(WIDTH) << "------- " << "------- " << "------- " << "------- ";
    for (int j = 0; j < vec.size(); j++){
        cout << setw(WIDTH) << vec[j].red
             << setw(WIDTH) << vec[j].green
             << setw(WIDTH) << vec[j].blue << endl;
    }

    return 0;
}