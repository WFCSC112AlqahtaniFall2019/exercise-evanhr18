#include <iostream>
using namespace std;
#include <vector>

int main() {
    const int NUM_ELEMENTS = 8;   // Number of elements
    vector <int> revVctr(8);               // User values
    int i;                        // Loop index
    int holder;

    cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> revVctr.at(i);
    }

    // Reverse
    for (i = 0; i < (NUM_ELEMENTS / 2); ++i) {
        holder = revVctr.at(i);
        revVctr.at(i) = revVctr.at((NUM_ELEMENTS - 1) - i); // Swap
        revVctr.at((NUM_ELEMENTS -1) - i) = holder;
    }

    // Print values
    cout << endl << "New values: ";
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << " " << revVctr.at(i);
    }
    cout << endl;

    return 0;
}