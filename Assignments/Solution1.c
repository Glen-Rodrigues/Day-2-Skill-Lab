#include <stdio.h>
#include <string.h>
void qualify(int age, int salary, char pre_condition[])
{
	if (age >= 18 && age <=60 && strcmp(pre_condition, "no") == 0 && salary >= 25000)
		printf ("Eligible for Medical Insurance");
	else
		printf ("Not Eligible for Medical Insurance");
}
int main()
{
	int age, salary;
	char pre_condition[5];
	printf ("Enter Age:");
	scanf ("%d", &age);
	printf ("Any Pre-existing Condition? (yes/no):");
	scanf ("%s", pre_condition);
	printf ("Enter Monthly Salary:");
	scanf ("%d", &salary);
	qualify (age, salary, pre_condition);
	return 0;
}
