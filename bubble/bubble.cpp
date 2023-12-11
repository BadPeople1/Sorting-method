// bubble.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void Bubble_Sort(int a[], int n)
{
    int i, j, temp;
    for (i = n - 1; i > 0; i--) //執行n-1次
    {
        for (j = 0; j < i; j++)
        {
            if (a[j] > a[j + 1]) //如果n大於n+1,數值交換
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        for (j = 0; j < n; j++) //輸出
        {
            cout << a[j] << " ";
        }
        cout << endl;

    }
}

void Select_Sort(int a[], int n)
{
    int i, j, max, temp;
    for (i = n - 1; i > 0; i--)
    {
        max = i;
        for (j = i - 1; j >= 0; j--)
            if (a[j] > a[max])
                max = j;
        temp = a[max];
        a[max] = a[i];
        a[i] = temp;

        for (j = 0; j < n; j++)
            cout << a[j] << " ";
        cout << endl;
    }
}

void Insert_Sort(int a[], int n)
{
    int i, j, up;
    for (i = 1; i < n; i++)
    {
        up = a[i];
        j = i;
        while (j > 0 && a[j - 1] > up)
        {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = up;

        for (j = 0; j < n; j++)
            cout << a[j] << " ";
        cout << endl;
    }
}

int main()
{
    int arr1[] = { 37,41,19,81,41,25,56,61,49 };
    cout << "泡沫排序" << endl;
    Bubble_Sort(arr1, 9);

    int arr2[] = { 37,61,19,41,81,25,56,41,49 };
    cout << "選擇排序(?)" << endl;
    Select_Sort(arr2, 9);

    int arr3[] = { 37,61,19,41,81,25,56,41,49 };
    cout << "插入排序(?)" << endl;
    Select_Sort(arr3, 9);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
