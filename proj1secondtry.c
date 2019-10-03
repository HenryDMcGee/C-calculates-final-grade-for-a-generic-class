/*Henry McGee
CPSC 1011 Section 3
2/10/2017
Project 1: Course Grade Calculator
Brief DESCRIPTION

/*algorith: 
Numeric Course
 Grade=Final Exam Weight*(Final Exam Points Earned/ Final Exam Total Points), Numeric Course Grade+= Exam 1 Weight*(Exam 2 Points Earned/ Exam 2 Total Points) 
 Numeric Course Grade+= Exam 2 Weight*(Exam 2 POints Earned/Exam 2 total points)
 ETC*/ 

#include <stdio.h>
int main ()
{
double Exam1=0, Exam1PointsEarned=0, Exam1PointsPossible=0, Exam1Weight=0;
double Exam2=0, Exam2PointsEarned=0, Exam2PointsPossible=0, Exam2Weight=0;
double Quiz=0, QuizPointsEarned=0, QuizPointsPossible=0, QuizWeight=0; 
double Project=0, ProjectPointsEarned=0, ProjectPointsPossible=0, ProjectWeight=0;
double Lab=0, LabPointsEarned=0, LabPointsPossible=0, LabWeight=0;
double FinalExam=0, FinalExamPointsEarned=0, FinalExamPointsPossible=0, FinalExamWeight=0;
double NumericCourseGrade=0;

		//Final Exam
		
	//Final Exam Weight input
	printf("What was your Final Exam weight?\n");
	scanf("%lf",&FinalExamWeight);
	
	//Final Exam Points Earned input
	printf("What was your Final Exam score?\n");
	scanf("%lf",&FinalExamPointsEarned);

	//Final Exam Total Points input
	printf("How many points was the Final Exam worth?\n");
	scanf("%lf",&FinalExamPointsPossible);
	
	//Algorithm
	FinalExam=FinalExamWeight*(FinalExamPointsEarned/FinalExamPointsPossible);
		//First Exam

	//First Exam Weight input
	printf("What was the Exam 1 weight?\n");
	scanf("%lf",&Exam1Weight);
	
	//First Exam Points Earned input
	printf("What was your score on Exam 1?\n");
	scanf("%lf",&Exam1PointsEarned);

	//First Exam Total Points input
	printf("How many points was Exam 1 worth?\n");
	scanf("%lf",&Exam1PointsPossible);

	//Algorithm
	Exam1= Exam1Weight*(Exam1PointsEarned/Exam1PointsPossible);


			//Second Exam
	//Second Exam Weight input
	printf("What was the Exam 2 weight?\n");
	scanf("%lf",&Exam2Weight);

	//Second Exam Points Earned input
	printf("What was your Exam 2 score?\n");
	scanf("%lf",&Exam2PointsEarned);
	
	//Second Exam Total Points input
	printf("How many points was Exam 2 worth?\n");
	scanf("%lf",&Exam2PointsPossible);

	//Algorithm
	Exam2= Exam2Weight*(Exam2PointsEarned/Exam2PointsPossible);	


			//Quiz
	//Quiz Weight input
	printf("What was the Quiz weight?\n");
	scanf("%lf",&QuizWeight);

	//Quiz Points Earned input
	printf("What was your Quiz score?\n");
	scanf("%lf",&QuizPointsEarned);

	//Quiz Total Points input
	printf("How many points was the Quiz worth?\n");
	scanf("%lf",&QuizPointsPossible);

	//Algorithm
	Quiz= QuizWeight*(QuizPointsEarned/QuizPointsPossible);

			//Project
	//Project Weight input
	printf("What was the Project weight?\n");
	scanf("%lf",&ProjectWeight);

	//Project Points Earned input
	printf("What was your Project score?\n");
	scanf("%lf",&ProjectPointsEarned);

	//Project Total Points input
	printf("How many points was the Project worth?\n");
	scanf("%lf",&ProjectPointsPossible);

	//Algorithm
	Project= ProjectWeight*(ProjectPointsEarned/ProjectPointsPossible);

			//Lab
	//Lab Weight input
	printf("What was the Lab weight?\n");
	scanf("%lf",&LabWeight);

	//Lab Points Earned input
	printf("What was your Lab score?\n");
	scanf("%lf",&LabPointsEarned);

	//lab Total Points input
	printf("How many points was the Lab worth?\n");
	scanf("%lf",&LabPointsPossible);

	//Algorithm
	Lab= LabWeight*(LabPointsEarned/LabPointsPossible);

	//Final Algorithm
	NumericCourseGrade=100*(FinalExam+Exam1+Exam2+Quiz+Project+Lab);
	printf("Your Numeric Course Grade is %lf.\n",NumericCourseGrade);




	return 0;
}
