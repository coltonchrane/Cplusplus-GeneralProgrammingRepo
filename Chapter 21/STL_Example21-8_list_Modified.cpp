//List Container Example

#include <iostream>                                  //Line 1
#include <list>                                      //Line 2
#include <iterator>                                  //Line 3
#include <algorithm>                                 //Line 4

using namespace std;                                 //Line 5

int main()                                           //Line 6
{                                                    //Line 7
    list<int> intList1 = { 23, 58, 58, 58, 36, 15,
        93, 98, 58 };                                //Line 8

    list<int> intList2;                              //Line 9

    ostream_iterator<int> screen(cout, " ");         //Line 10

    cout << "Line 11: intList1: ";                   //Line 11
    for (auto p : intList1)                          //Line 12
        cout << p << " ";                            //Line 12a ***
    cout << endl;                                    //Line 13

    intList2 = intList1;                             //Line 14

    cout << "Line 15: intList2: ";                   //Line 15
    for (auto p : intList2)                          //Line 16
        cout << p << " ";                            //Line 16a **
    cout << endl;                                    //Line 17

    intList1.unique();                               //Line 18

    cout << "Line 19: After removing the "
        << "consecutive duplicates," << endl
        << "         intList1: ";                    //Line 19
    for (auto p : intList1)                          //Line 20
        cout << p << " ";                            //Line 20a ***
    cout << endl;                                    //Line 21

    intList2.sort();                                 //Line 22

    cout << "Line 23: After sorting, intList2: ";    //Line 23
    for (auto p : intList2)                          //Line 254
        cout << p << " ";                            //Line 24a ***
    cout << endl;                                    //Line 25

    list<int> intList3 = { 13, 23, 25, 136, 198 };   //Line 26

    cout << "Line 27: intList3: ";                   //Line 27
    for (auto p : intList3)                          //Line 28
        cout << p << " ";                            //Line 28a ***
    cout << endl;                                    //Line 29

    list<int> intList4 = { -2, -7, -88 };            //Line 30

    cout << "Line 31: intList4: ";                   //Line 33
    copy(intList4.begin(), intList4.end(), screen);  //Line 32
    cout << endl;                                    //Line 33

    intList3.splice(intList3.begin(), intList4);     //Line 34

    cout << "Line 35: After moving the elements "
        << "of intList4 into intList3," << endl
        << "         intList3: ";                    //Line 35
    copy(intList3.begin(), intList3.end(), screen);  //Line 36
    cout << endl;                                    //Line 37

    intList3.sort();                                 //Line 38

    cout << "Line 39: After sorting, intList3: ";    //Line 39
    copy(intList3.begin(), intList3.end(), screen);  //Line 40
    cout << endl;                                    //Line 41

    intList2.merge(intList3);                        //Line 42

    cout << "Line 43: After merging intList2 and "
        << "intList3, intList2: " << endl
        << "         ";                              //Line 43
    copy(intList2.begin(), intList2.end(), screen);  //Line 44
    cout << endl;                                    //Line 45

    intList2.unique();                               //Line 46

    cout << "Line 47: After removing the "
        << "consecutive duplicates, intList2: "
        << endl << "         ";                      //Line 47
    copy(intList2.begin(), intList2.end(), screen);  //Line 48
    cout << endl;                                    //Line 49

    return 0;                                        //Line 50
}                                                    //Line 51

