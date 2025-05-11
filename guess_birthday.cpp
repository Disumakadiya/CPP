#include <iostream>
using namespace std;

// Function to ask if the birthday is in a specific set
bool askIf_InSet(const string &set, int setNumber)
{
    char answer;
    cout << "Set " << setNumber << ": \n" << set << endl;
    cout << "Is your birthday (day of the month) in this set? (y/n): ";
    cin >> answer;
    return (answer == 'y' || answer == 'Y');
}

int main() 
{
    int day = 0;
    string sets[5];

    // Prepare sets using binary logic
    for (int i = 0; i < 5; i++) 
    {
        sets[i] = "";
        for (int j = 1; j <= 31; j++) 
        {
            if ((j >> i) & 1)
                sets[i] += to_string(j) + " ";
        }
    }

    cout << "Think of your birthday (day of the month from 1 to 31).\n";
    cout << "I'll try to guess it by asking a few questions.\n";

    for (int i = 0; i < 5; i++) 
    {
        if (askIf_InSet(sets[i], i + 1))
            day += (1 << i);
    }

    cout << "\nYour birthday is on the " << day << "th!\n";
    return 0;
    
}
