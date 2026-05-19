*******************************************************************************/
#include <iostream>
#include<chrono>
#include<thread>
#include<mutex>
using namespace std;
std::mutex m;
int i = 0; // as it is global variable both thread trying to access the same variable
void run() // protected session call critial session from race condition where two thread accesing same data
{ 
   m.lock(); // m.try_lock() - if you dont want to block the thread in that case use try_lock
    ++i;
   m.unlock();
    
};

int main()
{
    std::thread t1(run); 
    std::thread t2(run);
    cout << "main start" << endl;
    
    t1.join();
    cout << i << endl;
    t2.join();
   
    cout << i << endl;
    return 0;
}
