#include <iostream>
using namespace std;

//This is a change I have made to this file

class queue {
private:
    int front, rear, q[4] ={0,0,0,0};
    
public:
    queue(){
        front = -1;
        rear = -1;
    }

    bool is_full(){
        if(rear >= 3){
            return true;

//This is another change I've made to this file
        }
        else{
            return false;
        }
    }
//this is my second change 

    bool is_empty(){
        if(rear <= -1 && front <= -1){
            return true;
        }
        else{
            return false;
        }
    }

    int enqueue(int item){
        if(!is_full()){
            
            if(rear <= -1){
                rear = 0;
                front = 0;
            }
            else {
                rear++;
            }

            q[rear] = item;
        }
        return item;
    }

    void dequeue(){
        if (!is_empty()){
            if (rear >= 3){
                rear = -1;
                front = -1;
            }
            else {
                front++;
            }
        }
        ;
    }

    int peek(){
        return front;
    }

    void display(){
        cout << endl;
        for (int i = 0; i < 4; i++){
            cout << q[i] << "-";
        }
        cout << endl;
    }
};

int main(){

    queue myqueue;

    while(true){
        cout << endl << "Options:" << endl
             << "1 enqueue\n2 dequeue\n3 peek\n4 is full\n5 is empty\n6 display";

        int choice = 0, item;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cin >> item;
            myqueue.enqueue(item);
            myqueue.display();
            break;

        case 2:
            myqueue.dequeue();
            myqueue.display();
            break;
        case 3:
            cout << myqueue.peek();
            break;
        case 4:
            cout << myqueue.is_full();
            myqueue.display();
            break;
        case 5:
            cout << myqueue.is_empty();
            myqueue.display();
            break;
        case 6:
            myqueue.display();
            break;

        default:
            break;
        }
    }

    // cout << myqueue.is_full() << endl;
    // cout << myqueue.is_empty() << endl;
    
    // cout << myqueue.enqueue(4) << endl;
    // cout << myqueue.enqueue(3) << endl;
    // cout << myqueue.enqueue(2) << endl;
    // cout << myqueue.enqueue(1) << endl;

    // cout << myqueue.is_full() << endl;
    // cout << myqueue.is_empty() << endl;

    // myqueue.dequeue();
    // cout << myqueue.is_full() << endl;

    return 0;
}
