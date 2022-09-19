
#include <iostream>
#include <list>
#include <cmath>

using namespace std;

int ANDresult(int a, int b)
{

    list<int> l1, l2, l3;
    int r;

    while (a > 0)
    {
        r = a % 2;
        l1.push_front(r);
        a = a / 2;
    }

    while (b > 0)
    {
        r = b % 2;
        l2.push_front(r);
        b = b / 2;
    }

    while (l1.size() != l2.size())
    {

        if (l1.size() > l2.size())
        {
            l2.push_front(0);
        }
        else
        {
            l1.push_front(0);
        }
    }

    list<int>::iterator iter1 = l1.begin();
    list<int>::iterator iter2 = l2.begin();

    while (iter1 != l1.end())
    {
        if (*iter1 == 1 && *iter2 == 1)
        {
            l3.push_back(1);
        }
        else
        {
            l3.push_back(0);
        }
        iter1++;
        iter2++;
    }

    int n = l3.size() - 1;
    int sum = 0;
    int p;
    list<int>::iterator iter3 = l3.begin();
    for (int i = 0; i < l3.size(); i++)
    {
        p = pow(2, n);
        sum += (*iter3 * p);
        iter3++;
        n--;
    }

    return sum;
}

int ORresult(int a, int b)
{

    list<int> l1, l2, l3;
    int r;

    while (a > 0)
    {
        r = a % 2;
        l1.push_front(r);
        a = a / 2;
    }

    while (b > 0)
    {
        r = b % 2;
        l2.push_front(r);
        b = b / 2;
    }

    while (l1.size() != l2.size())
    {

        if (l1.size() > l2.size())
        {
            l2.push_front(0);
        }
        else
        {
            l1.push_front(0);
        }
    }

    list<int>::iterator iter1 = l1.begin();
    list<int>::iterator iter2 = l2.begin();

    while (iter1 != l1.end())
    {
        if (*iter1 == 1 && *iter2 == 1)
        {
            l3.push_back(0);
        }
        else if (*iter1 == 1 || *iter2 == 1)
        {
            l3.push_back(1);
        }
        else
        {
            l3.push_back(0);
        }
        iter1++;
        iter2++;
    }

    int n = l3.size() - 1;
    int sum = 0;
    int p;
    list<int>::iterator iter3 = l3.begin();
    for (int i = 0; i < l3.size(); i++)
    {
        p = pow(2, n);
        sum += (*iter3 * p);
        iter3++;
        n--;
    }

    return sum;
}

int main()
{
    int n;
    cout << "Please enter the total numbers you wish to provide : " << endl;
    cin >> n;
    int arr[n];
    cout << "Please enter the numbers : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x, y, count;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            x = ANDresult(arr[i], arr[j]);
            y = ORresult(arr[i], arr[j]);
            if (x >= y)
            {
                count += 1;
            }
        }
    }

    cout << count;

    return 0;
}