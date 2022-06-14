//STL set theory functions set_union and set_intersection
//These functions assume that the elements in the given 
//ranges are ordered according to some sorting criteria
 
#include <iostream>                              //Line 1
#include <algorithm>                             //Line 2
#include <iterator>                              //Line 3
 
using namespace std;                             //Line 4

int main()                                       //Line 5
{                                                //Line 6
    int setA[5] = {2, 4, 5, 7, 8};               //Line 7
    int setB[7] = {1, 2, 3, 4, 5, 6, 7};         //Line 8
    int setC[5] = {2, 5, 8, 8, 15};              //Line 9
    int setD[6] = {1, 4, 4, 6, 7, 12};           //Line 10

    int AunionB[10];                             //Line 11
    int AunionC[10];                             //Line 12
    int BunionD[15];                             //Line 13
    int AintersectB[10];                         //Line 14
    int AintersectC[10];                         //Line 15

    int *lastElem;                               //Line 16

    ostream_iterator<int> screen(cout, " ");     //Line 17

    cout << "Line 18: setA = ";                  //Line 18
    copy(setA, setA + 5, screen);                //Line 19
    cout << endl;                                //Line 20

    cout << "Line 21: setB = ";                  //Line 21
    copy(setB, setB + 7, screen);                //Line 22
    cout << endl;                                //Line 23

    cout << "Line 24: setC = ";                  //Line 24
    copy(setC, setC + 5, screen);                //Line 25
    cout << endl;                                //Line 26

    cout << "Line 27: setD = ";                  //Line 27
    copy(setD, setD + 6, screen);                //Line 28
    cout << endl;                                //Line 29

    lastElem = set_union(setA, setA + 5,
                         setB, setB + 7,
                         AunionB);               //Line 30

    cout << "Line 31: Set AunionB: ";            //Line 31
    copy(AunionB, lastElem, screen);             //Line 32
    cout << endl;                                //Line 33

    lastElem = set_union(setA, setA + 5,
                         setC, setC + 5,
                         AunionC);               //Line 34

    cout << "Line 35: Set AunionC: ";            //Line 35
    copy(AunionC, lastElem, screen);             //Line 36
    cout << endl;                                //Line 37

    lastElem = set_union(setB, setB + 7,
                         setD, setD + 6,
                         BunionD);               //Line 38

    cout << "Line 39: Set BunionD: ";            //Line 39
    copy(BunionD, lastElem, screen);             //Line 40
    cout << endl;                                //Line 41

    lastElem = set_intersection(setA, setA + 5,
                                setB, setB + 7,
                                AintersectB);    //Line 42

    cout << "Line 43: Set AintersectB: ";        //Line 43
    copy(AintersectB, lastElem, screen);         //Line 44
    cout << endl;                                //Line 45

    lastElem = set_intersection(setA, setA + 5,
                                setC, setC + 5,
                                AintersectC);    //Line 46

    cout << "Line 47: Set AintersectC: ";        //Line 47
    copy(AintersectC, lastElem, screen);         //Line 48
    cout << endl;                                //Line 49

    return 0;                                    //Line 50
}                                                //Line 51

