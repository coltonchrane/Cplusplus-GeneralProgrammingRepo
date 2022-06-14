//STL Functions adjacent_find, merge, and inplace_merge
  
#include <iostream>                                   //Line 1
#include <functional>                                 //Line 2
#include <algorithm>                                  //Line 3
#include <iterator>                                   //Line 4
#include <vector>                                     //Line 5
#include <list>                                       //Line 6

using namespace std;                                  //Line 7

int main()                                            //Line 8
{                                                     //Line 9
    int list1[10] = {1, 3, 5, 7, 9, 0, 2, 4, 6, 8};   //Line 10
    int list2[10] = {0, 1, 1, 2, 3, 4, 4, 5, 6, 6};   //Line 11

    int list3[5] = {0, 2, 4, 6, 8};                   //Line 12
    int list4[5] = {1, 3, 5, 7, 9};                   //Line 13

    list<int> intList(list2, list2 + 10);             //Line 14
    list<int>::iterator listItr;                      //Line 15

    vector<int> vecList(list1, list1 + 10);           //Line 16
    vector<int>::iterator intItr;                     //Line 17

    ostream_iterator<int> screen(cout, " ");          //Line 18

    cout << "Line 19: intList : ";                    //Line 19
    copy(intList.begin(), intList.end(), screen);     //Line 20
    cout << endl;                                     //Line 21

        //adjacent_find
    listItr = adjacent_find(intList.begin(),
                            intList.end());           //Line 22

    if (listItr != intList.end())                     //Line 23
        cout << "Line 24: Adjacent equal "
             << "elements are found " << endl
             << "         The first set of "
             << "adjacent equal elements: "
             << *listItr << endl;                     //Line 24
    else                                              //Line 25
        cout << "Line 26: No adjacent equal "
             << "element found" << endl;              //Line 26

    intList.clear();                                  //Line 27

        //merge
    merge(list3, list3 + 5, list4, list4 + 5,
          back_inserter(intList));                    //Line 28

    cout << "Line 29: intList after merging list3 "
         << "and " << "list4:\n"
         << "         ";                              //Line 29
    copy(intList.begin(), intList.end(), screen);     //Line 30
    cout << endl;                                     //Line 31

        //adjacent_find; second form
    intItr = adjacent_find(vecList.begin(),
                           vecList.end(),
                           greater<int>());           //Line 32

    cout << "Line 33: Last element of first "
         << "sorted sublist: " << *intItr << endl;    //Line 33
    intItr++;                                         //Line 34
    cout << "Line 35: First element of second "
         << "sorted sublist: " << *intItr << endl;    //List 35

    cout << "Line 36: vecList before "
         << "inplace_merge: ";                        //Line 36
    copy(vecList.begin(), vecList.end(), screen);     //Line 37
    cout << endl;                                     //Line 38

        //inplace_merge
    inplace_merge(vecList.begin(), intItr,
                  vecList.end());                     //Line 39

    cout << "Line 40: vecList after inplace_merge: "; //Line 40
    copy(vecList.begin(), vecList.end(), screen);     //Line 41
    cout << endl;                                     //Line 42

    return 0;                                         //Line 43
}                                                     //Line 44
