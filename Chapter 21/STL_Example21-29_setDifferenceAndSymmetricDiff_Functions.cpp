//STL set theory functions: set_difference and
//                          set_symmetric_difference.
//These functions assume that the elements in the given
//ranges are ordered according to some sorting criteria.
  
#include <iostream>                                    //Line 1
#include <algorithm>                                   //Line 2
#include <iterator>                                    //Line 3

using namespace std;                                   //Line 4

int main()                                             //Line 5
{                                                      //Line 6
    int setA[5] = {2, 4, 5, 7, 8};                     //Line 7
    int setB[7] = {3, 4, 5, 6, 7, 8, 10};              //Line 8
    int setC[5] = {1, 5, 6, 8, 15};                    //Line 9

    int AdifferenceC[5];                               //Line 10
    int BsymDiffC[10];                                 //Line 11

    int *lastElem;                                     //Line 12

    ostream_iterator<int> screen(cout, " ");           //Line 13

    cout << "Line 14: setA = ";                        //Line 14
    copy(setA, setA + 5, screen);                      //Line 15
    cout << endl;                                      //Line 16

    cout << "Line 17: setB = ";                        //Line 17
    copy(setB, setB + 7, screen);                      //Line 18
    cout << endl;                                      //Line 19

    cout << "Line 20: setC = ";                        //Line 20
    copy(setC, setC + 5, screen);                      //Line 21
    cout << endl;                                      //Line 22


    lastElem = set_difference(setA, setA + 5,
                              setC, setC + 5,
                              AdifferenceC);           //Line 23

    cout << "Line 24: AdifferenceC: ";                 //Line 24
    copy(AdifferenceC, lastElem, screen);              //Line 25
    cout << endl;                                      //Line 26

    lastElem = set_symmetric_difference(setB, setB + 7,
                                        setC, setC + 5,
                                        BsymDiffC);    //Line 27

    cout << "Line 28: BsymDiffC: ";                    //Line 28
    copy(BsymDiffC, lastElem, screen);                 //Line 29
    cout << endl;                                      //Line 30

    return 0;                                          //Line 31
}                                                      //Line 32
