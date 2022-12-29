// Create a function in a dynamic array to return the capacity of the array.
#include <iostream>
using namespace std;
class Array
{
private:
    int *arr;
    int capacity;
    int size;

public:
    Array()
    {
        arr = new int[1];
        capacity = 1;
        size = 0;
    }
    ~Array()
    {
        delete[] arr;
        size = 0;
        capacity = 0;
    }
    int getSize()
    {
        return size;
    }
    int getCapacity()
    {
        return capacity;
    }
    void sort()
    {
        int n = size-1;
        while(n)
        {
            for(int i=0; i<size-1; i++)
            {
                if(arr[i]>arr[i+1])
                {
                    int temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                }
            }
            n--;
        }
    }
    void reverse()
    {
        int temp;
        for(int i=0; i<5; i++)
        {
            temp = arr[i];
            arr[i] = arr[9 - i];
            arr[9 - i] = temp;
        }
    }
    int search(int value)
    {
        for(int i=0; i<10; i++)
        {
            if(arr[i]==value)
            return i;
        }
        return -1;
    }
    void srinkToFit()
    {
        int *temp = new int[size];
        for(int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }
        delete []arr;
        arr = temp;
        capacity = size;
    }
    void del(int index)
    {
        for(int i = index + 1; i < size; i++)
        {
            arr[i-1] = arr[i];
        }
        size--;
    }
    void resize()
    {
        int *temp = new int[capacity * 2];
        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
        capacity = capacity * 2;
    }
    void insertAt(int index, int value)
    {
        if (size == capacity)
        {
            resize();
        }
        if(index >= capacity || index < 0)
        {
            cout<<"Memory not found!\n";
        }
        for(int i = size-1; i>=index; i--)
        {
            arr[i+1] = arr[i];
        }
        arr[index] = value;
        size++;
    }
    void showData()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout<<"Capacity = "<<capacity<<"  Size = "<<size<<endl;
    }
};
int main()
{
    Array a1;
    a1.insertAt(0,1);
    a1.insertAt(1,5);
    a1.insertAt(2,6);
    a1.insertAt(3,7);
    a1.insertAt(4,3);
    a1.insertAt(2,10);
    a1.showData();
    a1.del(2);
    a1.showData();
    a1.srinkToFit();
    a1.showData();
    return 0;
}