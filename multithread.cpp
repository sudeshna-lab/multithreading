/******************************************************************************

binary odd numbers always end with 1 and binary even number always end with 0
8421 & always give 1 as output when 1 & 1 = 1
*******************************************************************************/
#include <iostream>
#include<thread>
#include<chrono>
#include<algorithm>

using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;

ull oddSum = 0;
ull evenSum = 0;


void findEven(ull start, ull end)
{
    for(ull i=start; i <= end; ++i )
    {
        if((i & 1) == 0){ // bitwise or binary operation evennumber is 0 like 1248
            
            evenSum += i; // evenSum= evenSum+i
        }
        
    }
    
}

void findOdd(ull start, ull end)
{
    for(ull i = start; i<=end;++i)
    {
        if((i& 1) == 1){
             oddSum += i; // oddSum= oddSum+i
        }
        
    }
    
}
    
int main()
{
    
    ull start= 0 , end = 1900000000;
    auto startTime = high_resolution_clock::now();
    
    std::thread t1(findEven,start,end);
    std::thread t2(findOdd,start,end);
    
    t1.join();
    t2.join();
    
   // findEven(start, end);
   // findOdd(start, end);
    auto stopTime = high_resolution_clock::now();
    
    auto duration= duration_cast<microseconds>(stopTime - startTime);
    cout << "oddSum      " << oddSum << endl;
    cout << "evenSum     " << evenSum << endl;
    cout << "duration    " << duration.count()/1000000 << endl;
}



