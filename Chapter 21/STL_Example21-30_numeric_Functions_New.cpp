//Numeric algorithms: accumulate, adjacent_difference,
//                    inner_product, and partial_sum
  
#include <iostream>                                   //Line 1
#include <algorithm>                                  //Line 2
#include <numeric>                                    //Line 3
#include <iterator>                                   //Line 4
#include <vector>                                     //Line 5
#include <functional>                                 //Line 6

using namespace std;                                  //Line 7

void print(vector<int>  vList);                       //Line 8

int main()                                            //Line 9
{                                                     //Line 10
    int list[8] = {1, 2, 3, 4, 5, 6, 7, 8};           //Line 11

    vector<int> vecList(list, list + 8);              //Line 12
    vector<int> newVList(8);                          //Line 13

    cout << "Line 14: vecList: ";                     //Line 14
    print(vecList);                                   //Line 15

        //accumulate function
    int sum = accumulate(vecList.begin(),
                         vecList.end(), 0);           //Line 16

    cout << "Line 17: Sum of the elements of "
         << "vecList = " << sum << endl;              //Line 17

    int product = accumulate(vecList.begin(),
                             vecList.end(),
                             1, multiplies<int>());   //Line 18

    cout << "Line 9: Product of the elements of "
         << "vecList = " << product << endl;          //Line 19

        //adjacent_difference function
    adjacent_difference(vecList.begin(),
                        vecList.end(),
                        newVList.begin());            //Line 20

    cout << "Line 21: newVList: ";                    //Line 21
    print(newVList);                                  //Line 22

    adjacent_difference(vecList.begin(), vecList.end(),
                        newVList.begin(),
                        multiplies<int>());           //Line 23

    cout << "Line 24: newVList: ";                    //Line 24
    print(newVList);                                  //Line 25

        //inner_product function
    sum = inner_product(vecList.begin(), vecList.end(),
                        newVList.begin(), 0);         //Line 26

    cout << "Line 27: Inner product of vecList "
         << "and newVList: " << sum << endl;          //Line 27

    sum = inner_product(vecList.begin(), vecList.end(),
                        newVList.begin(), 0,
                        plus<int>(), minus<int>());   //Line 28

    cout << "Line 29: Inner product of vecList and "
         << "newVList, using - for *: "
         << sum << endl;                              //Line 29

        //partial_sum function
    partial_sum(vecList.begin(), vecList.end(),
                newVList.begin());                    //Line 30

    cout << "Line 31: newVList with partial sum : ";  //Line 31
    print(newVList);                                  //Line 32

        //partial_sum: the default + is replaced by *
    partial_sum(vecList.begin(), vecList.end(),
                newVList.begin(), multiplies<int>()); //Line 33

    cout << "Line 34: newVList with partial "
         << "multiplication: " << endl
         << "         ";                              //Line 34
    print(newVList);                                  //Line 35

    return 0;                                         //Line 36
}                                                     //Line 37

void print(vector<int> vList)                         //Line 38
{                                                     //Line 39
    ostream_iterator<int> screenOut(cout, " ");       //Line 40

    copy(vList.begin(), vList.end(), screenOut);      //Line 41
    cout << endl;                                     //Line 42
}                                                     //Line 43
