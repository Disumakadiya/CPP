#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> numbers;
    int n, value;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Entered number is" << n << endl;
    for (int i = 0; i < n; i++) {
        cin >> value;
        numbers.push_back(value);
    }

    cout << "You entered: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
