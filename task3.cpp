#include <winsock2.h>
#include <iostream>
#include <queue>
#include <vector>
#include<unordered_map>
  using namespace std;


 
int main(){
  setlocale(LC_ALL, ".UTF-8");
  setlocale(LC_ALL, ".UTF-8");
  SetConsoleCP(65001);       
  SetConsoleOutputCP(65001); 

  int stream[] = {1, 2, 1, 3, 2};
  int n = sizeof(stream)/sizeof(stream);

  queue<int> q;
  unordered_map<int, int> freq;

  for(int i = 0; i < n; i++){
    int x = stream[i];
    freq[x]++;
    q.push(x);

    while(!q.empty() && freq[q.front()] > 1){
      q.pop();
    }

    if(!q.empty()){
      cout << q.front() << " ";
    } else {
      cout << -1 << " ";

    }
  }

}
