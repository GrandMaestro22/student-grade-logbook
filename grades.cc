#include <iostream>
#include <string>

using namespace std;

struct Student{
    string name;
    struct Grades
    {
        double midterm1;
        double avgAssignments;
        double midterm2;
        double final_exam;
        double average;
    };
    Grades grades;
};

Student student[15];
int count = 0;  

double averageGrade(Student s);
void fillInfo();


int main(){
    fillInfo();
    for(int i = 0; i < count; i++){
        cout << student[i].name << " — Average: " 
             << averageGrade(student[i]) << "%" << endl;
    }
}

void fillInfo(){
    char choice;
    bool running = true;
    while(true){
        cout << "Welcome to the Student Logbook."<<endl;
        cout << "All grades are to be recorded out of 50";
        for(int i = 0; i < 15; i++){
        cout << "Enter the name of a student: ";
        cin >> student[i].name;
        }
        for(int i = 0;i < 15;i++){
            cout << "Enter Grades"<<endl;
            cout << "Midterm 1: ";
            cin >> student[i].grades.midterm1;
            cout << "Midterm 2: ";
            cin >> student[i].grades.midterm2;
            cout << "Assinments Average:";
            cin >> student[i].grades.avgAssignments;
            cout << "Final Exam: ";
            cin >> student[i].grades.final_exam;
        }
        cout << "Add another student? (y/n): ";
        cin >> choice;
        if (choice == 'n') break;
       
    }
}

double averageGrade(Student s){
    double sum = s.grades.midterm1 + s.grades.midterm2 
               + s.grades.avgAssignments + s.grades.final_exam;
    return (sum / 4) * 100;
}