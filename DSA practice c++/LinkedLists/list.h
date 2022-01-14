using namespace std;

class List;

class Node
{


public:
    int data;
    Node *next;

    Node(int d) : data(d), next(NULL) {} //Initialising List New way
    int getdata(){
        return data;
    }
    friend class List;
   
};

class List{
      Node* head;
      Node* tail;
      
     public: 

      List():head(NULL),tail(NULL){}

      Node* begin()
      {
          return head;
      } 

      void push_front(int data)
      {
          if (head==NULL)
          {
              Node * n = new Node(data);
              head = tail = n;
          }
          else{
              Node * n = new Node(data);
              n->next = head;
              head = n;
          }
          
      }

      void push_back(int data)
      {
          if (head==NULL)
          {
              Node * n = new Node(data);
              head = tail = n;
          }
          else 
          {
            Node * n = new Node(data);
            tail->next = n;
            tail = n;
        }
      }

      void insert(int data,int pos)
      {
          if(pos==0)
          {
            push_front(data);
          }

          //otherwise

          else
          {
             Node* temp = head;
             for (int i = 1; i <=pos-1; i++)
             {
                 temp = temp->next;
             }
             Node* n = new Node(data);
                 n->next = temp->next;
                 temp->next = n;
          }
      }
};