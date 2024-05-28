#include <iostream>
#include <string>
#include <vector>

using namespace std;


bool binary_search(vector<int> list, int element) {

    int length = list.size();

    int start = 0;
    int end = length - 1;
    
    for(int i = 0; i < length; i++) {

      int mid = (start + end)/2;

      if(list[mid] == element) {
        return true;
      } 
      
      if(list[mid] < element) {
          start = mid + 1;
        } else {
          end = mid - 1;
        }
      }

    return false;
}


int main() {

  vector<int> list = {1, 3, 6, 8, 10};

  cout << binary_search(list, 6);
  cout << binary_search(list, 5);
  cout << binary_search(list, 10);
  cout << binary_search(list, 1);
  cout << binary_search(list, 7);

  return 0;
  
}