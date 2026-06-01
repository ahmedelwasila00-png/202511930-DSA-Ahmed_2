// Student Result Management System - C++ version
#include <iostream>
using namespace std;

// Function to calculate total, average and result
void calculateResult(int m1, int m2, int m3, int &total, float &average, string &status) {
    total = m1 + m2 + m3;
    average = total / 3.0;
    if (average >= 40)
        status = "Passed";
    else
        status = "Failed";
}

int main() {
    string name;
    int mark1, mark2, mark3;
    int total;
    float average;
    string status;
    
    cout << "Welcome to Student Result Management System" << endl;
    cout << "-------------------------------------------" << endl;
    
    while (true) {
        // Get student name
        cout << "Enter student name (or type 'quit' to stop): ";
        cin >> name;
        if (name == "quit")
            break;
        
        // Get marks for 3 subjects
        cout << "Enter marks for 3 subjects (0-100):" << endl;
        cout << "Subject 1: ";
        cin >> mark1;
        cout << "Subject 2: ";
        cin >> mark2;
        cout << "Subject 3: ";
        cin >> mark3;
        
        // Call the function
        calculateResult(mark1, mark2, mark3, total, average, status);
        
        // Display result
        cout << "\n--- Result ---" << endl;
        cout << "Student Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average Marks: " << average << endl;
        cout << "Status: " << status << endl;
        cout << "----------------------\n" << endl;
    }
    
    cout << "Thank you for using the system. Goodbye!" << endl;
    return 0;
}