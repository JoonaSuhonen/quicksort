#include <iostream>
using namespace std;



int Partition(int arr[], int start, int end)
{
    int pivot = arr[end];
    int pIndex = start;

    for(int i = start; i < end; i++)
    {
        if(arr[i]<pivot)
        {
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
        }
    }

    int temp = arr[end];
    arr[end] = arr[pIndex];
    arr[pIndex] = temp;

    return pIndex;
}

void QuickSort(int arr[], int start, int end)
{
    if(start<end)
    {
        int p = Partition(arr, start, end);
        QuickSort(arr, start, (p-1));
        QuickSort(arr, (p+1), end);
    }
}


int main()
{
    int size=0;
    cout<<"Anna arrayn koko: "<<endl;
    cin>>size;
    int myarray[size];

    cout<<"Anna "<<size<<" numeroa: "<<endl;
    for(int i=0; i<size; i++)
    {
        cin>>myarray[i];
    }
    cout<<"Ennen quicksorrtia:"<<endl;
    for(int i =0;i<size;i++)
    {
        cout<<myarray[i]<<"";
    }
    cout<<endl;
    
    QuickSort(myarray,0,(size-1));

    cout<<"Quicksortin tulos:"<<endl;
    for(int i=0; i < size; i++)
    {
        cout<<myarray[i]<<"";
    }

    return 0;
}
