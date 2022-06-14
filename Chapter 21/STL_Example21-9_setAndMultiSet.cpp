 
#include <iostream>                                    //Line 1
#include <set>                                         //Line 2
#include <string>                                      //Line 3
#include <functional>                                  //Line 4
#include <iterator>                                    //Line 5
#include <algorithm>                                   //Line 6

using namespace std;                                   //Line 7

int main()                                             //Line 8
{                                                      //Line 9
    set<int> intSet;                                   //Line 10
    set<int, greater<int> > intSetA;                   //Line 11

    set<int, greater<int> >::iterator intGtIt;         //Line 12

    ostream_iterator<int> screen(cout, " ");           //Line 13

    intSet.insert(16);                                 //Line 14
    intSet.insert(8);                                  //Line 15
    intSet.insert(20);                                 //Line 16
    intSet.insert(3);                                  //Line 17

    cout << "Line 18: intSet: ";                       //Line 18
    copy(intSet.begin(), intSet.end(), screen);        //Line 19
    cout << endl;                                      //Line 20

    intSetA.insert(36);                                //Line 21
    intSetA.insert(84);                                //Line 22
    intSetA.insert(30);                                //Line 23
    intSetA.insert(39);                                //Line 24
    intSetA.insert(59);                                //Line 25
    intSetA.insert(238);                               //Line 26
    intSetA.insert(156);                               //Line 27

    cout << "Line 28: intSetA: ";                      //Line 28
    copy(intSetA.begin(), intSetA.end(), screen);      //Line 29
    cout << endl;                                      //Line 30

    intSetA.erase(59);                                 //Line 31

    cout << "Line 32: After removing 59, intSetA: ";   //Line 32
    copy(intSetA.begin(), intSetA.end(), screen);      //Line 33
    cout << endl;                                      //Line 34

    intGtIt = intSetA.begin();                         //Line 35
    ++intGtIt;                                         //Line 36
    ++intGtIt;                                         //Line 37
    ++intGtIt;                                         //Line 38

    intSetA.erase(intGtIt);                            //Line 39

    cout << "Line 40: After removing the fourth "
         << "element, " << endl
         << "         intSetA: ";                      //Line 40
    copy(intSetA.begin(), intSetA.end(), screen);      //Line 41
    cout << endl;                                      //Line 42


    set<int, greater<int> >  intSetB(intSetA);         //Line 43

    cout << "Line 44: intSetB: ";                      //Line 44
    copy(intSetB.begin(), intSetB.end(), screen);      //Line 45
    cout << endl;                                      //Line 46

    intSetB.clear();                                   //Line 47

    cout << "Line 48: After removing all elements, "
         << endl << "         intSetB: ";              //Line 48
    copy(intSetB.begin(), intSetB.end(), screen);      //Line 49
    cout << endl;                                      //Line 50

    multiset<string, greater<string> > namesMultiSet;  //Line 51
    multiset<string, greater<string> >::iterator iter; //Line 52

    ostream_iterator<string> pScreen(cout, " ");       //Line 53

    namesMultiSet.insert("Donny");                     //Line 54
    namesMultiSet.insert("Zippy");                     //Line 55
    namesMultiSet.insert("Goofy");                     //Line 56
    namesMultiSet.insert("Hungry");                    //Line 57
    namesMultiSet.insert("Goofy");                     //Line 58
    namesMultiSet.insert("Donny");                     //Line 59

    cout << "Line 60: namesMultiSet: ";                //Line 60
    copy(namesMultiSet.begin(), namesMultiSet.end(),
         pScreen);                                     //Line 61
    cout << endl;                                      //Line 62

    return 0;                                          //Line 63
}                                                      //Line 64
