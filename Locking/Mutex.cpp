#include<iostream>
#include<shared_mutex>
#include<mutex>
#include<thread>
using namespace std;

std::recursive_mutex mtx;
std::mutex mt;

int res,test;

int fact(int a)
{ 
  mtx.lock();
  if(a==0)
   return 1;
  mtx.unlock(); 
  return a*fact(a-1);
}

int main()
{

 std::thread t1(fact,10);

 std::thread t2(fact,5);
 

/*  cout<<fact(5)<< endl;
  
  std::unique_lock<std::mutex> q(mt);
  res++;
 
  std::unique_lock<std::mutex> p(mt);
  test++;
 */
 t1.join();
 t2.join();
  return 0;
}

