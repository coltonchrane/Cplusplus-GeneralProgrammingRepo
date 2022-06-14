//STL functions swap, iter_swap, and swap_ranges
 
#include <iostream>                                  //Line 1
#include <algorithm>                                 //Line 2
#include <vector>                                    //Line 3
#include <iterator>                                  //Line 4

using namespace std;                                 //Line 5

int main()                                           //Line 6
{                                                    //Line 7
    vector<char> charList = {'A', 'B', 'C', 'D', 
                             'F', 'G', 'H', 'I',
                             'J', 'K'};              //Line 8
    vector<char>::iterator charItr;                  //Line 9

    ostream_iterator<char> screen(cout, " ");        //Line 10

    cout << "Line 11: Character list: ";             //Line 11
    copy(charList.begin(), charList.end(), screen);  //Line 12
    cout << endl;                                    //Line 13

    swap(charList[0], charList[1]);                  //Line 14

    cout << "Line 15: Character list after swapping "
         << "the first and second  " << endl
         << "        elements: ";                    //Line 15
    copy(charList.begin(), charList.end(), screen);  //Line 16
    cout << endl;                                    //Line 17

    iter_swap(charList.begin() + 2,
              charList.begin() + 3);                 //Line 18

    cout << "Line 19: Character list after swapping "
         << "the third and fourth " << endl
         << "         elements: ";                   //Line 19

    copy(charList.begin(), charList.end(), screen);  //Line 20
    cout << endl;                                    //Line 21

    charItr = charList.begin() + 4;                  //Line 22
    iter_swap(charItr, charItr + 1);                 //Line 23

    cout << "Line 24: Character list after swapping "
         << "the fifth and sixth " << endl
         << "         elements: ";                   //Line 24
    copy(charList.begin(), charList.end(), screen);  //Line 25
    cout << endl;                                    //Line 26

    int list[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  //Line 27

    vector<int> intList = {1, 2, 3, 4, 5, 6, 7,
                           8, 9, 10};                //Line 28

    ostream_iterator<int> screenOut(cout, " ");      //Line 29

    cout << "Line 30: intList: ";                    //Line 30
    copy(intList.begin(), intList.end(), screenOut); //Line 31
    cout << endl;                                    //Line 32

        //swap_ranges
    swap_ranges(intList.begin(), intList.begin() + 4,
                intList.begin() + 5);                //Line 33

    cout << "Line 34: intList after swapping the "
         << "first four elements " << endl
         << "         with four elements starting "
         << "at the sixth element " << endl
         << "         of intList: ";                 //Line 34
    copy(intList.begin(), intList.end(), screenOut); //Line 35
    cout << endl;                                    //Line 36

    swap_ranges(list, list + 10, intList.begin());   //Line 37

    cout << "Line 38: list and intList after "
         << "swapping their elements " << endl;      //Line 38
    cout << "Line 39: list: ";                       //Line 39
    copy(list, list + 10, screenOut);                //Line 40
    cout << endl;                                    //Line 41
    cout << "List 42: intList: ";                    //Line 42
    copy(intList.begin(), intList.end(), screenOut); //Line 43
    cout << endl;                                    //Line 44

    return 0;                                        //Line 45
}                                                    //Line 46


