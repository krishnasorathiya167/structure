#include<stdio.h>

	struct employee{
		int id;
		char name[100];
		int age;
		char role[100];
		char city[100];
		int experience;
		char company[100];
	};
	
main()
{
	int n;
	printf("Enter Employee count = ");
	scanf("%d",&n);
	
	struct employee s[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter Employee Id = ");
		scanf("%d",&s[i].id);
		printf("Enter Employee Name = ");
		scanf("%s",&s[i].name);
		printf("Enter Employee Age = ");
		scanf("%d",&s[i].age);
		printf("Enter Employee Role = ");
		scanf("%s",&s[i].role);
		printf("Enter Employee City = ");
		scanf("%s",&s[i].city);
		printf("Enter Employee Experience = ");
		scanf("%d",&s[i].experience);
		printf("Enter Employee Company Name = ");
		scanf("%s",&s[i].company);
	}
	printf("\n-----------Employee details--------------\n");
	for(i=0;i<n;i++)
	{
		printf("Employee ID = %d\n",s[i].id);
		printf("Employee Name = %s\n",s[i].name);
		printf("Employee Age = %d\n",s[i].age);
		printf("Employee Role = %s\n",s[i].role);
		printf("Employee City = %s\n",s[i].city);
		printf("Employee Experience = %d\n",s[i].experience);
		printf("Employee Company Name = %s\n\n",s[i].company);
	}
}