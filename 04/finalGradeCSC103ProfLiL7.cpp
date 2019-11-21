#include <iostream> 
using std::cin;
using std::cout;

// calculates the final grade for CSC103
// NOTE: Need to double check if the letter assignment is the same as in CSC103

double findFinalScore(double, double, double, double);
void findFinalGrade(double);


int main(){
	double quiz, HW, midterm, finalExam;

	cout << "Please eneter your grade from the quizzes: \n";
	cin >> quiz;
	cout << "Please eneter your grade from the homework assignments: \n";
	cin >> HW;
	cout << "Please eneter your grade from the midterm: \n";
	cin >> midterm;
	cout << "Please eneter your grade from the final exam: \n";
	cin >> finalExam;

	double finalScore = findFinalScore(quiz, HW, midterm, finalExam);
	cout << "Your final score is: " << finalScore << "\n";
	findFinalGrade(finalScore);
	return 0;
}


double findFinalScore(double quiz, double HW, double midterm, double finalExam){
	double finalScore1, finalScore2;

	finalScore1 = 0.1*quiz + 0.1 * HW + 0.35 * midterm + 0.45 * finalExam;
	finalScore2 = 0.15 * quiz + 0.1 * HW + 0.75 * finalExam;

	return (finalScore1 >= finalScore2 ? finalScore1 : finalScore2);
}


void findFinalGrade (double finalScore){


	if (finalScore>=90){
		cout << "You have an A. \n";
	}else if (finalScore >=80){
		cout << "You have a B. \n";
	}else if (finalScore >=65){
		cout << "You have a C. \n";
	}else if (finalScore >= 50){
		cout << "You have a D. \n";
	}else{
		cout << "You have an F.\n";
	}
	return;
}

