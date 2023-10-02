#include <stdio.h>

int main() {

    // inputs: temperature and its unit
    int unitIn;
	double tempIn;
	// output: converted temperature
	int unitOut;
	double tempOut;

	// print banner
	printf("\n");
	printf("Programm zur Umrechnung von Temperaturen\n");
	printf("----------------------------------------\n");

	// repeat until user wants to end
	do {

	    // step 1: read input unit
        scanner1:
        printf("\nAus welchem Einheitensystem soll umgerechnet werden?\n");
        printf("1: grad C     2: grad F     3: K     4: Rø     0: Programmende\n");
        printf("Ihre Wahl: ");
        scanf("%d", &unitIn);
        
        if (unitIn == 0) {
            printf("Abgebrochen.");
            break; // Schleife beenden, wenn "0" eingegeben wird
        }
        else if (unitIn >= 1 && unitIn <= 4) {{
            printf("%d\n",unitIn);
        }
        else {
           printf("\nBitte geben Sie eine gültige Einheit ein.\n");
           goto scanner1;
        }

		// step 2: read input temperature
        tempscan:
        printf("\nBitte geben Sie die umzurechnende Temperatur an: ");
        scanf("%lf", &tempIn);
        if ((unitIn == 3 && tempIn < 0) ){ //hier keine Ahnung was mit den anderen Temperaturen gemacht werden soll
            printf("\nBitte geben Sie eine sinnvolle Temperatur ein.\n");
            goto tempscan;
        }
        else {
            printf("%lf\n",tempIn);
        }

        // step 3: read output unit
        scanner2:
        printf("\nIn welches Einheitensystem soll umgerechnet werden?\n");
        printf("1: grad C     2: grad F     3: K     4: Rø\n");
        printf("Ihre Wahl: ");
        scanf("%d", &unitOut);

        if (unitOut == unitIn){
            printf("\nBitte geben Sie eine andere Einheit als die Eingabeeinheit ein.\n");
            goto scanner2;
        }
        else if (unitOut >= 1 && unitOut <= 4){
            printf("%d\n",unitOut);
        }
        else {
           printf("\nBitte geben Sie eine gültige Einheit ein.\n");
           goto scanner2;
        }

		// step 4: first convert the input value to deg Celsius
		double tempCelsius;
		switch (unitIn) {
            case 1: //c
                tempCelsius = tempIn;
                printf("\n%.2lf grad C = ", tempIn);
                break;
            case 2: // f
                tempCelsius = (tempIn - 32.0)/1.8;
                printf("\n%.2lf grad F = ", tempIn);
                break;
            case 3: // k
                tempCelsius = tempIn - 273.15;
                printf("\n%.2lf K = ", tempIn);
                break;
            case 4: // ro
                tempCelsius = (tempIn - 7.5)*1.9047619;
                printf("\n%.2lf Rø = ", tempIn);
                break;
            default:
                printf("\nKeine Ausgangseinheit ausgewaehlt.\n");
		}

		// step 5: now convert the celsius value to the target value
		switch (unitOut) {
            case 1: // c
                tempOut = tempCelsius;
                printf("%.2lf grad C\n", tempOut);
                break;
            case 2: // f
                tempOut = (tempCelsius * 1.8) + 32.0;
                printf("%.2lf grad F\n", tempOut);
                break;
            case 3: // k
                tempOut = tempCelsius + 273.15;
                printf("%.2lf K\n", tempOut);
                break;
            case 4: // ro
                tempOut = (tempCelsius / 1.9047619) + 7.5;
                printf("%.2lf Rø\n", tempOut);
                break;
            default:
                printf("\nKeine Zieleinheit ausgewaehlt.\n");
		}

		// step 6: print graphical result
		printf("===================================================\n");
        int numStars = tempCelsius / 2; // 1 stern = 2 grad c
        for (int i = 0; i < numStars; i++) {
            printf("*");
        }
        printf("\n");
		printf("===================================================\n");
		printf("0 grad C                                 100 grad C\n");
        printf("\n");
        
	} while (1);
   
}
