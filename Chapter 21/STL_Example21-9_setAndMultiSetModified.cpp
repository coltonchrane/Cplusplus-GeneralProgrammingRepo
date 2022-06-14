 
#include <iostream>                                     //Line 1
#include <set>                                          //Line 2
#include <string>                                       //Line 3
#include <functional>                                   //Line 4
#include <iterator>                                     //Line 5
#include <algorithm>                                    //Line 6

using namespace std;                                    //Line 7

int main()                                              //Line 8
{                                                       //Line 9
    set<int> intSet = { 16, 8, 20, 3 };                 //Line 10
    set<int, greater<int>> intSetA = { 36, 84, 30,
                                39, 59, 238, 156 };     //Line 11

    set<int, greater<int>>::iterator intGtIt;           //Line 12

    ostream_iterator<int> screen(cout, " ");            //Line 13

    cout << "Line 14: intSet: ";                        //Line 14
    copy(intSet.begin(), intSet.end(), screen);         //Line 15
    cout << endl;                                       //Line 16

    cout << "Line 17: intSetA: ";                       //Line 17
    copy(intSetA.begin(), intSetA.end(), screen);       //Line 18
    cout << endl;                                       //Line 19

    intSetA.erase(59);                                  //Line 20

    cout << "Line 21: After removing 59, intSetA: ";    //Line 21
    copy(intSetA.begin(), intSetA.end(), screen);       //Line 22
    cout << endl;                                       //Line 23

    intGtIt = intSetA.begin();                          //Line 24
    ++intGtIt;                                          //Line 25
    ++intGtIt;                                          //Line 26
    ++intGtIt;                                          //Line 27

    intSetA.erase(intGtIt);                             //Line 28

    cout << "Line 29: After removing the fourth "
        << "element, " << endl
        << "         intSetA: ";                       //Line 29
    copy(intSetA.begin(), intSetA.end(), screen);       //Line 30
    cout << endl;                                       //Line 31


    set<int, greater<int>>  intSetB(intSetA);           //Line 32

    cout << "Line 35: intSetB: ";                       //Line 33
    copy(intSetB.begin(), intSetB.end(), screen);       //Line 34
    cout << endl;                                       //Line 35

    intSetB.clear();                                    //Line 36

    cout << "Line 37: After removing all elements, "
        << endl << "         intSetB: ";               //Line 37
    copy(intSetB.begin(), intSetB.end(), screen);       //Line 38
    cout << endl;                                       //Line 39

    multiset<string, greater<string>> namesMultiSet;    //Line 40
    multiset<string, greater<string>>::iterator iter;   //Line 41

    ostream_iterator<string> pScreen(cout, " ");        //Line 42

    namesMultiSet.insert("Donny");                      //Line 43
    namesMultiSet.insert("Zippy");                      //Line 44
    namesMultiSet.insert("Goofy");                      //Line 45
    namesMultiSet.insert("Hungry");                     //Line 46
    namesMultiSet.insert("Goofy");                      //Line 47
    namesMultiSet.insert("Donny");                      //Line 48

    cout << "Line 49: namesMultiSet: ";                 //Line 49
    copy(namesMultiSet.begin(), namesMultiSet.end(),
        pScreen);                                      //Line 50
    cout << endl;                                       //Line 51

    return 0;                                           //Line 52
}                                                       //Line 53
