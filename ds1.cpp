#include <iostream>

#ifdef __cplusplus__


#include <stdlib.h>
#endif
using namespace std;
int main()
{
    int a, i = 0, x, n, ins, pos, size, count, del, find;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    for (x = 0; x < size; x++)
    {
        cout << "Enter " << x + 1 << "th element of array: ";
        cin >> arr[x];
    }
    cout << "Enter your choice of action to perform on array: " << endl;
    cout << "Enter 1 to perform: Display the elements of the linear array" << endl;
    cout << "Enter 2 to perform: Insert a new element" << endl;
    cout << "Enter 3 to perform: Delete an element" << endl;
    cout << "Enter 4 to perform: find the location of a given element" << endl;
    cin >> a;
    if (system("CLS"))
        system("clear");
    switch (a)
    {
    case 1:
    {
        for (i = 0; i < size; i++)
        {
            cout << arr[i] << "\t";
        }
        break;
    }

    case 2:
    {
        cout << "Enter element to insert : ";
        cin >> ins;
        cout << "\nPosition: ";
        cin >> pos;
        for (i = size; i > pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos] = ins;
        cout << "Element inserted successfully" << endl;
        cout << "Now the new array is : \n";
        for (i = 0; i < size + 1; i++)
        {
            cout << arr[i] << "\t";
        }
        break;
    }
    case 3:
    {
        for (i = 0; i < size; i++)
        {
            cout << arr[i] << "\t" << endl;
        }
        cout << "Enter position of element to delete: ";
        cin >> del;
        for (i = 0; i < size; i++)
        {
            if (arr[i] == del)
            {
                for (int j = i; j < (size - 1); j++)
                {
                    arr[j] = arr[j + 1];
                }
                count++;
                break;
            }
        }
        if (count == 0)
        {
            cout << "Element not found, We are Doomed";
        }
        else
        {
            cout << "Element deleted successfully";
            cout << "Now the new array is:\t";
            for (i = 0; i < (size - 1); i++)
            {
                cout << arr[i] << " \t";
            }
            break;
        }
    }
    case 4:
    {
        cout << "Enter element to find in the array: ";
        cin >> find;

        while (i < n)
        {
            if (arr[i] == find)
            {
                break;
            }
            i++;
        }

        if (i < n)
        {
            cout << "Element " << find << " is present at position " << i
             	<< " in the array";
        }
        else
        {
            cout << "Element is not present in the array";
        }
    }

    default:
    {
        cout << "\nProcess Eliminated! You Doomed Earth! BYE BYE!" << endl;
        break;
    }
    }
}
