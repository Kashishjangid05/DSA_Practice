// Program to insert an element in queue and show queue is full then delete elements and show queue is empty
#include <iostream>
using namespace std;

int main()
{
    int F = -1, R = -1, max, arr[5];
    max = 4;
    for (int i = R; i < 5; i++)
    {
        if (R == max)
        {
            cout << "queue is full \n";
        }
        else
        {
            if (R == -1)
            {
                R = F = 0;
            }
            else
            {
                R = R + 1;
            }

            cout << "enter ";
            cin >> arr[R];
            cout << "print array " << arr[R] << endl;
        }
    }

    cout << "Queue ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = F; i <= R; i++)
    {
        if (R == -1)
        {
            cout << "queue is empty \n";
        }
        else
        {
            if (R == F)
            {
                cout << "element deleted" << arr[F] << endl;
                R = F = -1;
            }
            else
            {
                cout << "element deleted" << arr[F] << endl;
                F = F + 1;
            }
        }
    }

    cout << "print array \n";
    for (int i = F; i < R; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
