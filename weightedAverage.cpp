//This code should calculate points awarded for homework,lab and exams plus the weighted average based off of user input

#include <iostream>

using namespace std;

int main () {

   //variable declarations
   int hwGrade1, hwGrade2, hwGrade3, labGrade1, labGrade2, examGrade;
   float finalHW, finalLab, finalExam, finalGrade;
   const float hwPercent = 0.50, labPercent = 0.2, examPercent = 0.3;

   //inputs and variable storage
   cout << "Enter your first homework grade:   ";
   cin >> hwGrade1;
   cout << "Enter your second homework grade:   ";
   cin >> hwGrade2;
   cout << "Enter your third homework grade:   ";
   cin >> hwGrade3;
   cout << "Enter your first lab grade:   ";
   cin >> labGrade1;
   cout << "Enter your second lab grade:   ";
   cin >> labGrade2;
   cout << "Enter your exam grade:   ";
   cin >> examGrade;

   //calculations for total points for Homework, Labs, and Exam(s) plus the total average
   finalHW = ((hwGrade1 + hwGrade2 +hwGrade3)/3)*hwPercent;
   finalLab = ((labGrade1 + labGrade2)/2) * labPercent;
   finalExam = examGrade * examPercent;
   finalGrade = finalHW + finalLab + finalExam;

   //Outputs for the total points for Homework, Labs, and Exams plus the total average
   cout << "Points awarded for Homework: " << finalHW << "0" << endl;
   cout << "Points awarded for Lab(s): " << finalLab << "0" << endl;
   cout << "Points awarded for Exam(s): " << finalExam << "0" << endl;
   cout << "Your Final Grade is: " << finalGrade << "0";

   return 0;

}