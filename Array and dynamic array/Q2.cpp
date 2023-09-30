/*Create  an array and implement a search function in the array.*/
#include <iostream>
using namespace std;
template <typename T>
class arrray
{
private:
    T arr[100];
    int size = 0;

public:
    void insert(T data, int index)
    {
        if (index >= 100 && index < 0)
            cout << "invalid index ";
        else
        {
            arr[index] = data;
            size++;
        }
    }
    int getSize()
    {
        return size;
    }
    int getElement(int index)
    {
        if (index >= 100 && index < 0)
            cout << "invalid index ";
        else
        {
            return arr[index];
        }
    }
    void  search(int data)
    {
        for(int i=0;i<size;i++)
        if(arr[i]==data)
        {
            cout<<" element found at "<< i<<" index "<<endl;
            break;
        }
       if(i==size)
        cout<<"element not found "<<endl;
    }
};
int main()
{
    arrray<int> a1;
    a1.insert(7, 2);
    a1.insert(55, 1);
    a1.insert(22, 3);
    a1.insert(11, 6);
    a1.insert(1, 8);
    cout << a1.getElement(2);
    cout<<"size="<<a1.getSize();
    a1.search(22);
    
    return 0;
}