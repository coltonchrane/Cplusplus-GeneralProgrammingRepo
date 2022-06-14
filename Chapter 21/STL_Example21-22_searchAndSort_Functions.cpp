//STL Functions search, search_n, sort, and binary_search
 
#include <iostream>                                   //Line 1
#include <algorithm>                                  //Line 2
#include <iterator>                                   //Line 3
#include <vector>                                     //Line 4

using namespace std;                                  //Line 5

int main()                                            //Line 6
{                                                     //Line 7
    vector<int>  vecList = {12, 34, 56, 34, 34,
                            78, 38, 43, 12, 25,
                            34, 56, 62, 5, 49};       //Line 8
    int list[2] = {34, 56};                           //Line 9

    vector<int>::iterator location;                   //Line 10

    ostream_iterator<int> screenOut(cout, " ");       //Line 11

    cout << "Line 12: vecList: ";                     //Line 12
    copy(vecList.begin(), vecList.end(), screenOut);  //Line 13
    cout << endl;                                     //Line 14

    cout << "Line 15: list: ";                        //Line 15
    copy(list, list + 2, screenOut);                  //Line 16
    cout << endl;                                     //Line 17

        //search
    location = search(vecList.begin(), vecList.end(),
                      list, list + 2);                //Line 18

    if (location != vecList.end())                    //Line 19
        cout << "Line 20: list found in vecList. "
             << "The first occurrence of " << endl
             << "         list in vecList is at "
             << "the position "
             << (location - vecList.begin()) << endl; //Line 20
    else                                              //Line 21
        cout << "Line 22: list is not in vecList."
             << endl;                                 //Line 22

        //search_n
    location = search_n(vecList.begin(),
                        vecList.end(), 2, 34);        //Line 23

    if (location != vecList.end())                    //Line 24
        cout << "Line 25: two consecutive "
             << "occurrences of 34 found in " << endl
             << "         vecList at the position "
             << (location - vecList.begin()) << endl; //Line 25
    else                                              //Line 26
        cout << "Line 27: vecList does not contain "
             << "two consecutive occurrences of 34."
             << endl;                                 //Line 27

        //sort
    sort(vecList.begin(), vecList.end());             //Line 28

    cout << "Line 29: vecList after sorting:"
         << endl << "         ";                      //Line 29
    copy(vecList.begin(), vecList.end(), screenOut);  //Line 30
    cout << endl;                                     //Line 31

        //binary_search
    bool found;                                       //Line 32

    found = binary_search(vecList.begin(),
                          vecList.end(), 78);         //Line 33

    if (found)                                        //Line 34
        cout << "Line 35: 78 found in vecList."
             << endl;                                 //Line 35
    else                                              //Line 36
        cout << "Line 37: 78 not in vecList."
             << endl;                                 //Line 37

    return 0;                                         //Line 38
}                                                     //Line 39

