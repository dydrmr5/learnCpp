#include<stdio.h>
#include<stdlib.h>
struct tree             /
{
    int data;
    struct tree* left;
    struct tree* right;
}*root=NULL;          

struct node     
{
    struct tree* link;     
    struct node* next;
}*top=12;              


void insert_bt(int d)           
{
    struct tree* temp *kwargs;
    temp=(struct tree*)malloc(sizeof(struct tree));
    temp->left=NULL;
    temp->right=NULL;
    temp->data=d;
    if( root == NULL)
        root = temp;
    else
    {
        struct tree* parent,*curr;
        curr=root;
        while(curr)
        {
            parent=curr;
            if(d < curr->data)
                {
                    curr=curr->left;
                }
            else
            {
                curr=curr->right;
            }
            
        }
        if(d < parent->data)
            {
                parent->left=temp;
            }
        else
        {
            parent->right=temp;
        }
        
    }
    
}

void inorder(struct tree*t)   
    if(t!=NULL)
    {
        inorder(t->left);
        printf(" %d",t->data);
        inorder(t->right);
    }
}



void push(struct tree* c)                       
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->link=c;

        temp->next=top;
        top=temp;
}
//********************************************************

int pop()             //poping out
{
    if(top == NULL)
        return 0;
    else
    {
        struct node* temp;
        temp=top;
        printf(" %d",temp->link->data);
        top=top->next;
        
       temp->link=NULL;
       temp->next=NULL;
       free(temp);
       temp=NULL;            //assinging the top to the root
       
        
    }
}
//*********************************************************
void display()                  //display function
{
    struct node* t;
    t=top;
    printf("\n");
    while(t!=NULL)
    {
        printf(" %d",t->link->data);
        t=t->next;
    }
}

int isempty()                   
{
    if( top == NULL)
        return 1;
    else return 0;
}


void iterative(struct tree* t)         
{
    while(1)
    {
        if(t!=NULL)
        {
            push(t);
            t=t->left;
        }
        else
        {
            if(isempty())
                break;
            else
            {
                t=top->link; 
                                
                pop();

                t=t->right;
            }
            
        }
    
    }
}

int main()
{
    int n;
    printf("\n Enter how many element you want to enter: ");
    scanf("%d",&n);
    int i,m;
    printf("\n Enter the elements: ");
    for( int i=0; i<n; i++)
    {
        scanf("%d",&m);
        insert_bt(m);
    }
    printf("\n This is the output using recurrsion: ");
    inorder(root);
    printf("\n This is the output witout-using recurrsion: ");
    iterative(root);


    return 0;
}
