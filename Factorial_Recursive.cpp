#include<iostream>
using namespace std;

int inst=0;

int factorial(int n) {
  if(n > 1){
    inst++;
    return n * factorial(n - 1);
    }
  else{
    inst++;
    return 1;
    }
}

int main() {

  int n;

  inst++;
  cout<<"Enter a number to get factorial: ";

  inst++;
  cin >> n;

  inst++;
  cout << "Factorial of " << n << " is :" << factorial(n)<<endl;

  inst++;
  cout<<"The Number of Instructions Executed are: "<<inst;

  return 0;
}


