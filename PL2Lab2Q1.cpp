#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//This array includes all of the students grade and it determines 
//if they failed or not.
void calculate(int A,int stu_count){
     int array[100];	
     int i,cnt = 0;	
	 int grade,sum = 0;
	 
	for(i=0;i<stu_count;i++){
		printf("Enter %d. students grade: \n",i+1); scanf("%d",&grade);
		sum += grade;
		if(grade < A)
		cnt++;
	}
	
	printf("The count of failed students is:%d \n",cnt);
	printf("The average of the students by looking their marks is:%d",(sum/stu_count));
}

int main(){
	int average,student_count;
	printf("Enter the average:\n"); scanf("%d",&average);
	printf("Enter the student count: \n"); scanf("%d",&student_count);
	
	calculate(average,student_count);
	getch();
	return 0;
}
