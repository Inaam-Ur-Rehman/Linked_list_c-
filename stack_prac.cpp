#include <iostream>
using namespace std;
#define MAX 10
int top=-1;
int a[MAX];
void push(int d){
  if(top>=(MAX-1)){
    cout << "Stack Overflow" << '\n';
  }
  else{
    a[++top]=d;
    cout<<d<< " insert successfully"<<'\n';
  }
}
void pop(){
  if(top<=-1){
    cout << "Stack Underflow" << '\n';
  }
  else{
    top--;
    cout << "Poped successfully" << '\n';

  }
}
int peek(){
  
  return a[top];
}
void show(){
  cout << "==================Data is======================" << '\n';
  if(top==-1){
    cout << "Stack is empty" << '\n';
  }
  else{
  for (int i = 0; i <= top; i++) {
    cout<<a[i]<<'\n';
  }
}
}
int main() {

  int choice;
  int data;

  while (choice!=5) {
    cout << "Enter 1 to push : " << '\n';
    cout << "Enter 2 to pop element : " << '\n';
    cout << "Enter 3 to peek element : " << '\n';
    cout << "Enter 4 view data : " << '\n';
    cout << "Enter 5 to exit : " << '\n';
    cin>>choice;
    if (choice==1) {
      cout << "Enter data : " << '\n';
      cin >> data;
      push(data);
    }
    else if (choice==2) {
      pop();

    }
    else if (choice==3) {
      cout<<peek()<<'\n';
    }
    if (choice==4) {
      show();
    }
  }
  return 0;
}
