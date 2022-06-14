//STL Functions reverse, reverse_copy, rotate, and rotate_copy
  
#include <iostream>                                  //Line 1
#include <algorithm>                                 //Line 2
#include <iterator>                                  //Line 3
#include <list>                                      //Line 4

using namespace std;                                 //Line 5

int main()                                           //Line 6
{                                                    //Line 7
    list<int> intList = { 1, 3, 5, 7, 9, 0, 2,
                          4, 6, 8 };                 //Line 8
    list<int> resultList;                            //List 9
    list<int>::iterator listItr;                     //Line 10

    ostream_iterator<int> screen(cout, " ");         //Line 11

    cout << "Line 12: intList: ";                    //Line 12
    copy(intList.begin(), intList.end(), screen);    //Line 13
    cout << endl;                                    //Line 14

        //reverse
    reverse(intList.begin(), intList.end());         //Line 15

    cout << "Line 16: intList after reversal: ";     //Line 16
    copy(intList.begin(), intList.end(), screen);    //Line 17
    cout << endl;                                    //Line 18

        //reverse_copy
    reverse_copy(intList.begin(), intList.end(),
                 back_inserter(resultList));         //Line 19

    cout << "Line 20: resultList: ";                 //Line 20
    copy(resultList.begin(), resultList.end(),
         screen);                                    //Line 21
    cout << endl;                                    //Line 22

    listItr = intList.begin();                       //Line 23
    listItr++;                                       //Line 24
    listItr++;                                       //Line 25

    cout << "Line 26: intList before rotating: ";    //Line 26
    copy(intList.begin(), intList.end(), screen);    //Line 27
    cout << endl;                                    //Line 28

        //rotate
    rotate(intList.begin(), listItr, intList.end()); //Line 29

    cout << "Line 30: intList after rotating: ";     //Line 30
    copy(intList.begin(), intList.end(), screen);    //Line 31
    cout << endl;                                    //Line 32

        //rotate_copy
    resultList.clear();                              //Line 33

    rotate_copy(intList.begin(), listItr,
                intList.end(),
                back_inserter(resultList));          //Line 34

    cout << "Line 35: intList after rotating and "
         << "copying:\n"
         << "         ";                             //Line 35
    copy(intList.begin(), intList.end(), screen);    //Line 36
    cout << endl;                                    //Line 37

    cout << "Line 38: resultList after rotating "
         << "and copying:\n"
         << "         ";                             //Line 38
    copy(resultList.begin(), resultList.end(),
         screen);                                    //Line 39
    cout << endl;                                    //Line 40

    resultList.clear();                              //Line 41

    rotate_copy(intList.begin(),
                find(intList.begin(), intList.end(), 6),
                intList.end(),
                back_inserter(resultList));          //Line 42

    cout << "Line 43: resultList after rotating and "
         << "copying:\n"
         << "         ";                             //Line 43
    copy(resultList.begin(), resultList.end(), 
         screen);                                    //Line 44
    cout << endl;                                    //Line 45

    return 0;                                        //Line 46
}                                                    //Line 47
