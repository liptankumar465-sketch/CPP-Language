#include <iostream>
#include <list>      // Header file for using list
#include <algorithm> // use for find()
using namespace std;
/**
 * ? A list in C++ is a sequence container for allows you to store
 * ? elements one after anther.
 *
 * * Implemented as a Doubly linked list and maintains both front and
 * * back for fast operations on both sides.
 *
 * TODO: Data is stored in non - contiguous memory allowing fast
 * TODO: insertion and deletion.
 *
 * ! Declaration list
 * ! list<type> name;
 */

int main()
{
    //------Basics operations--------//
    list<int> l = {4, 2};

    /**
     * ! 1 -> insert():
     * ? is used for fast insertion if the possition iterator is known.
     */
    cout << "1-> inserting element\n";

    l.push_front(5);
    l.push_back(1);
    
    auto it = l.begin(); // atch first ele possition
    advance(it, 2);
    l.insert(it, 3);

    for (auto it = l.begin(); it != l.end(); ++it)
        cout << *it << " "; // 5 4 3 2 1
    cout << endl;

    /**
     * ! 2 -> Accessing elements:
     * ? List do not allow random access.
     * ? The first and last element can be accessed quickly using
     * * fornt() and back() methods:
     */
    cout << "2-> Accessing elements\n";

    cout << "first ele:- " << l.front() << " " << "last ele:- " << l.back() << endl;
    cout << "first posit to 2 next:- " << *next(l.begin(), 2) << endl; // 3

    /**
     * ! 3 -> Updating elements:
     * ? List elements  can be updated by accessing them with an
     * ? iteratot and using (=) to set a new value.
     */
    cout << "3-> Updating elements\n";

    l.front() = 55; // direct update first ele
    l.back() = 11;  // direct update last ele

    auto i = l.begin();
    advance(i, 2);
    *i = 10;

    for (auto i : l)
        cout << i << " "; // 55 4 3 2 11
    cout << endl;

    /**
     * ! 4 -> Finding elements:
     * ? To find an elements in a list, you can use the find()
     * ? function from the <algorithm> library.
     */
    cout << "4-> Finding elements\n";

    // first way
    auto found = find(l.begin(), l.end(), 4);
    if (found != l.end())
        cout << 4 << " is found";
    else
        cout << 4 << " not found";

    cout << endl;

    // second way
    for (auto i : l)
    {
        if (i == 55)
        {
            cout << i << " found";
        }
    }
    cout << endl;

    /**
     * ! 5 -> Traversing elements:
     * ? A list can be traversed using begin(), and end(), iterator in a loop.
     */
    cout << "5-> Traversing elements\n";

    // first way
    for (auto i = l.begin(); i != l.end(); i++)
        cout << *i << " ";
    cout << endl;

    // second way
    for (auto i : l)
        cout << i << " ";
    cout << endl;

    /**
     * ! 6 -> Deleting elements:
     * ? erase(), if deleting possition is known.
     * ? pop_front() and pop_back() is directly delet the first and last elem
     */
    cout << "6-> Deleting elements\n";

    l.pop_front(); // direct deteting first ele
    l.pop_back();  // direct deteting last ele

    auto del = l.begin();
    advance(del, 2);
    l.erase(del);

    for (auto i : l)
        cout << i << " ";
    cout << endl;

    return 0;
}