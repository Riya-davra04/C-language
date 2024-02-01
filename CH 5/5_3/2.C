#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();

	printf("Telecom call service conversation\n");
	printf("Press 1 for English\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for Gujarati\n");

	printf("Enter your choice");
	scanf("%d",&n);

	switch(n){
		case 1:

			printf("for English\n");

				printf("Press 1 for Intrnet Recharge\n");
				printf("Press 2 for Top-up Recharge\n");
				printf("Press 3 for Special Recharge\n");

				printf("Enter your choice");
				scanf("%d",&n);

					switch(n){
						case 1:

						printf("You have successfully done Intrnet Recharge");
						break;
						case 2:

						printf("You have successfully done Top-up Recharge");
						break;
						case 3:

						printf("You have successfully done Special Recharge\n");
						break;
					}
		break;
		case 2:

			printf("for Hindi\n");

				printf("Intrnet Recharge ke liye 1 dabaiye\n");
				printf("Top-up Recharge ke liye 2 dabaiye\n");
				printf("Special Recharge ke liye 3 dabaiye\n");

				printf("Enter your choice");
				scanf("%d",&n);

					switch(n){
						case 1:

						printf("Aapne safaltapurvak Intrnet Recharge kar liya he");
						break;
						case 2:

						printf("Aapne safaltapurvak Top-up Recharge  kar liya he");
						break;
						case 3:

						printf("Aapne safaltapurvak Special Recharge  kar liya he\n");
						break;
						}
		break;

		case 3:

			printf("for Gujarati\n");

				printf("Intrnet Recharge mate 1 dabavo\n");
				printf("Top-up Recharge mate 1 dabavo\n");
				printf("Special Recharge mate 1 dabavo\n");

				printf("Enter your choice");
				scanf("%d",&n);

					switch(n){
						case 1:

						printf("Tame safaltapurvak Intrnet Recharge karyu che");
						break;
						case 2:

						printf("Tame safaltapurvak Top-up Recharge karyu che");
						break;

						case 3:

						printf("Tame safaltapurvak Special Recharge karyu che\n");
						break;
						}
		   break;2
		   default:
				printf("Invalid choice....");
		}
	getch();
}