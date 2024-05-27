#include <iostream>
#include <string>

using namespace std;


bool linear_search(int arr[5], int element) {

    for(int i = 0; i < 5; i++) {
      if(arr[i] == element)
        return true;
    }

    return false;
}


int main() {

  int arr[5] = {5, 1, 6, 3, 7};

  cout << linear_search(arr, 8);

  return 0;
  
}