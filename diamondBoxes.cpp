#include <iostream>
using namespace std;

int main() {
    int n; // Number of pouches
    cin >> n;
    
    int diamonds[n]; // Array to store the number of diamonds in each pouch
    for (int i = 0; i < n; i++) {
        cin >> diamonds[i];
    }
    
    int trips; // Number of trips required
    cin >> trips;
    
    int boxes = 0; // Number of diamond boxes used so far
    int currentTripDiamonds = 0; // Number of diamonds in the current trip
    
    for (int i = 0; i < n; i++) {
        currentTripDiamonds += diamonds[i];
        
        // If the current trip is full or we cannot add more diamonds to it, start a new trip
        if (currentTripDiamonds > trips || diamonds[i] > trips) {
            boxes++;
            currentTripDiamonds = diamonds[i];
        }
    }
    
    // If there are diamonds remaining in the last trip, count it as one more box
    if (currentTripDiamonds > 0) {
        boxes++;
    }
    
    cout << boxes << endl;
    
    return 0;
}
