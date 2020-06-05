#include <iostream>

using namespace std;

struct Point2D
{
    float x;
    float y;
    Point2D *prev;
    Point2D *next;
};

Point2D* BuildPolygon( int n)
{
    Point2D *Head = NULL;
    Point2D *Newnode=NULL,*temp=NULL;
    for(int i=0; i<n;i++)
    {

        Newnode = new Point2D;
        cout << "Enter x cordinate: "; cin>> Newnode->x;
        cout << "Enter y cordinate: "; cin>> Newnode->y;
        cout<<endl;
        if (Head==NULL)
        {

            //intializing the node
            Head=Newnode;
            Newnode->next=Head;
            Newnode->prev=Head;

        }
        else
        {

            //intializing the node for second iteration

            Newnode-> prev = Head -> prev;
            Head -> prev -> next = Newnode;
            Newnode->next=Head;
            Head -> prev = Newnode;
        }
    }
    return Head;

}
//void Readnode()
void display(Point2D *Head, int n)
{
    Point2D *p=Head;
    for(int i=0; i<n;i++)
    {
          cout << "Point at position:"<<i;
          cout<<endl;cout<<endl;
        cout << "Current Points: " << endl;
        cout <<"x: " << p->x ;
        cout <<", y: " << p->y << endl;
        cout << "next Points: " << endl;
        cout <<"x: " << p->next->x ;
        cout <<", y: " << p->next->y << endl;
        cout << "Previous Points: " << endl;
        cout <<"x: " << p->prev->x ;
        cout <<", y: " << p->prev->y << endl;
        p=p->next;
    }
}

int main()
{
    int n;
    cout<<"Enter the no of points: ";

    cin>>n;
    Point2D *Head;
    Head = BuildPolygon(n);
    display(Head,3);
}
