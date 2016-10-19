#include "stdio.h"

int userMenu(int userSelection, int*);

int settings(int);

int main(int argc, const char* argv[])
{
	int userSelection = 0;
	int currentValue = 0;
	int precision = 1;

	unsigned char bArray[255] = { 0 };

	userSelection = userMenu(userSelection, &currentValue, &bArray);

	switch (userSelection){
	case 1:
		//asm func add
		break;
	case 2:
		//asm func sub
		break;
	case 3:
		//asm func mul
		break;
	case 4:
		//asm func div
		break;
	case 5:
		precision = settings(precision);
		break;
	case 6: 
		exit(1);
		break;
	}

	for (int i = 0; i < 255; i++) {
		printf("%d, ", bArray[i]);
	}

	printf("%d\n", currentValue);

	return 0;
}

int userMenu(int userSelection, int *currentValue, unsigned char *bArray)
{
	printf("Enter a value: \n");
	scanf("%d", bArray);


	printf("1. Add\n");
	printf("2. Sub\n");
	printf("3. Mul\n");
	printf("4. Div\n");
	printf("5. Settings\n");
	printf("6. Exit\n"); 
	scanf("%d", &userSelection);
	return userSelection;
}

int settings(int precision)
{
	printf("Enter precision: \n");
	scanf("%d", &precision);
	return precision;
}