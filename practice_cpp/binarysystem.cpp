#include <iostream>
#include <string>

using namespace std;

bool check_binary(string str) 
{
    for (char ch : str) 
    {
        if (ch != '0' && ch != '1')
        {
            return false;
        }
    }
    return true;
}

string ones_compliment(string binary) 
{
    string comp = binary;
    for (int i = 0; i < binary.length(); i++)
    {
        comp[i] = (binary[i] == '0') ? '1' : '0';
    }
    return comp;
}


void count_Bits(string str, int &ones, int &zeros) 
{
    ones = zeros = 0;
    for (char ch : str) 
    {
        if (ch == '1') ones++;
        else if (ch == '0') zeros++;
    }
}

int main() 
{
    string binary;

    cout << "Enter a binary number: ";
    cin >> binary;

    if (!check_binary(binary))
    {
        cout << "Invalid binary number" << endl;
        return 1;
    }

    int onesOriginal, zerosOriginal;
    count_Bits(binary, onesOriginal, zerosOriginal);

    string onesComp = ones_compliment(binary);

    int onesCompCount, zerosCompCount;
    count_Bits(onesComp, onesCompCount, zerosCompCount);

    cout << "\nOriginal Binary:       " << binary;
    cout << "\nOne's Complement:      " << onesComp;

    cout << "\n\nIn Original Binary: ";
    cout << "\nNumber of 1s: " << onesOriginal;
    cout << "\nNumber of 0s: " << zerosOriginal;

    cout << "\n\nIn One's Complement: ";
    cout << "\nNumber of 1s: " << onesCompCount;
    cout << "\nNumber of 0s: " << zerosCompCount;

    cout << endl;
    return 0;
}
