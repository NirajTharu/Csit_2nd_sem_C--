#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try 
    {
        const int arraySize = 5;
        int myArray[arraySize] = {1, 2, 3, 4, 5};
        
        int index;
        cout << "Enter an array index: ";
        cin >> index;

        if (index < 0 || index >= arraySize) {
            throw out_of_range("Index out of bounds");
        }

        int value = myArray[index];
        cout << "Value at index " << index << ": " << value <<endl;
    }
    catch (const out_of_range& e) 
    {
        cerr << "Exception: " << e.what() <<endl;
        cerr << "Array index is out of bounds." <<endl;
    }
    
    return 0;
}
