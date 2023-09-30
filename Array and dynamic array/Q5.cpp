/*Create a function in Array to check the size of an array*/
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

};
int main()
{
    arrray<int> a1;
    a1.insert(5, 2);
    a1.insert(4, 1);
    a1.insert(13, 0);
    a1.insert(2, 3);
    a1.insert(11, 4);
    // cout << a1.getElement(2);
    cout<<"size="<<a1.getSize()<<endl;
   
    return 0;
}