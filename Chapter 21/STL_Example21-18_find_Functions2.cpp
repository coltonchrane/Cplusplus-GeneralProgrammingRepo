//STL Functions find_end and find_first_of
  
#include <iostream>                                    //Line 1
#include <algorithm>                                   //Line 2
#include <iterator>                                    //Line 3

using namespace std;                                   //Line 4

int main()                                             //Line 5
{                                                      //Line 6
    int list1[10] = {12, 34, 56, 21, 34,
                     78, 34, 56, 12, 25};              //Line 7
    int list2[2] = {34, 56};                           //Line 8
    int list3[3] = {56, 21, 35};                       //Line 9
    int list4[5] = {33, 48, 21, 34, 73};               //Line 10

    int* location;                                     //Line 11

    ostream_iterator<int> screenOut(cout, " ");        //Line 12

    cout << "Line 13: list1: ";                        //Line 13
    copy(list1, list1 + 10, screenOut);                //Line 14
    cout << endl;                                      //Line 15

    cout << "Line 16: list2: ";                        //Line 16
    copy(list2, list2 + 2, screenOut);                 //Line 17
    cout << endl;                                      //Line 18

        //find_end
    location = find_end(list1, list1 + 10,
                        list2, list2 + 2);             //Line 19

    if (location != list1 + 10)                        //Line 20
        cout << "Line 21: list2 is found in list1. "
             << "The last occurrence of \n         "
             << "list2 in list 1 is at position "
             << (location - list1) << endl;            //Line 21
    else                                               //Line 22
        cout << "Line 23: list2 is not in list1."
             << endl;                                  //Line 23

    cout << "Line 24: list3: ";                        //Line 24
    copy(list3, list3 + 3, screenOut);                 //Line 25
    cout << endl;                                      //Line 26

    location = find_end(list1, list1 + 10,
                        list3, list3 + 3);             //Line 27

    if (location != list1 + 10)                        //Line 28
        cout << "Line 29: list3 is found in list1. "
             << "The last occurrence of list3 in "
             << endl << "list1 is at position "
             << (location - list1) << endl;            //Line 29
    else                                               //Line 30
        cout << "Line 31: list3 is not in list1."
             << endl;                                  //Line 31

        //find_first_of
    cout << "Line 32: list4: ";                        //Line 32
    copy(list4, list4 + 5, screenOut);                 //Line 33
    cout << endl;                                      //Line 34

    location = find_first_of(list1, list1 + 10,
                             list4, list4 + 5);        //Line 35

    if (location != list1 + 10)                        //Line 36
        cout << "Line 37: The first element "
             << *location << " of list4 is found in "
             << endl << "         list1 at position "
             << (location - list1) << endl;            //Line 37
    else                                               //Line 38
        cout << "Line 39: No element of list4 is "
             << "in list1." << endl;                   //Line 39

    return 0;                                          //Line 40
}                                                      //Line 41

