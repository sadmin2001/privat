//
//  Chapter 3 page 178 problem 11.cpp
//  July
//
//  Created by Sadmin on 7/3/17.
//  Copyright © 2017 Probe Team. All rights reserved.
//

#include <iostream>

using namespace std;

int main()
{
    int desired_temp = 0; lower_temp = 0, higher_temp = 0;
    bool wrong_flag;
   
    cout << "Please input a desired tempature between 0 and 999\n";
    cin >> desired_temp;
    while ((desired_temp > 999)||(desired_temp < 0)) {
        cout << "This is wrong, please enter a number between 0 and 999.\n";
        cin >> desired_temp;
     }
    
     { cout << "This is right. Processing...\n";
         
         do while (wrong_flag = 1);{
             { if (desired_temp = (((desired_temp / 100)==1)||(desired_temp / 100) == 4)||((desired_temp / 100) == 7)));{
             wrong_flag = 1;}
             else {
                 wrong_flag = 0
                 cout << "Set your temp to \0"<<desired_temp}
             
                 
             }
         }
        
    
    
    
}
}
