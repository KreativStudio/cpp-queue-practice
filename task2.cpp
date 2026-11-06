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

 vector<int> arr;
 while(!q.empty()){
  arr.push_back(q.front());
  q.pop();
 }

 queue<int> q2;

 while(arr.size() != 0){
  q2.push(arr.back());
  arr.pop_back();
 }

 while(!q2.empty()){
  sum += q2.front();
  count++;
  cout << "Клиент " << count << ": обслуживается " << q2.front() << " мин, заканчивает на " << sum << " мин" << endl;
  q2.pop(); 
 }
}