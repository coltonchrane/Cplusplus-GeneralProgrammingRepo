 
#include <iostream>                             //Line 1
#include <vector>                               //Line 2

using namespace std;                            //Line 3

void doubleList(vector<int> &list);             //Line 4 
void printList(const vector<int> &list);        //Line 5

int main()                                      //Line 6
{                                               //Line 7
    vector<int> intList;                        //Line 8
    
    intList.push_back(13);                      //Line 9
    intList.push_back(75);                      //Line 10
    intList.push_back(28);                      //Line 11
    intList.push_back(35);                      //Line 12

    cout << "intList: ";                        //Line 13
    printList(intList);                         //Line 14

    doubleList(intList);                        //Line 15

    cout << "intList after multiplying each " 
         << "element by 2: ";                   //Line 16
     printList(intList);                        //Line 17

    cout << endl;                               //Line 18

    return 0;                                   //Line 19
}                                               //Line 20

void printList(const vector<int> &list)         //Line 21
{                                               //Line 22
    for (auto p : list)                         //Line 23
        cout << p << " ";                       //Line 24
    cout << endl;                               //Line 25
}                                               //Line 26

void doubleList(vector<int> &list)              //Line 27
{                                               //Line 28
    for (auto &p : list)                        //Line 29
        p = p * 2;                              //Line 30
}                                               //Line 31

