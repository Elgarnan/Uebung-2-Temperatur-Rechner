#include <stdio.h>

int main() {

    // inputs: temperature and its unit
    int unitIn;
	double tempIn;
	// output: converted temperature
	int unitOut;
	double tempOut;

    int legit = 0;

	// print banner
	printf("\n");
	printf("Programm zur Umrechnung von Temperaturen\n");
	printf("----------------------------------------\n");

	// repeat until user wants to end
	do {

	    // step 1: read input unit
        printf("\nAus welchem Einheitensystem soll umgerechnet werden?\n");
        printf("1: grad C     2: grad F     3: K     4: R     0: Programmende\n");
        printf("Ihre Wahl:\n");
        scanf("%d", &unitIn);

        // Aufgabe 3
        if (unitIn == 0) {
            printf("Das Programm wird beendet.");
            break;
        }
        // Aufgabe 4
        else if (unitIn < 0 || unitIn > 4) {
            printf("Ungueltige Eingabe. Bitte geben Sie eine andere Einheit an.\n");
            continue;
        }


        do {
            // step 2: read input temperature
            printf("\nBitte geben Sie die umzurechnende Temperatur an:\n");
            scanf("%lf", &tempIn);

            // Aufgabe 7
            if (unitIn == 1 && tempIn < -273.15) {
                printf("Das Programm unterstuetzt nur Eingaben ueber dem absoluten Nullpunkt 0 Grad Kelvin.\n");
                printf("Fuer C ist das -273.15. Bitte geben Sie eine andere Eingabe ein.\n");
                legit = 0;
                continue;
            }
            else if (unitIn == 2 && tempIn < -459.67) {
                printf("Das Programm unterstuetzt nur Eingaben ueber dem absoluten Nullpunkt 0 Grad Kelvin.\n");
                printf("Fuer F ist das -459.67. Bitte geben Sie eine andere Eingabe ein.\n");
                legit = 0;
                continue;
            }
            else if (unitIn == 3 && tempIn < 0) {
                printf("Das Programm unterstuetzt nur Eingaben ueber dem absoluten Nullpunkt 0 Grad Kelvin.\n");
                printf("Fuer K ist das 0. Bitte geben Sie eine andere Eingabe ein.\n");
                legit = 0;
                continue;
            }
            else if (unitIn == 4 && tempIn < -135.90) {
                printf("Das Programm unterstuetzt nur Eingaben ueber dem absoluten Nullpunkt 0 Grad Kelvin.\n");
                printf("Fuer R ist das -135.90. Bitte geben Sie eine andere Eingabe ein.\n");
                legit = 0;
                continue;
            }
            else if (tempIn > 1000) {
                printf("Das Programm unterstuetzt nur Temperaturen bis 1000.\n");
                printf("Bitte geben Sie eine andere Eingabe ein.\n");
                legit = 0;
            }
            else
                legit = 1;

        } while (legit == 0);


        // step 3: read output unit
        //Aufgabe 4
        do {
            printf("\nIn welches Einheitensystem soll umgerechnet werden?\n");
            printf("1: grad C     2: grad F     3: K     4: R\n");
            printf("Ihre Wahl:\n");
            scanf("%d", &unitOut);

            if (unitOut <= 0 || unitOut > 4) {
                printf("Ungueltige Eingabe. Bitte geben Sie eine andere Einheit an.\n");
                continue;
            }

        } while (unitOut <= 0 || unitOut > 4);


		// step 4: first convert the input value to (deg Celsius)
		double tempCelsius;
		switch (unitIn) {
            case 1: tempCelsius = tempIn;
                printf("\n%.2lf grad C = ", tempIn);
                break;
            case 2: tempCelsius = (tempIn - 32) * 5 / 9;
                printf("\n%.2lf grad F = ", tempIn);
                break;
            case 3: tempCelsius = tempIn - 273.15;
                printf("\n%.2lf K = ", tempIn);
                break;
            case 4: tempCelsius = (tempIn - 7.5) * 1.9047619;
                printf("\n%.2lf R = ", tempIn);
                break;
            default:
                printf("\nKeine Ausgangseinheit ausgewaehlt.\n");
		}

		// step 5: now convert the intermediate value to the target value
		switch (unitOut) {
            case 1: tempOut = tempCelsius;
                printf("%.2lf grad C\n", tempOut);
                break;
            case 2: tempOut = tempCelsius * 9 / 5 + 32;
                printf("%.2lf grad F\n", tempOut);
                break;
            case 3: tempOut = tempCelsius + 273.15;
                printf("%.2lf K\n", tempOut);
                break;
            case 4: tempOut = tempCelsius / 1.9047619 + 7.5;
                printf("%.2lf R\n", tempOut);
                break;
            default:
                printf("\nKeine Zieleinheit ausgewaehlt.\n");
		}

		// step 6: print graphical result
        // Aufgabe 6
        printf("= %.2lf C\n", tempCelsius);
		printf("==================================================\n");
        for (int i = 0; i < tempCelsius / 2.0; i++) {
            printf("*");
        }
		printf("\n==================================================\n");
        printf("0 grad C                                 100 grad C\n");
        printf("Siedepunkt von Wasser       Schmelzpunkt von Wasser\n");
        printf("\n");

        
	} while (unitIn != 0);
}
