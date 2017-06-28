    #include <iostream>
    using namespace std;
    int main( )
   {

        double PersonalLD50, UserWeightGrams,UserWeightPounds, SodaPopToday, Remaining_Cans, CansToDie;

        const double POUNDS_TO_GRAMS = 454, LD50_RATE = (5.0 / 35.0), PER_CAN_SWEETNER = (350 * 0.001);
        cout << "Welcome to your personal death via diet soda calculator. Can I ask your weight in pounds?\n";
        cin >> UserWeightPounds;
        UserWeightGrams = (UserWeightPounds * POUNDS_TO_GRAMS);
        PersonalLD50 = (UserWeightGrams * LD50_RATE);
        CansToDie = (PersonalLD50 / PER_CAN_SWEETNER);


        //First prompt - Requests user weight and convert to grams.


        cout << "Wow buddy! You weigh \0";
        cout << UserWeightGrams;
        cout << " grams. Pretty exciting. Your personal lethal dose of sweetner is ";
        cout << PersonalLD50;
        cout << " Grams, which is \0";
        cout << CansToDie;
        cout  << " cans of soda. How many diet sodas have you sucked down already so far so far?:\0";
        cin >> SodaPopToday;
        Remaining_Cans = (CansToDie - Remaining_Cans);


        // Second prompt confirms weight in grams and requested how many diet sodas have already been drank. Sets personal lethal dose in grams.
        // Sets remaining cans user can drink based on total number already ingested.



        cout << "You may drink ";
        cout <<(int) Remaining_Cans;
        cout << " more diet sodas before all life leaves your body";


       return 0;
       }
