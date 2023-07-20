#include <stdio.h>

int main() {
	int ApplesPicked = 0, OrangesPicked = 0, PearsPicked = 0, TomatoesPicked = 0, CabbagesPicked = 0;
	int apples = 0, oranges = 0, pears = 0, tomatoes = 0, cabbages = 0;
	int Turnoff = 1;

	 while (Turnoff != 0) {
		printf("Grocery Shopping");
		printf("\n================");
		printf("\nHow many APPLES do you need? : ");
		scanf("%d", &apples);
		if (apples < 0) {
			while (apples < 0) {
				printf("ERROR: Value must be 0 or more.");
				printf("\nHow many APPLES do you need? : ");
				scanf("%d", &apples);
			}

		}
		printf("\nHow many ORANGES do you need? : ");
		scanf("%d", &oranges);
		if (oranges < 0) {
			while (oranges < 0) {
				printf("ERROR: Value must be 0 or more.");
				printf("\nHow many ORANGES do you need? : ");
				scanf("%d", &oranges);
			}
		}
		printf("\nHow many PEARS do you need? : ");
		scanf("%d", &pears);
		if (pears < 0) {
			while (pears < 0) {
				printf("ERROR: Value must be 0 or more.");
				printf("\nHow many PEARS do you need? : ");
				scanf("%d", &pears);
			}
		}
		printf("\nHow many TOMATOES do you need? : ");
		scanf("%d", &tomatoes);
		if (tomatoes < 0) {
			while (tomatoes < 0) {
				printf("ERROR: Value must be 0 or more.");
				printf("\nHow many TOMATOES do you need? : ");
				scanf("%d", &tomatoes);
			}
		}
		printf("\nHow many CABBAGES do you need? : ");
		scanf("%d", &cabbages);
		if (cabbages < 0) {
			while (cabbages < 0) {
				printf("ERROR: Value must be 0 or more.");
				printf("\nHow many CABBAGES do you need? : ");
				scanf("%d", &cabbages);
			}
		}
		printf("\n--------------------------");
		printf("\nTime to pick the products!");
		printf("\n--------------------------\n"); 


		while (ApplesPicked != apples) { // Apples
		    
			printf("\nPick some APPLES... how many did you pick? : ");
			scanf("%d", &ApplesPicked);
			    
				
			if (apples == ApplesPicked) {
				printf("Great, that's the apples done!\n");
			    
			}
			else if (ApplesPicked < 1) {
				printf("ERROR: You must pick at least 1!");
				

			}
			else if (ApplesPicked > apples) {

				printf("You picked too many... only %d more APPLE(S) are needed.", apples);
				
			}
			else if (ApplesPicked < apples) {
				printf("Looks like we still need some APPLES...");
				apples = apples - ApplesPicked;
				  ApplesPicked = 0;
	
			
			}
			
			
		} 
        
        ApplesPicked = 0;
	
	    while (PearsPicked != pears) { //PEARS
			printf("\nPick some PEARS... how many did you pick? : ");
			scanf("%d", &PearsPicked);

			if (pears == PearsPicked) {
				printf("Great, that's the pears done!\n");
			}

			else if (PearsPicked < 1) {
				printf("ERROR: You must pick at least 1!");




			}
			else if (PearsPicked > pears) {

				printf("You picked too many... only %d more PEAR(S) are needed.", pears);


			}
			else if (PearsPicked < pears) {
				printf("Looks like we still need some PEARS...");
				pears = pears - PearsPicked;
				PearsPicked = 0; // keep an eye incase breaks, delete just incase.

			}
		} 
		
		PearsPicked = 0;
		
		while (CabbagesPicked != cabbages) { // CABBAGES
			printf("\nPick some CABBAGES... how many did you pick? : ");
			scanf("%d", &CabbagesPicked);


			if (cabbages == CabbagesPicked) {
				printf("Great, that's the cabbages done!\n");
			}

			else if (CabbagesPicked < 1) {
				printf("ERROR: You must pick at least 1!");


			}
			else if (CabbagesPicked > cabbages) {

				printf("You picked too many... only %d more CABBAGE(S) are needed.", cabbages);


			}
			else if (CabbagesPicked < cabbages) {
				printf("Looks like we still need some CABBAGES...");
				cabbages = cabbages - CabbagesPicked;
				CabbagesPicked = 0; // keep an eye incase breaks, delete just incase.

			}
		} 
		
		CabbagesPicked = 0;
		
		while (OrangesPicked != oranges) { // ORANGES
			printf("\nPick some ORANGES... how many did you pick? : ");
			scanf("%d", &OrangesPicked);


			if (oranges == OrangesPicked) {
				printf("Great, that's the oranges done!\n");
			}

			else if (OrangesPicked < 1) {
				printf("ERROR: You must pick at least 1!");

			}
			else if (OrangesPicked > oranges) {

				printf("You picked too many... only %d more ORANGE(S) are needed.", oranges);


			}
			else if (OrangesPicked < oranges) {
				printf("Looks like we still need some ORANGES...");
				oranges = oranges - OrangesPicked;
				OrangesPicked = 0; // keep an eye incase breaks, delete just incase.

			}
		}
		
		OrangesPicked = 0;
		
		while (TomatoesPicked != tomatoes) { // TOMATOES
			printf("\nPick some TOMATOES... how many did you pick? : ");
			scanf("%d", &TomatoesPicked);


			if (tomatoes == TomatoesPicked) {
				printf("Great, that's the tomatoes done!\n");
			}

			else if (TomatoesPicked < 1) {
				printf("ERROR: You must pick at least 1!");

			}
			else if (TomatoesPicked > tomatoes) {

				printf("You picked too many... only %d more TOMATO(ES) are needed.", tomatoes);


			}
			else if (TomatoesPicked < tomatoes) {
				printf("Looks like we still need some TOMATOES...");
				tomatoes = tomatoes - TomatoesPicked;
				TomatoesPicked = 0;

			}
		}
		
		TomatoesPicked = 0;
		
		printf("\n\nAll the items are picked!\n\n");
		printf("Do another shopping? (0=NO): ");
		scanf("%d", &Turnoff);
		printf("\n\n");

	}

		return 0;
	
}