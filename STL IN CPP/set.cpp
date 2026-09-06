#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
/**
 * ? A set is an associative container that stores unique elements
 * ? in sorted order. it typically uses a self-balancing binary search
 * ? tree, such as a RED-BLACK-TREE.
 *
 * @ * Provides O(log n) time complexity for search, insertion, and
 * @   deletion.
 *
 * @ * Maintains sorted elements and supports operations like
 * @   UPPER_BOUND() and LOWER_BOUND().
 *
 * ! Syntax:  set<type> name_set;
 */

int main()
{
    /**
     * ! Declaraction and Initializing a set
     */

    set<int> s = {1, 1, 2, 2, 3, 3};

    cout << "printing a set elem\n";
    for (int num : s)
    {
        cout << num << " ";
    }
    /**
     * ? BASICS OPERATIONS ON SET
     */

    /**
     * ! 1 -> Inserting elements:
     * ? The insert() function add an element to the set if it is not
     * ? already present. time complexity: O(log n).
     *
     * TODO: Duplicate elements are ignored.
     * TODO: Elements are automatically placed according to the sets
     * TODO: ordering rule.
     */
    cout << "\n1-> inseting elements!\n";
    s.insert(4);
    s.insert(4);

    for (auto num : s)
        cout << num << " ";

    /**
     * ! 2 -> Searching elements
     * ? The FIND() and COUNT() functions can be used to check whether
     * ? an element exists in a set. both operations take O(lon n).
     *
     * TODO: find() returns an iterator to the element if found.
     * TODO: otherwise, it returns end().
     *
     * TODO: count() returns 1 if the elements exists and 0 otherwise.
     */
    cout << "\n2-> searchin in set!\n";
    // searchin using find()
    // auto found = find(s.begin(), s.end(), 9);
    auto found = s.find(1);

    if (found != s.end())
    {
        cout << *found << " is found in set" << endl;
    }
    else
    {
        cout << *found << " is not found in set" << endl;
    }

    // searching using count()
    if (s.count(9))
    {
        cout << "ele is present" << endl;
    }
    else
    {
        cout << "ele is not present" << endl;
    }

    /**
     * ! 3 -> Traversing elements in set
     * ? A set can be traversed using a range-based for loop/iterator
     * ? The elem are visited according to the set's ordering rule.
     * ? Traversing all elem take O(n) time.
     */
    cout << "3-> Traversing!\n";

    for (set<int>::iterator it = s.begin(); it != s.end(); ++it)
        cout << *it << " ";

    /**
     * ! 4 -> Deleting elements in set
     * ? The erase() function removes elem from a set. O(log n) time.
     * ? * erase(value) removes the specified elem.
     * ? * erase(iterator) remove the elem pointed to by the iterator.
     */
    cout << "\n4-> Deleting elements!\n";

    s.erase(s.begin()); // deleting first ele
    s.erase(2);         // deleting 2 in the set

    for (auto i : s)
        cout << i << " ";

    return 0;
}