#include <stdio.h>


int main() {
	const double GRAMS_IN_LBS = 453.5924;
	char  CoffeeType2, CoffeeType3, CoffeeType, UserCoffee;
	char Cream, Cream2, Cream3, UserCream;
	int Weight, Weight2, Weight3, ServingAmount;


	printf("Take a Break - Coffee Shop\n");
	printf("==========================\n\n");
	printf("Enter the coffee product information being sold today...\n\n");
	printf("COFFEE-1...\n");
	printf("Type ([L]ight,[M]edium,[R]ich): ");
	scanf(" %c", &CoffeeType);
	printf("Bag weight (g): ");
	scanf("%d", &Weight);
	printf("Best served with cream ([Y]es,[N]o): ");
	scanf(" %c", &Cream);

	
	printf("\n\nCOFFEE-2...\n");
	printf("Type ([L]ight,[M]edium,[R]ich): ");
	scanf(" %c", &CoffeeType2);
	printf("Bag weight (g): ");
	scanf("%d", &Weight2);
	printf("Best served with cream ([Y]es,[N]o): ");
	scanf(" %c", &Cream2);

	printf("\n\nCOFFEE-3...\n");
	printf("Type ([L]ight,[M]edium,[R]ich): ");
	scanf(" %c", &CoffeeType3);
	printf("Bag weight (g): ");
	scanf("%d", &Weight3);
	printf("Best served with cream ([Y]es,[N]o): ");
	scanf(" %c", &Cream3);
	printf("\n---+------------------------+---------------+-------+");
	printf("\n   | Coffee                 | Packaged      | Best  |");
	printf("\n   | Type                   | Bag Weight    | Served|");
	printf("\n   +------------------------+---------------+ With  |");
	printf("\nID | Light | Medium | Rich  |  (G) | Lbs    | Cream |");
	printf("\n---+------------------------+---------------+-------|");
	printf("\n 1 |   %d   | ", (CoffeeType == 'l') || CoffeeType == 'L');
	printf("  %d    | ", (CoffeeType == 'm') || CoffeeType == 'M');
	printf("  %d   |", (CoffeeType == 'r') || CoffeeType == 'R');
	printf(" %4d | ", Weight);
	printf("%6.3lf | ", Weight / GRAMS_IN_LBS);
	printf("  %d   | ", (Cream == 'Y') || Cream == 'y');

	printf("\n 2 |   %d   | ", (CoffeeType2 == 'l') || CoffeeType2 == 'L');
	printf("  %d    | ", (CoffeeType2 == 'm') || CoffeeType2 == 'M');
	printf("  %d   |", (CoffeeType2 == 'r') || CoffeeType2 == 'R');
	printf(" %4d | ", Weight2);
	printf("%6.3lf | ", Weight2 / GRAMS_IN_LBS);
	printf("  %d   | ", (Cream2 == 'Y') || Cream2 == 'y');

	printf("\n 3 |   %d   | ", (CoffeeType3 == 'l') || CoffeeType3 == 'L');
	printf("  %d    | ", (CoffeeType3 == 'm') || CoffeeType3 == 'M');
	printf("  %d   |", (CoffeeType3 == 'r') || CoffeeType3 == 'R');
	printf(" %4d | ", Weight3);
	printf("%6.3lf | ", Weight3 / GRAMS_IN_LBS);
	printf("  %d   | ", (Cream3 == 'Y') || Cream3 == 'y');

	printf("\n\nEnter how you like your coffee...\n");
	printf("\nCoffee strength ([L]ight, [M]edium, [R]ich): ");
	scanf(" %c", &UserCoffee);
	printf("Do you like your coffee with cream ([Y]es,[N]o): ");
		scanf(" %c", &UserCream);
		printf("Typical number of daily servings: ");
		scanf(" %d", &ServingAmount);
		
		printf("\n\nThe below table shows how your preferences align to the available products:\n\n");
		printf("--------------------+-------------+-------+\n");
		printf("  |     Coffee      |  Packaged   | With  |\n");
		printf("ID|      Type       | Bag Weight  | Cream |\n");
		printf("--+-----------------+-------------+-------+\n");
		printf(" 1|       %d         |", 
			CoffeeType == 'l' && ((UserCoffee == 'l') || (UserCoffee == 'L')) ||
			(CoffeeType == 'L') && ((UserCoffee == 'l') || (UserCoffee == 'L')) ||
			(CoffeeType == 'm') && ((UserCoffee == 'm') || (UserCoffee == 'M')) ||
			(CoffeeType == 'M') && ((UserCoffee == 'm') || (UserCoffee == 'M')) ||
			(CoffeeType == 'r') && ((UserCoffee == 'R') || (UserCoffee == 'r')) ||
			(CoffeeType == 'R') && (UserCoffee == 'r') || (UserCoffee == 'R')) ||
			(CoffeeType == 'R') && ((UserCoffee == 'r') || (UserCoffee == 'R'));
		printf("      %d      |", (Weight == 250) && (ServingAmount > 1) && (ServingAmount <= 4));
		printf("   %d   |", ((ServingAmount > 1) && (ServingAmount <= 4)) && ((Cream == 'Y' && ((UserCream == 'Y') || (UserCream == 'y'))) ||
			((Cream == 'y') && ((UserCream == 'y') || (UserCream == 'Y')))));
		
		printf("\n 2|       %d         |",
			CoffeeType2 == 'l' && ((UserCoffee == 'l') || (UserCoffee == 'L')) ||
			(CoffeeType2 == 'L') && ((UserCoffee == 'l') || (UserCoffee == 'L')) ||
			(CoffeeType2 == 'm') && ((UserCoffee == 'm') || (UserCoffee == 'M')) ||
			(CoffeeType2 == 'M') && ((UserCoffee == 'm') || (UserCoffee == 'M')) ||
			(CoffeeType2 == 'r') && ((UserCoffee == 'R') || (UserCoffee == 'r')) ||
			(CoffeeType2 == 'R') && (UserCoffee == 'r') || (UserCoffee == 'R')) ||
			(CoffeeType2 == 'R') && ((UserCoffee == 'r') || (UserCoffee == 'R'));
		printf("      %d      |", (Weight2 == 500) && (ServingAmount >= 5) && (ServingAmount <= 9));
		printf("   %d   |", (UserCoffee == 'R' || UserCoffee == 'r') && (((Cream2 == 'Y') && ((UserCream == 'Y') || (UserCream == 'y'))) ||
			(Cream2 == 'y') && ((UserCream == 'y') || (UserCream == 'Y'))));


		printf("\n 3|       %d         |",
			CoffeeType3 == 'l' && ((UserCoffee == 'l') || (UserCoffee == 'L')) ||
			(CoffeeType3 == 'L') && ((UserCoffee == 'l') || (UserCoffee == 'L')) ||
			(CoffeeType3 == 'm') && ((UserCoffee == 'm') || (UserCoffee == 'M')) ||
			(CoffeeType3 == 'M') && ((UserCoffee == 'm') || (UserCoffee == 'M')) ||
			(CoffeeType3 == 'r') && ((UserCoffee == 'R') || (UserCoffee == 'r')) ||
			(CoffeeType3 == 'R') && (UserCoffee == 'r') || (UserCoffee == 'R')) ||
			(CoffeeType3 == 'R') && ((UserCoffee == 'r') || (UserCoffee == 'R'));
		printf("      %d      |", (Weight3 == 1000) && (ServingAmount >= 10));
		printf("   %d   |", (UserCoffee == 'M' || UserCoffee == 'm') && (((Cream3 == 'Y') && ((UserCream == 'Y') || (UserCream == 'y'))) ||
			(Cream3 == 'y') && ((UserCream == 'y') || (UserCream == 'Y'))));


		// second chart

		printf("\n\nEnter how you like your coffee...\n");
		printf("\nCoffee strength ([L]ight, [M]edium, [R]ich): ");
		scanf(" %c", &UserCoffee);
		printf("Do you like your coffee with cream ([Y]es,[N]o): ");
		scanf(" %c", &UserCream);
		printf("Typical number of daily servings: ");
		scanf(" %d", &ServingAmount);

		printf("\n\nThe below table shows how your preferences align to the available products:\n\n");
		printf("--------------------+-------------+-------+\n");
		printf("  |     Coffee      |  Packaged   | With  |\n");
		printf("ID|      Type       | Bag Weight  | Cream |\n");
		printf("--+-----------------+-------------+-------+\n");
		printf(" 1|       %d         |", 
			CoffeeType == 'l' && (UserCoffee == 'l') || (UserCoffee == 'L') ||
			(CoffeeType == 'L') && ((UserCoffee == 'l') || (UserCoffee == 'L')) ||
			(CoffeeType == 'm') && ((UserCoffee == 'm') || (UserCoffee == 'M')) ||
			(CoffeeType == 'M') && ((UserCoffee == 'm') || (UserCoffee == 'M')) ||
			(CoffeeType == 'r') && ((UserCoffee == 'R') || (UserCoffee == 'r')) ||
			(CoffeeType == 'R') && (UserCoffee == 'r') || (UserCoffee == 'R')) ||
			(CoffeeType == 'R') && ((UserCoffee == 'r') || (UserCoffee == 'R'));
		printf("      %d      |", (Weight == 250) && (ServingAmount > 1) && (ServingAmount <= 4));
		printf("   %d   |", ((Cream == 'Y') && ((UserCream == 'Y') || (UserCream == 'y'))) ||
			(Cream == 'y') && ((UserCream == 'y') || (UserCream == 'Y')));
		
		printf("\n 2|       %d         |",
			CoffeeType2 == 'l' && (UserCoffee == 'l') || (UserCoffee == 'L') ||
			(CoffeeType2 == 'L') && ((UserCoffee == 'l') || (UserCoffee == 'L')) ||
			(CoffeeType2 == 'm') && ((UserCoffee == 'm') || (UserCoffee == 'M')) ||
			(CoffeeType2 == 'M') && ((UserCoffee == 'm') || (UserCoffee == 'M')) ||
			(CoffeeType2 == 'r') && ((UserCoffee == 'R') || (UserCoffee == 'r')) ||
			(CoffeeType2 == 'R') && (UserCoffee == 'r') || (UserCoffee == 'R')) ||
			(CoffeeType2 == 'R') && ((UserCoffee == 'r') || (UserCoffee == 'R'));
		printf("      %d      |", (Weight2 == 500) && (ServingAmount >= 5) && (ServingAmount <= 9));
		printf("   %d   |", ((Cream2 == 'Y') && ((UserCream == 'Y') || (UserCream == 'y'))) ||
			(Cream2 == 'y') && ((UserCream == 'y') || (UserCream == 'Y')));


		printf("\n 3|       %d         |",
			CoffeeType3 == 'l' && (UserCoffee == 'l') || (UserCoffee == 'L') ||
			(CoffeeType3 == 'L') && ((UserCoffee == 'l') || (UserCoffee == 'L')) ||
			(CoffeeType3 == 'm') && ((UserCoffee == 'm') || (UserCoffee == 'M')) ||
			(CoffeeType3 == 'M') && ((UserCoffee == 'm') || (UserCoffee == 'M')) ||
			(CoffeeType3 == 'r') && ((UserCoffee == 'R') || (UserCoffee == 'r')) ||
			(CoffeeType3 == 'R') && (UserCoffee == 'r') || (UserCoffee == 'R')) ||
			(CoffeeType3 == 'R') && ((UserCoffee == 'r') || (UserCoffee == 'R'));
		printf("      %d      |", (Weight3 == 1000) && (ServingAmount >= 10));
		printf("   %d   |", ((Cream3 == 'Y') && ((UserCream == 'Y') || (UserCream == 'y'))) ||
			(Cream3 == 'y') && ((UserCream == 'y') || (UserCream == 'Y')));

		printf("\n\nHope you found a product that suits your likes!");

	return 0;
}
