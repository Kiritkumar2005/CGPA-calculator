#include <iostream>

using namespace std;

int main() {
    int numCourses;
    cout << "Enter the number of courses: ";
    cin >> numCourses;
    
    double totalGradePoints = 0, totalCredits = 0;
    
    for (int i = 0; i < numCourses; i++) {
        double grade, credit;
        cout << "Enter grade points for course " << i + 1 << ": ";
        cin >> grade;
        cout << "Enter credit hours for course " << i + 1 << ": ";
        cin >> credit;
        
        totalGradePoints += grade * credit;
        totalCredits += credit;
    }
    
    if (totalCredits == 0) {
        cout << "Total credits cannot be zero." << endl;
    } else {
        double CGPA = totalGradePoints / totalCredits;
        cout << "Your CGPA is: " << CGPA << endl;
    }
    
    return 0;
}
