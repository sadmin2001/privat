////  Chapter 3 page 178 problem 11.cpp//  July////  Created by Sadmin on 7/3/17.//  Copyright © 2017 Probe Team. All rights reserved.//
#include <iostream>
using namespace std;
int main(){    int desired_temp = 0, lower_temp = 0, higher_temp = 0, tens = 0, hundreds = 0, ones = 1;    bool wrong_flag;
    cout << "Please input a desired tempature between 0 and 999\n";    cin >> desired_temp;    while ((desired_temp > 999)||(desired_temp < 0)) {        cout << "This is wrong, please enter a number between 0 and 999.\n";        cin >> desired_temp;     }
      cout << "This is right. Processing...\n";
     hundreds = (desired_temp / 100);     tens = (desired_temp % 10);     ones = ((desired_temp / 10) % 10);
    if ((hundreds==1)||(hundreds==4)||(hundreds=7)||((tens==1)||(tens==4)||(tens=7))||((ones==1)||(ones==4)||(ones=7))); wrong_flag = true;    else cout << desired_temp;            cout << "Input \n"<<desired_temp;        }

     }     }
             }         }



