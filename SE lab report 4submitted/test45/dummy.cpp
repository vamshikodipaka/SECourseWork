#include <iostream>
using namespace std;
struct Point2D
{
    char name[50];
    float x;
    float y;
};
void display(Point2D p1){
    cout << "Point Name: " << p1.name << endl;
    cout <<"x: " << p1.x << endl;
    cout <<"y: " << p1.y << endl;
}
void display(Point2D);
void display1(Point2D (*ptr)){
    cout << "Point Name: " << (*ptr).name << endl;
    cout <<"x: " << (*ptr).x << endl;
    cout <<"y: " << (*ptr).y << endl;
}
void display1(Point2D);

void BuildPoint(Point2D (*ptr)){

    cout << "Enter Point name: ";   cin.get((*ptr).name, 50);
    cout << "Enter x cordinate: ";  cin >> (*ptr).x;
    cout << "Enter y cordinate: ";  cin >> (*ptr).y;
}
    void BuildPoint(Point2D);

main()
{
    Point2D *ptr, p1,*ptr2;
    cout << "Enter Point name: ";   cin.get(p1.name, 50);
    cout << "Enter x cordinate: ";  cin >> p1.x;
    cout << "Enter y cordinate: ";  cin >> p1.y;
 //display point2d--------------------
    cout << "\nDisplaying Point Information." << endl;
  display(p1);
    cout << endl;
    ptr = &p1;
  BuildPoint(ptr);
//display point2d by pointers--------------------

  cout << "Displaying point information by pointers." << endl;
  display(*ptr);
  //cout << (*ptr).name << "  " << (*ptr).x << " "<< (*ptr).y << " ";
   cout << endl;

}




#include <iostream>
using namespace std;
struct Point2D
{
    string name;
    float x;
    float y;
};
void display(Point2D p1){
    cout << "Point Name: " << p1.name << endl;
    cout <<"x: " << p1.x << endl;
    cout <<"y: " << p1.y << endl;
}
void display(Point2D);
void display1(Point2D (*ptr)){
    cout << "Point Name: " << (*ptr).name << endl;
    cout <<"x: " << (*ptr).x << endl;
    cout <<"y: " << (*ptr).y << endl;
}
void display1(Point2D);

 void BuildPoint(Point2D);
void BuildPoint(Point2D (*p2)){
    cout << "Enter Point name: ";
   cin.get(p2->name); cout << endl;
    cout << "Enter x cordinate: ";
    cin >> (p2->x);
    cout << "Enter y cordinate: ";
    cin >> (p2->y); cout << endl;
}

main()
{
    Point2D *ptr, p1, *ptr2, p2;
   // Point2D dummy={"a",10,9};
    Point2D dummy;
    dummy.name = "dummy";
    dummy.x = 10.3;
    dummy.y = 9.88;
    cout << "Enter Point name: ";   cin.get(p1.name);
    cout << "Enter x cordinate: ";  cin >> p1.x;
    cout << "Enter y cordinate: ";  cin >> p1.y;
 //display point2d--------------------
    cout << "\nDisplaying Point Information." << endl;
    display(p1);
    cout << endl;
//display point2d by pointer1--------------------
     ptr = &p1;
    cout << "Displaying point information by pointers." << endl;
    display1(ptr);
  //cout << (*ptr).name << "  " << (*ptr).x << " "<< (*ptr).y << " ";
    cout << endl;

     ptr2 = &p2;
 //Reading Point2D Information by pointer2---------------
   cout << "\nReading Point Information by pointer2." << endl;
    BuildPoint(ptr2);
    cout << endl;
 //display point2d by pointer2--------------------
     cout << "Displaying point information by pointers." << endl;
     display1(ptr2);
     //cout << (*ptr).name << "  " << (*ptr).x << " "<< (*ptr).y << " ";
     cout << endl;


       cout << " dummy Point name: " <<dummy.name<< endl;;
       cout << " dummy x cordinate: "<<dummy.x<<endl;
       cout << " dummy y cordinate: "<<dummy.y<<endl;
}
