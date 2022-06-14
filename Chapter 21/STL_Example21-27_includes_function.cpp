//STL function includes 
//This function assumes that the elements in the given 
//ranges are ordered according to some sorting criteria
 
#include <iostream>                                 //Line 1
#include <algorithm>                                //Line 2
#include <iterator>                                 //Line 3

using namespace std;                                //Line 4

int main()                                          //Line 5
{                                                   //Line 6
    char setA[5] = {'A', 'B', 'C', 'D', 'E'};       //Line 7
    char setB[10] = {'A', 'B', 'C', 'D', 'E',
                     'F', 'I', 'J', 'K', 'L'};      //Line 8
    char setC[5] = {'A', 'E', 'I', 'O', 'U'};       //Line 9

    ostream_iterator<char> screen(cout, " ");       //Line 10

    cout << "Line 11: setA: ";                      //Line 11
    copy(setA, setA + 5, screen);                   //Line 12
    cout << endl;                                   //Line 13

    cout << "Line 14: setB: ";                      //Line 14
    copy(setB, setB + 10, screen);                  //Line 15
    cout << endl;                                   //Line 16

    cout << "Line 17: setC: ";                      //Line 17
    copy(setC, setC + 5, screen);                   //Line 18
    cout << endl;                                   //Line 19

    if (includes(setB, setB + 10, setA, setA + 5))  //Line 20
        cout << "Line 21: setA is a subset of "
             << "setB." << endl;                    //Line 21
    else                                            //Line 22
        cout << "Line 23: setA is not a subset "
             << "of setB." << endl;                 //Line 23

    if (includes(setB, setB + 10, setC, setC + 5))  //Line 24
        cout << "Line 25: setC is a subset of "
             << "setB." << endl;                    //Line 25
    else                                            //Line 26
        cout << "Line 27: setC is not a subset "
             << "of setB." << endl;                 //Line 27

    return 0;                                       //Line 28
}                                                   //Line 29
