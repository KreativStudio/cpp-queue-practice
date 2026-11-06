#include <winsock2.h>
#include <iostream>
#include <queue>
#include <vector>
  using namespace std;


 
int main(){
  setlocale(LC_ALL, ".UTF-8");
  setlocale(LC_ALL, ".UTF-8");
  SetConsoleCP(65001);       
  SetConsoleOutputCP(65001); 

  
 queue<int> q;
 q.push(3); q.push(5); q.push(2);
 int sum = 0;
 int count  = 0;

 while(!q.empty()){
  sum += q.front();
  count++;
  cout << "Клиент " << count << ": обслуживается " << q.front() << " мин, заканчивает на " << sum << " мин" << endl;
  q.pop(); 
 }

}