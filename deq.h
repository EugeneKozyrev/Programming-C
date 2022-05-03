Суть задания. 
1. Изучить особенность структуры данных Дэк. 
2. Взятб за основу статич. не расширяемый массив с фиксированным размером в качестве основы для класса. 
3. Реализовать данный класс с учетом добавления и удаления всех операций за константное время. 
4. Предусмотреть метожы печати дека в обоих направлениях. 
5. Определения кол ва элементов . 
6. Удаления всех элементов или сброс дека.
    
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
