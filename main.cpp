#include <iostream>
using namespace std;

int sum(int n){
  int sum = 0;
  for(int i = 1; i <= n; i++){
     sum += i;
  }
  return sum;
}

int product(int n){
  int product = 1;
  for(int i = 1; i <= n; i++){
    product *= i;
   }
return product;
}

int main(){

  cout << "Hello world" << endl;
  cout << "please enter a number" << endl;
  int n;
  cin >> n;
  cout << "Sum: " << sum(n) << endl;
  cout << "Product: " << product(n) << endl;

}
