#include<iostream>
using namespace std;

class CircularQueue {
    int *arr;
    int currsize,cap;
    int f,r;

    public:
    CircularQueue (int size){
        cap=size;
        arr=new int[cap];
        f=0;
        r=-1; currsize=0;
    }

    void enqueue(int data) {
        if(currsize == cap){
            cout<<"Circular Queue is full ";
            return;
        }
        r=(r+1)%cap;
        arr[r]=data;
        currsize++;
    }

    void dequeue (){
        if(currsize == 0) {
            cout<<"Circular Queue is empty ";
            return;
        }
        f=(f+1)%cap;
        currsize--;
    }

    int front() {
        if(currsize==0){
            cout<<"Queue is empty";
            return;
        }
        return arr[f];
    }

        bool empty (){
            return currsize==0;
        }
    void print() {
        for(int i=0;i<cap;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main () {
CircularQueue cq(3);
cq.enqueue(1);
cq.enqueue(2);
cq.enqueue(3);
cq.dequeue();
cq.enqueue(4);

// cq.print();

while(!cq.empty()){
    cout<<cq.front()<<" ";
    cq.dequeue();
}
cout<<endl;
return 0;
}
