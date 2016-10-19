#include "stdio.h"

int userMenu(int *userSelection, int precision, unsigned char *bArray);

int settings(int);

void enterValue(char bArray[], int);

int main(int argc, const char* argv[])
{
	int userSelection = 0;
	int precision = 5;

	unsigned char bArray[200] = { 0 };

	enterValue(&bArray, precision);
	userSelection = userMenu(&userSelection, precision, &bArray);
	

	switch (userSelection) {
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

	//printf("%d\n", currentValue);

	return 0;
}

int userMenu(int *userSelection, int precision, unsigned char *bArray)
{
	printf("Current Value: ");

	for (int i = 0; i < precision; i++) {
		printf("%d", bArray[i]);
	}

	printf("\n1. Add\n");
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

void enterValue(unsigned char *bArray, int precision)
{
	//Prompt user to enter a value.
	printf("Enter a value: \n");

	//Read into the byte array their input.
	for (int i = 0; i < precision; i++)
	{
		bArray[i] = getchar() - '0';
		//bArray[i] = bArray[i] - '0';
	}

	//Insure that all other indexes of the array are 0.
	for (int i = precision; i < 200; i++) {
		bArray[i] = 0;
	}
}
