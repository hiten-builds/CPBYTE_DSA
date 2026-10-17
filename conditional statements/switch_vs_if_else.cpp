#include<iostream>
using namespace std;

int main(){

        // checking a range 
        int marks;
        cin >> marks;
    
        if (marks >= 90)
            cout << "A grade";
        else if (marks >= 75)
            cout << "B grade";
        else if (marks >= 50)
            cout << "C grade";
        else
            cout << "Fail";

        // checking multiple range 
        int age;
        bool hasID;

        cin >> age >> hasID;

        if (age >= 18 && hasID)
            cout << "Entry allowed";
        else
            cout << "Entry denied";

    /// Use switch-case when you need to compare one variable against multiple fixed values.
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Add";
                break;

            case 2:
                cout << "Subtract";
                break;

            case 3:
                cout << "Multiply";
                break;

            default:
                cout << "Invalid choice";
        }


}
