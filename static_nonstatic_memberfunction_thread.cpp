#include<iostream>
#include<thread>

using namespace std;


class Base
{
    public:
    void run(int x)
    {
        while(x-- > 0)
        {
            
            cout << x << endl;
        }
    }
    static void run1(int x)
    {
        while(x-- > 0)
        {
            
            cout << x << endl;
        }
    }
    
};
 int main()
 {
    Base b;
    std::thread t(&Base::run , &b , 10); //non static call
    t.join();
    
     
     std::thread t1(&Base::run1  , 11); //non static call
     t1.join();
     
     return 0;
 }














