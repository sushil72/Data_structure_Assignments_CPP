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
};
int main()
{
    arrray<int> a1;
    a1.insert(10, 2);
    cout << a1.getElement(2);
    cout<<"size="<<a1.getSize();
    
    return 0;
}