//Author: Marcusw1
#include <cstdlib>

template <class T>
class Node {
	
  public:
  
    Node (T data) {
     next = NULL;
     value = data;	
    }
    
    Node <T> *next;
    T value;
};





