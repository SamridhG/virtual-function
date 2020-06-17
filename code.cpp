#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include<cstring>
class Person{
    public:
    int age;
    string name;
   virtual void putdata()
   {

   }
   virtual void getdata()
   {}
};
class Professor:public Person{
    public:
       int pub;
       int cd;
       static int id;
       Professor()
       {
          cd=++id;
       }
       void getdata()
       {
           cin>>name>>age>>pub;
       }
       void putdata()
       {
           cout<<name<<" "<<age<<" "<<pub<<" "<<cd<<endl;
           
       }
      

};
 int Professor::id = 0;
class Student:public Person{
    public:
       int sum=0;
       int a[6];
       int c;
       static int d;
       Student()
       {
          c=++d;
       }
       void getdata()
       {
           cin>>name>>age;
           for(int y=0;y<6;y++)
           {
               cin>>a[y];
               sum=sum+a[y];
           }
       }
       void putdata()
       {
           cout<<name<<" "<<age<<" "<<sum<<" "<<c<<endl;
           
       }
};
 int Student::d = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
