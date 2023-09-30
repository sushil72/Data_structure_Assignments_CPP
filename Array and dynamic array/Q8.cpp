
#include <iostream>
using namespace std;
template <typename T>
class arrray
{
private:
    T *arr;
    int size;
    int capacity;

public:
    arrray()
    {
        arr = new T[1];
        size = 0;
        capacity = 1;
    }

    void insert(T data, int index)
    {
        if (index >= 2)
            resize();
        arr[index] = data;
        size++;
        // cout<<"\nelement inserted succesfully";
    }
    int getSize()
    {

        return size;
    }
    void resize()
    {
        // cout<<"\nsize  :"<<size;
        T *temp = new T[2 * size];
        capacity = 2 * size;
        for (int i = 0; i < size; i++)
            temp[i] = arr[i];

        delete[] arr;
        arr = temp;
    }
    int getCapacity()
    {
        return capacity;
    }
    void printArray()
    {
        cout << endl;
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
    }

    ~arrray()
    {
        delete[] arr;
    }

    void search(T element)
    {
        for (int i = 0; i < size; i++)
            if (element == arr[i])
                cout << "\nElement found on " << i << " index" << endl;
    }

    void sortArray()
    {
        int i, key, j;
        for (i = 0; i < size;i++)
        {
            key = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }

    void reversearray()
    {
        int n=size;
        for(int i=0;i<size/2;i++)
        {
            int c=arr[i];
            arr[i]=arr[n-1];
            arr[n-1]=c;
            n--;
        }
    }
};
int main()
{
    arrray<int> a1;
    a1.insert(5, 0);
    a1.insert(4, 1);
    a1.insert(13, 2);
    a1.insert(2, 3);
    a1.insert(11, 4);
    a1.insert(112, 5);
    a1.insert(111, 6);
    a1.insert(111, 7);
    a1.insert(111, 8);

    cout << "size=" << a1.getSize() << endl;
    cout << "Capacity=" << a1.getCapacity();
    a1.printArray();
    a1.search(112);
    a1.sortArray();
    a1.printArray();
    a1.reversearray();
    a1.printArray();

    return 0;
}