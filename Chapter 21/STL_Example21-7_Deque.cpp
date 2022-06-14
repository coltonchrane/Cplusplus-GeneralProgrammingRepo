  
//deque Example
#include <iostream>                                   //Line 1
#include <deque>                                      //Line 2
#include <algorithm>                                  //Line 3
#include <iterator>                                   //Line 4

using namespace std;                                  //Line 5

int main()                                            //Line 6
{                                                     //Line 7
    deque<int> intDeq = { 13, 75, 28, 35 };           //Line 8
    ostream_iterator<int> screen(cout, " ");          //Line 9

    cout << "Line 10: intDeq: ";                      //Line 10
    copy(intDeq.begin(), intDeq.end(), screen);       //Line 11
    cout << endl;                                     //Line 12

    intDeq.push_front(0);                             //Line 13
    intDeq.push_back(100);                            //Line 14

    cout << "Line 15: After adding two more "
         << "elements, one at the front " << endl
         << "         and one at the back, intDeq: "; //Line 15
    copy(intDeq.begin(), intDeq.end(), screen);       //Line 16
    cout << endl;                                     //Line 17

    intDeq.pop_front();                               //Line 18
    intDeq.pop_front();                               //Line 19

    cout << "Line 20: After removing the first "
         << "two elements, " << endl
         << "         intDeq: ";                      //Line 20
    copy(intDeq.begin(), intDeq.end(), screen);       //Line 21
    cout << endl;                                     //Line 22

    intDeq.pop_back();                                //Line 23
    intDeq.pop_back();                                //Line 24

    cout << "Line 25: After removing the last "
         << "two elements, " << endl
         << "         intDeq = ";                     //Line 25
    copy(intDeq.begin(), intDeq.end(), screen);       //Line 26
    cout << endl;                                     //Line 27

    deque<int>::iterator deqIt;                       //Line 28

    deqIt = intDeq.begin();                           //Line 29
    ++deqIt;                 //deqIt points to the
                             //second element         //Line 30

    intDeq.insert(deqIt, 444);  //Insert 444 at the
                                //location deqIt      //Line 31

    cout << "Line 32: After inserting 444, "
         << "intDeq:  ";                              //Line 32
    copy(intDeq.begin(), intDeq.end(), screen);       //Line 33
    cout << endl;                                     //Line 34

    intDeq.assign(2, 45);                             //Line 36

    cout << "Line 36: After assigning two "
         << "copies of 45, intDeq: ";                 //Line 36
    copy(intDeq.begin(), intDeq.end(), screen);       //Line 37
    cout << endl;                                     //Line 38

    intDeq.push_front(-10);                           //Line 39
    intDeq.push_back(-999);                           //Line 40

    cout << "Line 41: After inserting two "
         << "elements, one at the front " << endl
         << "         and one at the back, intDeq: "; //Line 41
    copy(intDeq.begin(), intDeq.end(), screen);       //Line 42
    cout << endl;                                     //Line 43

    return 0;                                         //Line 44
}                                                     //Line 45
