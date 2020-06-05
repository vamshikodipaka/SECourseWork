#include <iostream>

using namespace std;

struct Point2D
{
    float x;
    float y;
    Point2D *prev;
    Point2D *next;

};
getelement(){
    Point2D *ptr, p1;
    cout << "Creation of a new Point: "<<endl;
    cout << "Enter x insert cordinate: ";  cin >> p1.x;
    cout << "Enter y insert cordinate: ";  cin >> p1.y;
    //display point2d by pointer1--------------------

    return(p1.x,p1.y);
}

Point2D* BuildPolygon( int n)
{
    Point2D *Head = NULL;
    Point2D *Newnode=NULL,*temp=NULL;
    for(int i=0; i<n;i++)
    {

        Newnode = new Point2D;
        cout << "Enter x cordinate: "; cin>> Newnode->x;
        cout << "Enter y cordinate: "; cin>> Newnode->y;

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
        cout<<endl;
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

void display1(Point2D (*ptr)){
    //    cout << "Point Name: " << (*ptr).name << endl;
    cout <<"x: " << (*ptr).x << endl;
    cout <<"y: " << (*ptr).y << endl;
}

void display1(Point2D);

Point2D BuildPoint(Point2D (*p2)){
    //    cout << "Enter Point name: ";
    //    cin.get(p2->name, 50); cout << endl;
    cout << "Enter x cordinate: ";
    cin >> (p2->x);
    cout << "Enter y cordinate: ";
    cin >> (p2->y); cout << endl;
return (*p2);
}

getPosition(){
    int p;
    cout<<"enter insert location of point in polgon";
    cin>>p;
    return(p);
}

/* Point2D* InsertAt( Point2D *r, int c)
{
    r->prev=NULL;
    r->next=NULL;

    for(int i=0; i<c;i++)
    {

       if (Head==NULL)
        {
            //intializing the node
            Head=r;
            Newnode->next=Head;
            Newnode->prev=Head;

        }
        else
        {

            //intializing the node for second iteration

            r-> next = Head;
            Head -> prev= r;
            Head = r;
        }
    }
    return Head;

}

Point2D*  DeleteAt( Point2D *r, int c){
    delete (*r);
};
*/
int main()
{
    int n,c;
    cout<<"Enter the no of points: ";
    cin>>n;
    Point2D *Head;
    Head = BuildPolygon(n);
    display(Head,3);

    Point2D *ptr2, p2,*r;
    ptr2 = &p2;
    //Reading Point2D Information by pointer2---------------
    cout << "\nReading of Point(BuildPoint()) by pointer2." << endl;
    *r=BuildPoint(ptr2);
    cout << endl;
    //display point2d by pointer2--------------------
    cout << "Displaying point info by pointer2. " << endl;
    display1(ptr2);
    //cout << (*ptr).name << "  " << (*ptr).x << " "<< (*ptr).y << " ";
    cout << endl;
    //enter point location to be inserted
 c=   getPosition();
    /*  InsertAt(*r,c);
      //enter point location to be inserted
      DeleteAt(c);
  */
}
