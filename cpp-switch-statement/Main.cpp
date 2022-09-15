#include <iostream>
//#include <bits/stdc++.h>
#include <string>
#define NEWLINE '\n'
using namespace std;

int main() {

    string city = "Yola";
    cout << "Enter the name of your city: ";
    string choice;
    
    switch(city)
    {
        case "Abuja":
            choice = "You are in Abuja";
            break;
        case "Lagos":
            choice = "You are in Lagos";
            break;
        case "Kano":
            choice = "You are in Kano";
            break;
        case "Abia":
            choice = "You are in Abia";
            break;
        case "PortHarCourt":
            choice = "You are in PortHarCourt";
            break;
        default:
            choice = "You are not in one of the mentioning cities";
            break;
    }
    cout << city << NEWLINE;

    return 0;
}