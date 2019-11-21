#include <iostream>
using std::cin;
using std::cout;


/*Enter score between 0 and 100.
 * Program will print out your grade.
 * 	A: 90-100
 * 	B: 80-90
 * 	C: 65-80
 * 	D: 50-65 */

int main(){

	double score;
	char  again;


	do{
		cout<< "Please enter your score.\n";
		cin>>score;


		if(score>100 || score<0){
			cout<< "Invalid input.\n";
			cout<< "Please try again.\n";
		}else if(score>=90){
			cout<< "Your grade is A.\n";
		}else if(score>=80){
			cout<< "Your grade is B.\n";
		}else if(score>=65){
			cout<<"Your grade is C.\n";
		}else if(score>=50){
			cout<<"Your grade is D.\n";
		}else{
			cout<<"You failed the course.\n";
		}

		cout<<"Would you like to continue? (y/n) \n";
		cin>> again;

		}while(again == 'y' || again == 'Y');

	return 0;
}

