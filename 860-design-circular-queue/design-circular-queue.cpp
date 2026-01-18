class MyCircularQueue {
public:

    int front,rear;
    int *arr;
    int size;
    MyCircularQueue(int k) {
        size=k;
        arr=new int[k];
        front=-1;
        rear=-1;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;

        if(isEmpty())
        {
            rear=front=0;
        }
        arr[rear]=value;
        rear=(rear+1)%size;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;

        if(front==(rear-1+size)%size)
        {
            front=rear=-1;
        }
        else
        front=(front+1)%size;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return arr[front];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return arr[(rear-1+size)%size];
    }
    
    bool isEmpty() {
        return front==-1;
    }
    
    bool isFull() {
        return front==rear && front!=-1;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */