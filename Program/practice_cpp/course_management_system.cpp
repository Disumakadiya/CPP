#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;

class student {
public:
    string name;
    int roll_no;
    double marks;

    student(string name, int roll_no, double marks)
        : name(name), roll_no(roll_no), marks(marks) {}
};

vector<student> students;
queue<student> pending_students;

void add_student(string name, int roll_no, double marks)
{
    students.push_back(student(name, roll_no, marks));
}

void display_students()
 {
    // using lambda function for sorting
    sort(students.begin(), students.end(), [](const student& s1, const student& s2)
    {
        return s1.marks < s2.marks; // sort in ascending order
    });

    for (auto& s : students)
    {
        cout << "Name: " << s.name
             << ", Roll Number: " << s.roll_no
             << ", Marks: " << s.marks << endl;
    }
}

void find_high_score(double threshold)
{
    cout << "\nStudents with marks above " << threshold << ":\n";
    for_each(students.begin(), students.end(), [threshold](const student& sm) 
    {
        if (sm.marks > threshold) 
        {
            cout << sm.name << " with marks: " << sm.marks << endl;
        }
    });
}

void remove_student_below_threshold(double threshold) 
{
    students.erase(
        remove_if(students.begin(), students.end(),
                  [threshold](const student& sm)
                   {
                      return sm.marks < threshold;
                  }),
        students.end());
}

void add_pending_student(const student& addstudent)
 {
    pending_students.push(addstudent);
}

// Function to move pending students to the main list
void move_pending_to_students() 
{
    while (!pending_students.empty()) 
    {
        students.push_back(pending_students.front());
        pending_students.pop();
    }
}

int main()
{

    add_student("Nobita", 1, 68.5);
    add_student("Shizuka", 2, 92.0);
    add_student("Gian", 3, 45.0);
    add_student("Suneo", 4, 78.5);

    cout << "\nAll Students (Sorted by Marks):\n";
    display_students();

    find_high_score(75);

    cout << "\nRemoving students below 60 marks...\n";
    remove_student_below_threshold(60);

    cout << "\nStudents After Removal:\n";
    display_students();

    // Adding pending student
    student pending("Doremon", 5, 99.0);
    add_pending_student(pending);

    // Move pending students to active list
    move_pending_to_students();

    cout << "\nStudents After Adding Pending Students:\n";
    display_students();

    return 0;
}
