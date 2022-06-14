//STL Functions replace, replace_if, replace_copy, and
//              replace_copy_if
 
#include <iostream>                                  //Line 1
#include <cctype>                                    //Line 2
#include <algorithm>                                 //Line 3
#include <iterator>                                  //Line 4
#include <vector>                                    //Line 5
 
using namespace std;                                 //Line 6

bool lessThanEqualTo50(int num);                     //Line 7

int main()                                           //Line 8
{                                                    //Line 9
    vector<char> charList = {'A', 'a', 'A', 'B', 
                             'A', 'c', 'D', 'e',
                             'F', 'A'};              //Line 10

    ostream_iterator<char> screen(cout, " ");        //Line 11

    cout << "Line 12: Character list: ";             //Line 12
    copy(charList.begin(), charList.end(), screen);  //Line 13
    cout << endl;                                    //Line 14

        //replace
    replace(charList.begin(), charList.end(),
            'A', 'Z');                               //Line 15

    cout << "Line 16: Character list after "
         << "replacing A with Z: " << endl
         << "        ";                              //Line 16
    copy(charList.begin(), charList.end(), screen);  //Line 17
    cout << endl;                                    //Line 18

        //replace_if
    replace_if(charList.begin(), charList.end(),
               isupper, '*');                        //Line 19
    cout << "Line 20: Character list after "
         << "replacing the uppercase  " << endl
         << "         letters with *: ";             //Line 20
    copy(charList.begin(), charList.end(), screen);  //Line 21
    cout << endl;                                    //Line 22

    vector<int> intList = {12, 34, 56, 21, 34,
                           78, 34, 55, 12, 25};      //Line 23

    ostream_iterator<int> screenOut(cout, " ");      //Line 24

    cout << "Line 25: intList: ";                    //Line 25
    copy(intList.begin(), intList.end(), screenOut); //Line 26
    cout << endl;                                    //Line 27

    vector<int> temp1(10);                           //Line 28

        //replace_copy
    replace_copy(intList.begin(), intList.end(),
                 temp1.begin(), 34, 0);              //Line 29

    cout << "Line 30: temp1 list after copying "
         << "intList and " << endl
         << "         replacing 34 with 0: ";        //Line 30
    copy(temp1.begin(), temp1.end(), screenOut);     //Line 31
    cout << endl;                                    //Line 32

    vector<int> temp2(10);                           //Line 33

        //replace_copy_if
    replace_copy_if(intList.begin(), intList.end(),
              temp2.begin(), lessThanEqualTo50, 50); //Line 34

    cout << "Line 35: temp2 after copying intList "
         << "and replacing any " << endl
         << "         numbers less than 50 "
          << "with 50: " << endl << "         ";     //Line 35
    copy(temp2.begin(), temp2.end(), screenOut);     //Line 36
    cout << endl;                                    //Line 37

    return 0;                                        //Line 38
}                                                    //Line 39

bool lessThanEqualTo50(int num)                      //Line 40
{                                                    //Line 41
    return (num <= 50);                              //Line 42
}                                                    //Line 43