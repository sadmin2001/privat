
    //
    //  WHEREISMYSON.cpp
    //  Rating my son calculator with "malware" if user rates him less than 1.
    //  This program creates a loop to talk about my son for the number that the user selects to rate my son.
    //  If the number the user chooses is below 1, an infinate loop will kick in, punishing the user for their lies.
    //  Created by Sadmin on 7/3/17.
    //  Copyright © 2017 Probe Team. All rights reserved.
    //
    
#include <iostream>
    
    using namespace std;
    
    int main()
{   int howawesome = 0, count = 1;
        cout << "Where is my son??? \n"<<"Please input, on a scale from 1 to 100, how perfect my son is. \n";
        cin >> howawesome;
        while(howawesome <= 0 && count == 1){
            cout << "WRONG ANSWER, FRIEND. PLEASE BE PATIENT WHILE YOUR COMPUTER IS ERASED\n";
            count = count -1;}
        if (howawesome <= 0){
            for(long long i=1;i<=100;i--)
                
                cout<<(char)7;
            
        }
        else {
    
        while (howawesome > 0){
            cout << "MY SON IS FUKKIN GREAT!\n";
            howawesome--;
        }
            cout << "\nI'm done telling you about my son.\n";}
        
        return 0;
    }
