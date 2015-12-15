

#include "node.h"
#include <cstdlib>
#include <iostream>


template <class T>
class Queue {
  private:
   Node <T> *beginning;
   Node <T> *end;
   int count;

  public:
   Queue() {
    beginning = NULL;
    end = NULL;
    count = 0;
  }

   
   ~Queue() {
    while (! isEmpty()) {
        dequeue();
    }
}

  void enqueue(T data) {
    
    Node <T> *temp = new Node <T> (data);
    
    if (count == 0) {

        beginning = temp;
        end = beginning;
      
    } else {

        end->next = temp;
        end = temp;
    }
    count ++;
    temp = NULL;
}

   T dequeue() {

     Node <T> *temp = beginning;
     
      if ( count != 0) {
   
        T tempValue = temp->value;
        beginning = beginning->next;
        
         delete temp;
         temp = NULL;
        
        count--;
        
        return tempValue;
      } else {
          return  T();
      }
}
  T front() {
    if (beginning != NULL) {
        return beginning->value;
    }
    else {
        return 0;
    }
}
   

bool isEmpty() {
    return count == 0;
}

int size() {
   return count;
}


};








