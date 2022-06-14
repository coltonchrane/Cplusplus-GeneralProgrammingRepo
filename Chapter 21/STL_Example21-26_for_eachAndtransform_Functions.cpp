//STL Functions for_each and transform
  
#include <iostream>                                 //Line 1
#include <cctype>                                   //Line 2
#include <algorithm>                                //Line 3
#include <iterator>                                 //Line 4
#include <vector>                                   //Line 5
 
using namespace std;                                //Line 6

void doubleNum(int& num);                           //Line 7

int main()                                          //Line 8
{                                                   //Line 9
    vector<char>  charList = { 'a', 'b', 'c', 
                               'd', 'e' };          //Line 10

    ostream_iterator<char> screen(cout, " ");       //Line 11

    cout << "Line 12: cList: ";                     //Line 12
    copy(charList.begin(), charList.end(), screen); //Line 13
    cout << endl;                                   //Line 14

        //transform
    transform(charList.begin(), charList.end(),
              charList.begin(), toupper);           //Line 15

    cout << "Line 16: cList after changing all "
         << "lowercase letters to \n"
         << "        uppercase: ";                  //Line 16
    copy(charList.begin(), charList.end(), screen); //Line 17
    cout << endl;                                   //Line 18

    int list[7] = { 2, 8, 5, 1, 7, 11, 3 };         //Line 19

    ostream_iterator<int> screenOut(cout, " ");     //Line 20

    cout << "Line 21: list: ";                      //Line 21
    copy(list, list + 7, screenOut);                //Line 22
    cout << endl;                                   //Line 23

    cout << "Line 24: The effect of for_each "
         << "function:\n         ";                 //Line 24

       //for_each
    for_each(list, list + 7, doubleNum);            //Line 25
    cout << endl;                                   //Line 26

    cout << "Line 27: list after a call to "
         << "for_each function:\n         ";        //Line 27
    copy(list, list + 7, screenOut);                //Line 28
    cout << endl;                                   //Line 29

    return 0;                                       //Line 30
}                                                   //Line 31

void doubleNum(int& num)                            //Line 32
{                                                   //Line 33
    num = 2 * num;                                  //Line 34

    cout << num << " ";                             //Line 35
}                                                   //Line 36
