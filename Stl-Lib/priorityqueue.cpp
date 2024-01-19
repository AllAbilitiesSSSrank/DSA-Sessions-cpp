#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>pq; //Max heap
    pq.push(5);
    pq.push(10);
    pq.push(7);
    
    cout<<pq.top()<<" ";
    pq.pop();
    cout<<pq.top()<<" ";
    pq.pop();
    cout<<pq.top()<<" ";
    pq.pop();
    cout<<pq.top()<<" ";

  //This means it will arrange elements in desending order


  priority_queue<int , vector<int> , greater<int>>pqp; //min heap
      pqp.push(5);
    pqp.push(10);
    pqp.push(7);
    
    cout<<pqp.top()<<" ";
    pqp.pop();
    cout<<pqp.top()<<" ";
    pqp.pop();
    cout<<pqp.top()<<" ";
    pqp.pop();
    cout<<pqp.top()<<" ";

}
