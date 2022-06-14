//STL Functions remove, remove_if, remove_copy, and
//                remove_copy_if
  
#include <iostream>                                    //Line 1
#include <cctype>                                      //Line 2
#include <algorithm>                                   //Line 3
#include <iterator>                                    //Line 4
#include <vector>                                      //Line 5
 
using namespace std;                                   //Line 6

bool lessThanEqualTo50(int num);                       //Line 7

int main()                                             //Line 8
{                                                      //Line 9
    vector<char> charList = {'A', 'a', 'A', 'B', 'A',
                            'c', 'D', 'e', 'F', 'A'};  //Line 10
    vector<char>::iterator lastElem, newLastElem;      //Line 11

    ostream_iterator<char> screen(cout, " ");          //Line 12

    cout << "Line 13: Character list: ";               //Line 13
    copy(charList.begin(), charList.end(), screen);    //Line 14
    cout << endl;                                      //Line 15

        //remove
    lastElem = remove(charList.begin(),
                      charList.end(), 'A');            //Line 16

    cout << "Line 17: Character list after "
         << "removing A: ";                            //Line 17
    copy(charList.begin(), lastElem, screen);          //Line 18
    cout << endl;                                      //Line 19

        //remove_if
    newLastElem = remove_if(charList.begin(),
                            lastElem, isupper);        //Line 20
    cout << "Line 21: Character list after "
         << "removing the uppercase " << endl
         << "         letters: ";                      //Line 21
    copy(charList.begin(), newLastElem, screen);       //Line 22
    cout << endl;                                      //Line 23

    vector<int>  intList = { 12, 34, 56, 21, 34,
                             78, 34, 55, 12, 25 };     //Line 24
    vector<int>::iterator endElement;                  //Line 25

    ostream_iterator<int> screenOut(cout, " ");        //Line 26

    cout << "Line 27: intList: ";                      //Line 27
    copy(intList.begin(), intList.end(), screenOut);   //Line 28
    cout << endl;                                      //Line 29

    vector<int> temp1(10);                             //Line 30

        //remove_copy
    endElement = remove_copy(intList.begin(),
                             intList.end(),
                             temp1.begin(), 34);       //Line 31

    cout << "Line 32: temp1 list after copying "
         << "all the elements of intList "
         << endl << "         except 34: ";            //Line 32
    copy(temp1.begin(), endElement, screenOut);        //Line 33
    cout << endl;                                      //Line 34

    vector<int> temp2(10, 0);                          //Line 35

        //remove_copy_if
    remove_copy_if(intList.begin(), intList.end(),
                   temp2.begin(), lessThanEqualTo50);  //Line 36

    cout << "Line 37: temp2 after copying all the "
         << "elements of intList except " << endl
         << "         numbers less than 50: ";         //Line 37
    copy(temp2.begin(), temp2.end(), screenOut);       //Line 38
    cout << endl;                                      //Line 39

    return 0;                                          //Line 40
}                                                      //Line 41

bool lessThanEqualTo50(int num)                        //Line 42
{                                                      //Line 43
    return (num <= 50);                                //Line 44
}                                                      //Line 45
