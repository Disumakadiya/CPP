///*
//#include<iostream>
//#include<vector>
//using namespace std;
//int main()
//{
//    vector<int>numbers;
//
//    numbers.push_back(2);
//    numbers.push_back(3);
//
//    // Adding elements using emplace_back (more efficient)
//    numbers.emplace_back(30);
//    numbers.emplace_back(40);
//
//    cout<<"first number "<<numbers[0]<<"\n";
//
//    cout<<"vector elements iterat in loop ";
//    //vector elements
//    for(int i:numbers)
//    {
//        cout<<i<<" ";
//    }
//    cout<<endl;
//
//    //removing the last element
//    numbers.pop_back();
//
//    cout << "After pop_back, last element: " << numbers.back() << endl;
//
//    return 0;
//}
//*/
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Number {
//private:
//    vector<int> numbers; // Private vector to store numbers
//
//public:
//    // Function to take input from the user
//    void inputNumbers() {
//        int n, value;
//
//        cout << "Enter the number of elements: ";
//        cin >> n;
//
//        cout << "Enter " << n / 2 << " elements using push_back():\n";
//        for (int i = 0; i < n / 2; i++) {
//            cin >> value;
//            numbers.push_back(value);
//        }
//
//        cout << "Enter " << (n - n / 2) << " elements using emplace_back():\n";
//        for (int i = n / 2; i < n; i++) {
//            cin >> value;
//            numbers.emplace_back(value);
//        }
//    }
//
//    // Function to display the vector elements
//    void displayNumbers() {
//        cout << "Vector elements: ";
//        for (int num : numbers) {
//            cout << num << " ";
//        }
//        cout << endl;
//    }
//
//    // Function to remove the last element
//    void removeLast() {
//        if (!numbers.empty()) {
//            numbers.pop_back();
//            cout << "After pop_back, last element: " << (numbers.empty() ? "None" : to_string(numbers.back())) << endl;
//        }
//    }
//};
//
//int main() {
//    Number numObj; // Create an object of Number class
//    numObj.inputNumbers(); // Take input
//    numObj.displayNumbers(); // Display elements
//    numObj.removeLast(); // Remove last element
//
//    return 0;
//}


#include<iostream>
#include<vector>
using namespace std;

int main()
{

    return 0;
}
