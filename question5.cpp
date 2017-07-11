//
//  Chapter 4 assignment page 249.cpp
//  Chapter 4 page 249 problem 5
//
//  Created by Kody on 7/10/17.
//  Copyright © 2017 Probe Team. All rights reserved.
//

#include <iostream>
using namespace std;
#include <iostream>

double process_basal(int weight);
double process_physical(int intensity_estimate, int time_estimate, int weight);
double process_digestion(int total);
void output_servings(int total, int favorite_calories);
void get_input(int &weight, int &time_estimate, int &intensity_estimate, int &favorite_calories);


int main() {
    int weight = 0, time_estimate = 0, intensity_estimate = 0, basal_calories = 0, physical_calories = 0, digestion_calories = 0, total = 0, favorite_calories = 0;
    get_input(weight, time_estimate, intensity_estimate, favorite_calories);
    total = (total + process_basal(weight));
    total = (total + process_physical(intensity_estimate,time_estimate,weight));
    total = (total + process_digestion(total));
    output_servings(total, favorite_calories);

}


void get_input(int &weight, int &time_estimate, int &intensity_estimate, int &favorite_calories)
{
    cout << "Please input your weight\n";
    cin >> weight;
    cout << "How many minutes of physical energy do you intend to do?\n";
    cin >> time_estimate;
    cout << "What is the intensity of the exercise preformed? Example: Running = 17, walking = 1\n";
    cin >> intensity_estimate;
    cout << "How many calories are in your favorite food?\n";
    cin >> favorite_calories;
}

double process_basal(int weight){
    return (70 * ((weight / 2.2) * 0.756));
}

double process_physical(int intensity_estimate, int time_estimate, int weight){
    return (0.0385 * intensity_estimate * weight * time_estimate);
}
double process_digestion(int total){
    return (total + (total * 1.1));

}
void output_servings(int total, int favorite_calories){
cout << "You must eat "<<(total / favorite_calories)<<" servings of your favorite food to avoid death at that rate.\n";
}

