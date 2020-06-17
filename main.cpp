#include <iostream>
#include "Staque.h"
using namespace std;

int main()
{
    Staque list1;
    cout<<"\nPushing numbers: 1, 2, 3, 4, 5, 6, 7, 8, 9"<<endl;
    list1.push(1);
    list1.push(2);
    list1.push(3);
    list1.push(4);
    list1.push(5);
    list1.push(6);
    list1.push(7);
    list1.push(8);
    list1.push(9);

    cout<<list1;


    cout<<"\nCoping Lists ...\n\n";
    Staque list2(list1);

    cout<<"The copied List is: \n";
    cout<<list2;

    cout<<"\nRemoving 2 numbers ... \n\n";
    list1.remove(2);

    cout<<"After deleting the list looks like: \n";
    cout<<list1;


    cout<<"\nCoping Lists ...\n\n";
    Staque list3(list1);

    cout<<"The copied List is: \n";
    cout<<list3;

    char a;
    int b;

    cout<<"\nTo Delete Odd or Even please enter one of the char given below:\n 1.For Odd - 'o' OR 'O'\n 2.For even - 'e' OR 'E'\n";
    cin>>a;
    cout<<"Please enter how many member do you wish be deleted: ";
    cin>>b;

    if(a == 'o' || a == 'O'){
        cout<<"Before deleting : \n";
        cout<<list2;

        for (int i = 0; i < b; ++i) {
            list2.delRightMost();
        }

        cout<<"After deleting : \n";
        cout<<list2;
    }
    else if(a == 'e' || a == 'E'){

        cout<<"Before deleting : \n";
        cout<<list2;

        for (int i = 0; i < b; ++i) {
            list2.delLeftMost();
        }

        cout<<"After deleting the list looks like: \n";
        cout<<list2;

    } else
        cerr<<"Please input the right character !\n";

    return 0;
}


