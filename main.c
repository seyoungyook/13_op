#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	int ID;
	char name[10];
	double grade;
};
void main(void) {
	
	struct student s = {19, "seyoung", 4.3
	};
	s.ID=1914602;
	strcpy(s.name, "seyoung");
	s.grade = 4.2;
	
	printf("ID : %d\n", s.ID);
	printf("name : %s\n", s.name);
	printf("grade : %f\n", s.grade);
}
