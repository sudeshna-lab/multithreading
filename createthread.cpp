#include<iostream>
#include<thread>

using namespace std;

void func(int x)
{
    while(x --> 0)
    {
        cout << x << endl;
    }
}

 auto fun = [](int x)
 {
     while(x--> 0)
     {
         cout << x << endl;
     }
 };

int main()
{
    
  //  std::thread t1(func, 10);
   std::thread t2([](int x)
   {
       while(x-- > 0)
       {
           cout << x << endl;
       }
   },5);
    
  //  t1.join();
    t2.join();
    
}

    std::thread t1(func, 10);
   std::thread t2(fun, 5);
    
    t1.join();
    t2.join();
    
}

