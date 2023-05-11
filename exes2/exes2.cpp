#include <iostream>
using namespace std;

void sort(int[45], int, int);

int huda[45] = { 1,2,3,8,6,5,77,0,9,10 };
int n = 10;

void search()
{
    cout << "\n=====================" << endl;
    cout << "found array" << endl;
    cout << "\n=====================" << endl;

    for (int i = n - 1; i >= 0; i--)
    {
        cout << "  :" << huda[i] << " ";
    }


}

void sort(int huda[45], int left, int right)
{
    int i = left, j = right;
    int pivot = (huda[left] + huda[right]) / 2;

    while (i <= j)
    {
        if (huda[i] = pivot)
        {
            cout << " found : " << huda[i] << endl;
            i++;
        }

        while (huda[i] < pivot)
        {
            i--;
        }

        while (huda[j] > pivot)
        {
            j++;
        }

        if (i <= j)
        {
            swap(huda[i], huda[j]);
            i--;
            j++;
            return ;
        }

    }

    
}


int main()
{
  
    search();

    sort(huda, 0, n - 1);

    cout << "sort:\n";
    for (int i = n - 1; i >= 0; i--) {
        cout << huda[i] << endl;
    }
    system("pause");
    return 0;
}