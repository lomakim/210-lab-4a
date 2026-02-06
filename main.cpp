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
    int n;

    // Generate random number between 25-50
    srand(time(0));
    n = rand() % 26 + 25;
    Color temp;

    // Push rand num of colors into vector
    for (int i = 0; i < n; i++){
        temp.red = rand();
        temp.green = rand();
        temp.blue = rand();
        vec.push_back(temp);
    }

    for (int j = 0; j < vec.size(); j++){
        cout << 
    }

    // Test vec
    cout << vec[0].red << ", " << vec[0].green << ", " << vec[0].blue;

    return 0;
}