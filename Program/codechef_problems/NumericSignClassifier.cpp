#include <iostream>
#include <limits>
using namespace std;


string analyzeNumber(int num) {

   
    if (num == 0)
        return "Zero";

    return signbit(num) ? "Negative" : "Positive";
}

int main() {
    int n;

    
    if (!(cin >> n)) {
        cerr << "Invalid Input";
        return 1; 
    }

    cout << analyzeNumber(n);
    return 0;
}
