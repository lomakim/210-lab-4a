// COMSC210 | Lab 4A | Loma Kim
// This program will create and store a vector of structs
#include <iostream>
#include <vector>
using namespace std;

// CONST DECLARATIONS
const int MAX_VALUE = 255;


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
    Color temp;

    // Push rand num of colors into vector
    for (int i = 0; i < n; i++){
        temp.red = rand() % (MAX_VALUE + 1);
        temp.green = rand() % (MAX_VALUE + 1);
        temp.blue = rand() % (MAX_VALUE + 1);
        vec.push_back(temp);
    }

    // Test print for Milestone 3
    cout << "Num of colors: " << n << endl << endl;
    for (int j = 0; j < vec.size(); j++){
        cout << vec[j].red << "  "
             << vec[j].green << "  "
             << vec[j].blue << "  " << endl;
    }

    return 0;
}