class Deque{
    private:
        struct Node {
            int item;
            Node *next;
 
            Node( int i, Node *n = NULL) {
                item = i;
                next = n;
            }
        };
 
        int size;
        Node *first;
        Node *last;
 
    public:
        Deque();
        ~Deque();
        int Head() const;
        int Tail() const;
        void push_front(int item);
        void push_back(int item);
        int pop_front();
        int pop_back();
        void printCount();
        void printFront();
};