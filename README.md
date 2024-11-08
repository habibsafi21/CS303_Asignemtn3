![assighment 3](https://github.com/user-attachments/assets/c8a20bbd-b943-4198-9d87-8a9c4581e8ab)

File 1: main.cpp - Queue Implementation
Code for Queue Implementation
This file will define a Queue class with the methods we need.

#include <iostream>
#include <queue>

template <typename T>
class Queue {
private:
   std::queue<T> q;

public:
   void push(T value) {
       q.push(value);
   }

   void pop() {
       if (!q.empty()) {
           q.pop();
       }
   }

   T front() {
       return q.front();
   }

   bool empty() {
       return q.empty();
   }

   void moveFrontToRear() {
       if (!q.empty()) {
           T frontElement = q.front();
           q.pop();
           q.push(frontElement);
       }
   }

   void displayQueue() {
       std::queue<T> tempQueue = q;
       while (!tempQueue.empty()) {
           std::cout << tempQueue.front() << " ";
           tempQueue.pop();
       }
       std::cout << std::endl;
   }
};

int main() {
   Queue<int> queue;
   for (int i = 1; i <= 10; i++) {
       queue.push(i);
   }

   std::cout << "Initial Queue: ";
   queue.displayQueue();

   queue.moveFrontToRear();

   std::cout << "After moving front to rear: ";
   queue.displayQueue();

   return 0;
}

This code defines a generic Queue class using std::queue.
Implements methods push, pop, front, empty, and moveFrontToRear.
The displayQueue function is for displaying the elements of the queue.

File 2: header.h file - Recursive Linear Search in a VectorCode for Recursive Linear SearchThis file will contain the recursive linear search function in a vector.

#include <iostream>
#include <vector>

template <typename T>
int recursiveLinearSearch(const std::vector<T>& items, T target, size_t pos_first = 0) {
   if (pos_first >= items.size()) return -1;
   if (items[pos_first] == target) return pos_first;
   return recursiveLinearSearch(items, target, pos_first + 1);
}

int main() {
   std::vector<int> items = {10, 20, 30, 40, 50, 60};
   int target = 30;

   int index = recursiveLinearSearch(items, target);
   if (index != -1) {
       std::cout << "Target found at index: " << index << std::endl;
   } else {
       std::cout << "Target not found" << std::endl;
   }

   return 0;
}
 
This code uses recursion to perform a linear search and searches for target and returns its position if found, otherwise -1.


File 3: InsertionSort.cpp - Insertion Sort for Partially Sorted Vector Code for Insertion Sort This file implements the insertion sort algorithm

#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr) {
   for (size_t i = 1; i < arr.size(); ++i) {
       int key = arr[i];
       int j = i - 1;
       
       while (j >= 0 && arr[j] > key) {
           arr[j + 1] = arr[j];
           j--;
       }
       arr[j + 1] = key;
   }
}

int main() {
   std::vector<int> arr = {20, 65, 30, 10};

   std::cout << "Original Array: ";
   for (int num : arr) std::cout << num << " ";
   std::cout << std::endl;

   insertionSort(arr);

   std::cout << "Sorted Array: ";
   for (int num : arr) std::cout << num << " ";
   std::cout << std::endl;

   return 0;
}

This code sorts a vector using insertion sort.Displays the array before and after sorting.

