//How to use predefined functions.
//This program uses the math functions pow and sqrt to determine
//and output the volume of a sphere, the distance between two 
//points, respectively, and the string function length to find 
//the number of characters in a string.
//If the radius of the sphere is r, then the volume of the sphere
//is (4/3)*PI*r^3. If (x1,y1) and (x2,y2) are the coordinates of two 
//points in the XY-plane, then the distance between these points is 
//sqrt((x2-x1)^2 + (y2-y1)^2).

#include <iostream>                                        //Line 1
#include <cmath>                                           //Line 2
#include <string>                                          //Line 3
    
using namespace std;                                       //Line 4

const double PI = 3.1416;                                  //Line 5

int main()                                                 //Line 6
{                                                          //Line 7
    double sphereRadius;                                   //Line 8
    double sphereVolume;                                   //Line 9
    double point1X, point1Y;                               //Line 10
    double point2X, point2Y;                               //Line 11
    double distance;                                       //Line 12

    string str;                                            //Line 13

    cout << "Line 14: Enter the radius of the sphere: ";   //Line 14
    cin >> sphereRadius;                                   //Line 15
    cout << endl;                                          //Line 16

    sphereVolume = (4 / 3) * PI * pow(sphereRadius, 3);    //Line 17

    cout << "Line 18: The volume of the sphere is: " 
         << sphereVolume << endl << endl;                  //Line 18
   
    cout << "Line 19: Enter the coordinates of two "
         << "points in the X-Y plane: ";                   //Line 19
    cin >> point1X >> point1Y >> point2X >> point2Y;       //Line 20
    cout << endl;                                          //Line 21

    distance = sqrt(pow(point2X - point1X, 2)
                    + pow(point2Y - point1Y, 2));          //Line 22

    cout << "Line 23: The distance between the points "
         << "(" << point1X << ", " << point1Y << ") and "
         << "(" << point2X << ", " << point2Y << ") is: "
         << distance << endl << endl;                      //Line 23

    str = "Programming with C++";                          //Line 24

    cout << "Line 25: The number of characters, " 
         << "including blanks, in \n         \"" << str 
         << "\" is: " << str.length() << endl;             //Line 25

    return 0;                                              //Line 26
}                                                          //Line 27
