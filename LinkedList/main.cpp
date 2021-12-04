#include <iostream>
#include "LinkedList.h"

int main() {
    LinkedList first;
    first.append(1);
    first.append(2);
    first.append(3);
    first.append(4);
    first.append(5);
    first.append(6);
    first.insert(1,7);
    cout<<first.pop()<<endl;
    first.display();
    cout<<first.pop(10)<<endl;
    first.display();
    return 0;
}
