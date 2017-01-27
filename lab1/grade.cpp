#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double hwGrade1,hwGrade2,hwGrade3,examGrade1,examGrade2,examGrade3,finalExam,finalProject,finalGrade;
	cout << "Homework Grade 1: ";
	cin >> hwGrade1;
	cout << "Homework Grade 2: ";
	cin >> hwGrade2;
	cout << "Homework Grade 3: ";
	cin >> hwGrade3;
	cout << "Exam Grade 1: ";
	cin >> examGrade1;
	cout << "Exam Grade 2: ";
	cin >> examGrade2;
	cout << "Exam Grade 3: ";
	cin >> examGrade3;
	cout << "Final Exam: ";
	cin >> finalExam;
	cout << "Final Project: ";
	cin >> finalProject;
	finalGrade = ((hwGrade1 + hwGrade2 + hwGrade3)/3)*.25 + examGrade1*.1 + examGrade2*.1 + examGrade3*.1 + finalExam*.25 + finalProject*.2;
	cout << "Final Grade: ";
	cout << finalGrade << endl;
	return 0;
}