/* 

Units converted are : 

1) KiloGram
2) Gram
3) Meters
4) Miles
5) KiloMeters
6) Square Meter
7) Cubic Meter
8) Pascal
9) Atmospheric Pressure
10) Watt
11) KiloWatt
12) Inches
13) Centimeter
14) Feet
15) Bar
16) HorsePower
17) PSI
18) Torr / MM_Hg

*/


/* 

Formulas Used : 

1) Distance :- 

Kilometer to Meter : (Km * 1000);
KiloMeter to Miles : (Km / 1.60934);

Meter to KiloMeter : (Meter/1000);
Meter to Miles : (Meter / 1609.34);

Miles to Meter : (Miles * 1609.34);
Miles to KiloMeter : (Miles * 1.60934);

2) Weight :-

Gram to KiloGram : (G * 1000);
KiloGram to Gram : (Kg/1000);

3) Height :-

Centimeter to Inches : (Cm / 2.54);
Centimeter to Feet : (Cm / 30.48);

Inches to Centimeter : (inches * 2.54);
Inches to Feet : (inches / 12);

Feet to Centimeter : (Feet * 30.48);
Feet to Inches : (Feet * 12);

4) Area :-

Meter to Square Meter : (Meter * Meter);
Meter to Cube Meter : (Meter * Meter * Meter);

7) Pressure :- 

Pascal to ATM : (Pascal / 101325);
Pascal to Bar : (Pascal / 100000);
Pascal to PSI : (Pascal / 6894.76);
Pascal to Torr : (Pascal /  133.322);

ATM to Pascal : (ATM * 101325);
ATM to Bar : (ATM * 1.01325);
ATM to PSI : (ATM * 14.696);
ATM to Torr : (ATM * 760);

Bar to Pascal : (Bar * 100000);
Bar to ATM : (Bar / 1.01325);
Bar to PSI : (bar * 14.5038);
Bar to Torr : (Bar / 0.00133322);

PSI to Pacal : (PSI * 6894.76);
PSI to ATM :  (PSI / 14.696);
PSI to Bar : (PSI / 14.5038);
PSI to Torr : (PSI / 0.0193368);

Torr to Pascal : (Torr_or_mm_Hg * 133.322);
Torr to Bar : (Torr_or_mm_Hg * 0.00133322);
Torr to ATM : (Torr_or_mm_Hg * 0.00131579);
Torr to PSI : (Torr_or_mm_Hg * 0.0193368);

8) Power :-

Watt to KiloWatt : (Watt / 1000);
Watt to Horsepower : (Watt / 745.7);

KiloWatt to Watt : (KWatt * 1000);
Kilo Watt to Horsepower : 

Horsepower to Watt : (HP * 745.7);
Horsepower to KiloWatt : (HP * 0.7457);

*/

/*

printf("\n\n==> Select the conversion type:\n");
printf("1) Weight\n");
printf("2) Height\n");
printf("3) Distance\n");
printf("4) Square Meter\n");
printf("5) Cubic Meter\n");
printf("6) Pressure\n");
printf("7) Power\n");
printf("\n\n==========> Enter your choice: ");
scanf("%d", &conversion_type);

*/



/*

printf("\n\n==> Select the source unit:\n");
printf("1) Grams\n");
printf("2) Kilograms\n");
printf("3) Centimeters\n");
printf("4) Meters\n");
printf("5) Miles\n");
printf("6) Inches\n");
printf("7) Feet\n");
printf("8) Square Meters\n");
printf("9) Cubic Meters\n");
printf("10) Pascal\n");
printf("11) ATM\n");
printf("12) Bar\n");
printf("13) PSI\n");
printf("14) Torr / MM_Hg\n");
printf("15) Watt\n");
printf("16) Kilowatt\n");
printf("17) KiloMeter\n");
printf("18) HorsePower\n");
printf("\n\n==========> Enter your choice: ");
scanf("%d", &source_unit);

*/



/*

printf("\n\n==> Select the target unit:\n");
printf("1) Grams\n");
printf("2) Kilograms\n");
printf("3) Centimeters\n");
printf("4) Meters\n");
printf("5) Miles\n");
printf("6) Inches\n");
printf("7) Feet\n");
printf("8) Square Meters\n");
printf("9) Cubic Meters\n");
printf("10) Pascal\n");
printf("11) ATM\n");
printf("12) Bar\n");
printf("13) PSI\n");
printf("14) Torr / MM_Hg\n");
printf("15) Watt\n");
printf("16) Kilowatt\n");
printf("17) KiloMeter\n");
printf("18) HorsePower\n");
printf("\n\n==========> Enter your choice: ");
scanf("%d", &target_unit);

*/

#include <stdio.h>

int main() 
{

    float Kg, G, Meter, Miles, Km, inches, Cm, feet, SqM, CubicM, Pascal, ATM, Bar, PSI, Torr_or_mm_Hg, Watt, HP, KWatt;
    char cont;
    int target_unit, source_unit, conversion_type;

    printf(",--. ,--.        ,--.  ,--.              ,-----.                                            ,--.\n");
    printf("|  | |  |,--,--, `--',-'  '-. ,---.     '  .--./ ,---. ,--,--,,--.  ,--.,---. ,--.--. ,---. `--' ,---. ,--,--,\n");
    printf("|  | |  ||     \\,--.'-.  .-'(  .-'     |  |    | .-. ||      \\  `'  /| .-. :|  .--'(  .-' ,--.| .-. ||      \n");
    printf("'  '-'  '|  ||  ||  |  |  |  .-'  `)    '  '--'\\ '-' '|  ||  | \\    / \\   --.|  |   .-'  `)|  |' '-' '|  ||  |\n");
    printf(" `-----' `--''--'`--'  `--'  `----'      `-----' `---' `--''--'  `--'   `----'`--'   `----' `--' `---' `--''--'\n\n\n");

  
    printf("You want to do UNIT Conversion ? (Y or N) :- ");
    scanf(" %c", &cont);

    do 
    {

        printf("\n\n==> Select the conversion type:\n");
        printf("1) Weight\n");
        printf("2) Height\n");
        printf("3) Distance\n");
        printf("4) Square Meter\n");
        printf("5) Cubic Meter\n");
        printf("6) Pressure\n");
        printf("7) Power\n");
        printf("\n\n==========> Enter your choice: ");
        scanf("%d", &conversion_type);   
        
        switch (conversion_type) 
        {
            case 1: // Weight.
                printf("\n\n==> Select the source unit:\n");
                printf("1) Grams\n");
                printf("2) Kilograms\n");
                printf("\n\n==========> Enter your choice: ");
                scanf("%d", &source_unit);
                
                printf("\n\n==> Select the target unit:\n");
                printf("1) Grams\n");
                printf("2) Kilograms\n");
                printf("\n\n==========> Enter your choice: ");
                scanf("%d", &target_unit);

                switch (source_unit) 
                {
                    case 1: // grams chosen. 
                        printf("\n\n==========> Enter the value in grams : ");
                        scanf("%f", &G);
                        switch (target_unit) 
                        {
                            case 1: // grams to grams.
                                printf("\n\n===> Value of grams to grams is %f\n\n", G);
                                break;

                            case 2: // grams to Kilograms.
                                Kg = (G / 1000);
                                printf("\n\n===> Grams to KiloGrams : %f\n\n", Kg);
                                break;
                            
                            default:
                                printf("\n\n===> Invalid Input !\n");
                                break;
                        }
                        break;
                    
                    case 2: // KiloGrams Chosen.
                        printf("\n\n==========> Enter the value in kilograms : ");
                        scanf("%f", &Kg);
                        switch (target_unit) 
                        {
                            case 1:
                                G = (Kg * 1000);
                                printf("\n\n===> Kilograms to Grams : %f\n\n", G);
                                break;
                            
                            case 2: 
                                printf("\n\n===> Value of Kilograms to Kilograms is %f\n\n", Kg);
                                break;

                            default:
                                printf("\n\nInvalid Input !\n");
                                break;
                        }
                        break;

                    default:
                        printf("\n\nInvalid Input !\n\n");
                        break;
                }
                break;
            
            case 2: // Height chosen.
                printf("\n\n==> Select the source unit:\n");
                printf("1) Centimeters\n");
                printf("2) Inches\n");
                printf("3) Feet\n");
                printf("\n\n==========> Enter your choice: ");
                scanf("%d", &source_unit);

                printf("\n\n==> Select the target unit:\n");
                printf("1) Centimeters\n");
                printf("2) Inches\n");
                printf("3) Feet\n");
                printf("\n\n==========> Enter your choice: ");
                scanf("%d", &target_unit);

                switch (source_unit) 
                {
                    case 1: // CM
                        printf("\n\n==========> Enter Value in Centimeters : ");
                        scanf("%f", &Cm);

                        switch (target_unit) 
                        {
                            case 1 :
                                printf("\n\n======> The value of centimeter to centimeter is %f\n\n", Cm);
                                break;
                            
                            case 2 : 
                                inches = (Cm / 2.54);
                                printf("\n\n======> Centimeter to inches : %f\n\n", inches);
                                break;

                            case 3 :
                                feet = (Cm / 30.48);
                                printf("\n\n======> Centimeter to Feet : %f\n\n", feet);
                                break;

                            default:
                                printf("\n\n======> Invalid Input !\n");
                                break;
                        }
                        break;
                    
                    case 2 : // Inches
                        printf("\n\n==========> Enter Value in Inches : ");
                        scanf("%f", &inches);

                        switch (target_unit) 
                        {
                            case 1:
                                Cm = (inches * 2.54);
                                printf("\n\n======> Iches to Centimeters : %f\n\n", Cm);
                                break;
                            
                            case 2 :
                                printf("\n\n======> Value of Inches to Inches is %f\n\n", inches);
                                break;

                            case 3 :
                                feet = (inches / 12);
                                printf("\n\n======> Inches to Feet : %f\n\n", feet);
                                break;

                            default:
                                printf("\n\n======> Invalid Input !\n");
                                break;
                        }
                        break;
                    
                    case 3 : // Feet
                        printf("\n\n==========> Enter Value in Feet : ");
                        scanf("%f", &feet);

                        switch (target_unit) 
                        {
                            case 1:
                                Cm = (feet * 30.48);
                                printf("\n\n======> Feet to Centimeter : %f\n\n", Cm);
                                break;

                            case 2 :
                                inches = (feet * 12);
                                printf("\n\n======> Feet to Inches : %f\n\n", inches);
                                break;

                            case 3 :
                                printf("\n\n======> Value of Feet to Feet is %f\n\n", feet);
                                break;
                        
                            default:
                                printf("\n\n======> Invalid Input !\n");
                                break;
                        }
                        break;

                    default:
                        printf("\n\nInvalid Input !\n");
                        break;
                }
                break;

            case 3 : // Distance Chosen.
                printf("\n\n==> Select the source unit:\n");
                printf("1) KiloMeter\n");
                printf("2) Meter\n");
                printf("3) Miles\n");
                printf("\n\n==========> Enter your choice: ");
                scanf("%d", &source_unit);

                printf("\n\n==> Select the target unit:\n");
                printf("1) KiloMeter\n");
                printf("2) Meter\n");
                printf("3) Miles\n");
                printf("\n\n==========> Enter your choice: ");
                scanf("%d", &target_unit);

                switch (source_unit) 
                {
                    case 1: // Kilometers.
                        printf("\n\n==========> Enter Value in KiloMeters : ");
                        scanf("%f", &Km);

                        switch (target_unit) 
                        {
                            case 1:
                                printf("\n\n====> Value of Kilometer to Kilometer is %f\n\n", Km);
                                break;
                            
                            case 2 :
                                Meter = (Km * 1000);
                                printf("\n\n====> Kilometer to Meter : %f\n\n", Meter);
                                break;

                            case 3 :
                                Miles = (Km * 1.60934);
                                printf("\n\n====> Kilometers to Miles : %f\n\n", Miles);
                                break;

                            default:
                                printf("\n\nInvalid Input !\n");
                                break;
                        }
                        break;
                    
                    case 2 : // Meter.
                        printf("\n\n==========> Enter Value in Meters : ");
                        scanf("%f", &Meter);

                        switch (target_unit) 
                        {
                            case 1:
                                Km = (Meter / 1000);
                                printf("\n\n====> Meter to Kilometer : %f\n\n", Km);
                                break;

                            case 2 :
                                printf("\n\n====> Value of Meter to Meter is %f\n\n", Meter);
                                break;
                            
                            case 3 :
                                Miles = (Meter / 1609.34);
                                printf("\n\n====> Meter to Miles : %f\n\n", Miles);
                            
                            default:
                                printf("\n\nInvalid Input !\n");
                                break;
                        }
                        break;
                    
                    case 3 : //Miles.
                        printf("\n\n==========> Enter the Value in Miles : ");
                        scanf("%f", &Miles);

                        switch (target_unit) 
                        {
                            case 1:
                                Km = (Miles / 1.60934);
                                printf("\n\n====> Miles to KiloMeter : %f\n\n", Km);
                                break;

                            case 2 :
                                Meter = (Miles * 1609.34);
                                printf("\n\n====> Miles to Meter : %f\n\n", Meter);
                                break;
                            
                            case 3 : 
                                printf("\n\n====> Miles to Miles is %f\n\n", Miles);
                                break;
                            
                            default:
                                printf("\n\nInvalid Input !\n");
                                break;
                        }
                        break;

                    default:
                        printf("\n\nInvalid Input !\n");
                        break;
                }
                break;

            case 4 : // Square Meter 
                printf("\n\n==========> Enter Value in Meters : ");
                scanf("%f", &Meter);

                SqM = (Meter * Meter);
                printf("\n\n====> The Value of Square Meter is %f\n\n", SqM);
                break;

            case 5 : // Cubic Meter.
                printf("\n\n==========> Enter the Value in Meters : ");
                scanf("%f", &Meter);

                CubicM = (Meter * Meter * Meter);
                printf("\n\n====> The Value of Cubic Meter is %f\n\n", CubicM);
                break;

            case 6 : // Pressure.
                printf("\n\n==> Select the source unit:\n");
                printf("1) Pascal\n");
                printf("2) ATM\n");
                printf("3) Bar\n");            
                printf("4) PSI\n");
                printf("5) Torr OR mm of Hg\n");
                printf("\n\n==========> Enter your choice: ");
                scanf("%d", &source_unit);

                printf("\n\n==> Select the target unit:\n");
                printf("1) Pascal\n");
                printf("2) ATM\n");
                printf("3) Bar\n");            
                printf("4) PSI\n");
                printf("5) Torr OR mm of Hg\n");
                printf("\n\n==========> Enter your choice: ");
                scanf("%d", &target_unit);

                switch (source_unit) 
                {
                    case 1:
                        printf("\n\n==========> Enter the Value in Pascal : ");
                        scanf("%f", &Pascal);
                        break;

                    switch (target_unit) 
                    {
                        case 1:
                            printf("\n\n====> Value of Pascal to Pascal is %f\n\n", Pascal);
                            break;

                        case 2 :
                            ATM = (Pascal / 101325);
                            printf("\n\n====> Pascal to ATM : %f\n\n", ATM);
                            break;

                        case 3 :
                            Bar = (Pascal / 100000);
                            printf("\n\n====> Pascal to Bar : %f\n\n", Bar);
                            break;
                        
                        case 4 :
                            PSI = (Pascal / 6894.76);
                            printf("\n\n====> Pascal to PSI : %f\n\n", PSI);
                            break;
                        
                        case 5 :
                            Torr_or_mm_Hg = (Pascal /  133.322);
                            printf("\n\n====> Pascal to Torr / mm of Hg : %f\n\n", Torr_or_mm_Hg);
                            break;
                        
                        default:
                            printf("\n\nInvalid Input !\n");
                            break;
                    }
                    break;
                    
                    case 2 :
                        printf("\n\n==========> Enter the Value in ATM : ");
                        scanf("%f", &ATM);

                        switch (target_unit) 
                        {
                            case 1:
                                Pascal = (ATM / 101325);
                                printf("\n\n====> ATM to Pascal : %f\n\n", Pascal);
                                break;
                            
                            case 2 :
                                printf("\n\n====> ATM to ATM is %f\n\n", ATM);
                                break;

                            case 3 :
                                Bar = (ATM * 1.01325);
                                printf("\n\n====> ATM to Bar : %f\n\n", Bar);
                                break;

                            case 4: 
                                PSI = (ATM * 14.696);
                                printf("\n\n====> ATM to PSI : %f\n\n", PSI);
                                break;

                            case 5 :
                                Torr_or_mm_Hg = (ATM * 760);
                                printf("\n\n====> ATM to TORR : %f\n\n", Torr_or_mm_Hg);
                                break;

                            default:
                                printf("\n\nInvalid Input!\n");
                                break;
                        }
                        break;

                    case 3 :
                        printf("\n\n==========> Enter Value in Bar : ");
                        scanf("%f", &Bar);

                        switch (target_unit) 
                        {
                            case 1:
                                Pascal = (Bar / 100000);
                                printf("\n\n====> Bar to Pascal : %f\n\n", Pascal);
                                break;

                            case 2 :
                                ATM = (Bar / 1.01325);
                                printf("\n\n====> Bar to ATM : %f\n\n", ATM);
                                break;

                            case 3 :
                                printf("\n\n====> Value of bar to Bar is %f\n\n", Bar);
                                break;

                            case 4 :
                                PSI = (Bar * 14.5038);
                                printf("\n\n====> Bar to PSI : %f\n\n", PSI);
                                break;

                            case 5 :
                                Torr_or_mm_Hg = (Bar / 0.00133322);
                                printf("\n\n====> Bar to Torr : %f\n\n", Torr_or_mm_Hg);
                                break;
                            
                            default:
                                printf("\n\nInvalid Input!\n");
                                break;
                        }
                        break;

                    case 4:
                        printf("\n\n==========> Enter Value in PSI : ");
                        scanf("%f", &PSI);

                        switch (target_unit) 
                        {
                            case 1:
                                Pascal = (PSI / 6894.76);
                                printf("\n\n====> PSI to Pascal : %f\n\n", Pascal);
                                break;

                            case 2 :
                                ATM = (PSI / 14.696);
                                printf("\n\n====> PSI to ATM : %f\n\n", ATM); 
                                break;

                            case 3:
                                Bar = (PSI / 14.5038);
                                printf("\n\n====> PSI to Bar : %f\n\n", Bar);
                                break;

                            case 4:
                                printf("\n\n====> PSI to PSI is %f\n\n", PSI);
                                break;

                            case 5:
                                Torr_or_mm_Hg = (PSI / 0.0193368);
                                printf("\n\n====> PSI to Torr : %f\n\n", Torr_or_mm_Hg);
                                break;
                            
                            default:
                                printf("\n\nInvalid Input!\n");
                                break;
                        }
                        break;

                    case 5: 
                        printf("\n\n==========> Enter Value in Torr / mm of Hg : ");
                        scanf("%f", &Torr_or_mm_Hg);

                        switch (target_unit) 
                        {
                            case 1:
                                Pascal = (Torr_or_mm_Hg * 133.322);
                                printf("\n\n====> Torr to Pascal : %f\n\n", Pascal);
                                break;

                            case 2:
                                ATM = (Torr_or_mm_Hg * 0.00131579);
                                printf("\n\n====> Torr to ATM : %f\n\n", ATM);
                                break;

                            case 3:
                                Bar = (Torr_or_mm_Hg * 0.00133322);
                                printf("\n\n====> Torr to Bar : %f\n\n", Bar);
                                break;

                            case 4:
                                PSI = (Torr_or_mm_Hg * 0.0193368);
                                printf("\n\n====> Torr to PSI : %f\n\n", PSI);
                                break;

                            case 5:
                                printf("\n\n====> Value of Torr to Torr is %f\n\n", Torr_or_mm_Hg);
                                break;
                            
                            default:
                                printf("\n\nInvalid Input!\n");
                                break;
                        }
                        break;

                    default:
                        printf("\n\nInvalid Input!\n");
                        break;
                }
                break;

            case 7: // Power.
                printf("\n\n==> Select the source unit:\n");
                printf("1) Watt\n");
                printf("2) KiloWatt\n");
                printf("3) HorsePower\n");
                printf("\n\n==========> Enter your choice: ");
                scanf("%d", &source_unit);

                printf("\n\n==> Select the target unit:\n");
                printf("1) Watt\n");
                printf("2) KiloWatt\n");
                printf("3) HorsePower\n");
                printf("\n\n==========> Enter your choice: ");
                scanf("%d", &target_unit);

                switch (source_unit) 
                {
                    case 1:
                        printf("\n\n==========> Enter the Value of Watt : ");
                        scanf("%f", &Watt);

                        switch (target_unit) 
                        {
                            case 1:
                                printf("\n\n====> Watt to Watt is %f\n\n", Watt);
                                break;

                            case 2: 
                                KWatt = (Watt / 1000);
                                printf("\n\n====> Watt to Kilowatt : %f\n\n", KWatt);
                                break;

                            case 3:
                                HP = (Watt / 745.7);
                                printf("\n\n====> Watt to Horse Power : %f\n\n", HP);
                                break;
                            
                            default:
                                printf("\n\nInvalid Input!\n");
                                break;
                        }
                        break;

                    case 2:
                        printf("\n\n==========> Enter the Value of KiloWatt : ");
                        scanf("%f", &KWatt);

                        switch (target_unit) 
                        {
                            case 1:
                                Watt = (KWatt * 1000);
                                printf("\n\n====> KiloWatt to Watt : %f\n\n", Watt);
                                break;
                            
                            case 2:
                                printf("\n\n====> Kilowatt to Kilowatt is %f\n\n", KWatt);
                                break;

                            case 3:
                                HP = (KWatt / 0.7457);
                                printf("\n\n====> Kilowatt to HorsePower : %f\n\n", HP);
                                break;
                            
                            default:
                                printf("\n\nInvalid Input!\n");
                                break;
                        }
                        break;

                    case 3: 
                        printf("\n\n==========> Enter the Value of HorsePower : ");
                        scanf("%f", &HP);

                        switch (target_unit) 
                        {
                            case 1:
                                Watt = (HP * 745.7);
                                printf("\n\n====> HorsePower to Watt : %f\n\n", Watt);
                                break;

                            case 2:
                                KWatt = (HP * 0.7457);
                                printf("\n\n====> HorsePower to Kilowatt : %f\n\n", KWatt);
                                break;

                            case 3:
                                printf("\n\n====> HorsePower to HorsePower is %f\n\n", HP);
                                break;
                            
                            default:
                                printf("\n\nInvalid Input!\n");
                                break;
                        }
                        break;

                    default:
                        printf("\n\nInvalid Input!\n");
                        break;
                }
                break;
            
            default:
                printf("\n\nInvalid Input!\n");
                break;
        }

        printf("\n\nDo you want to do another conversion? (Y or N): ");
        scanf(" %c", &cont);

    } while (cont == 'Y' || cont == 'y');

    if (cont == 'n' || cont == 'N')
    {
        printf("\n\nOkay\n\nClosing the Program!\n\n");
    }
    
    else
    {
        printf("\n\nInvalid Input!\n\n");
    }
    
    return 0;
}