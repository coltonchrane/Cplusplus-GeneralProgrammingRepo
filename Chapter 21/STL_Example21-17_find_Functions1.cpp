//STL Functions find and find_if
  
#include <iostream>                                 //Line 1
#include <cctype>                                   //Line 2
#include <algorithm>                                //Line 3
#include <iterator>                                 //Line 4
#include <vector>                                   //Line 5

using namespace std;                                //Line 6

int main()                                          //Line 7
{                                                   //Line 8
    vector<char> charList = { 'a', 'i', 'C', 'd', 
                              'e','f', 'o', 'H',
                              'u', 'j' };           //Line 9
    ostream_iterator<char> screen(cout, " ");       //Line 10

    cout << "Line 11: Character list: ";            //Line 11
    copy(charList.begin(), charList.end(), screen); //Line 12
    cout << endl;                                   //Line 13

    vector<char>::iterator position;                //Line 14

        //find
    position = find(charList.begin(),
                    charList.end(), 'd');           //Line 15

    if (position != charList.end())                 //Line 16
        cout << "Line 17: The element is found "
             << "at position "
             << (position - charList.begin())
             << endl;                               //Line 17
    else                                            //Line 18
        cout << "Line 19: The element is not "
             << "in the list." << endl;             //Line 19

        //find_if
    position = find_if(charList.begin(),
                       charList.end(), isupper);    //Line 20

    if (position != charList.end())                 //Line 21
        cout << "Line 22: The first uppercase "
             << "letter is found at position "
             << (position - charList.begin())
             << endl;                               //Line 22
    else                                            //Line 23
        cout << "Line 24: The element is not "
             << "in the list." << endl;             //Line 24

    return 0;                                       //Line 25
}                                                   //Line 26
