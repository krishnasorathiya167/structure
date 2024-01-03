#include<stdio.h>

	struct student{
		int id;
		char name[100];
		int age;
		char cource[100];
		char city[100];
		int std;
		char school[100];
	};
	
main()
{
	int n;
	printf("Enter Student count = ");
	scanf("%d",&n);
	
	struct student s[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter Student Id = ");
		scanf("%d",&s[i].id);
		printf("Enter Student Name = ");
		scanf("%s",&s[i].name);
		printf("Enter Student Age = ");
		scanf("%d",&s[i].age);
		printf("Enter Student Course = ");
		scanf("%s",&s[i].cource);
		printf("Enter Student City = ");
		scanf("%s",&s[i].city);
		printf("Enter Student STD = ");
		scanf("%d",&s[i].std);
		printf("Enter Student School = ");
		scanf("%s",&s[i].school);
	}
	printf("\n-----------students details--------------\n");
	for(i=0;i<n;i++)
	{
		printf("Student ID = %d\n",s[i].id);
		printf("Student Name = %s\n",s[i].name);
		printf("Student Age = %d\n",s[i].age);
		printf("Student Course = %s\n",s[i].cource);
		printf("Student Course = %s\n",s[i].city);
		printf("Student STD = %d\n",s[i].std);
		printf("Student School = %s\n\n",s[i].school);
	}
}