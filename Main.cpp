#include <iostream>
using namespace std;
#include "Node.h"
#include "linkedList.h"

int main()
{
    int z;
    linkedList obj;
    while (true)
    {
        cout << "____________________________" << endl;

        cout << endl;

        cout << "Guide :  " << endl;
        cout << endl;
        cout << "Exit   -> '0' " << endl;
        cout << "Insert -> '1' " << endl;
        cout << "Delete -> '2' " << endl;
        cout << "search -> '3' " << endl;
        cout << "print  -> '4' " << endl;

        cout << endl;
        cout << "____________________________" << endl;
        cout << endl;
        cout << "Your choise is : ";
        cin >> z;

        cout << endl;
        switch (z)
        {
        case 0:
            exit(0);
            break;
        case 1:
            obj.addnode();
            break;
        case 2:
            obj.deleteNode();
            break;
        case 3:
            obj.searchNode();
            break;
        case 4:
            obj.showLinkedList();
            break;
        default:
            cout << "Number is not valid " << endl;
            break;
        }
    }
}
