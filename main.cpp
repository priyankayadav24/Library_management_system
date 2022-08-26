#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

class Library
{
public:
  int id;
  char name[100];
  char author[100];
  char student[100];
  int price;
};

int
main ()
{
  Library lib[50];
  int input = 0;
  int count = 0;
  while (input != 5)
    {
      cout << "Enter 1 to input detailes like is, Name ,Author,Student,Price"<< endl;
      cout << "Enter 2 to display detailes" << endl;
      cout << "Enter 3 to Quit" << endl;
      cin >> input;

      switch (input)
	{
	case 1:
	start:
	  cout << "Enter Book id: " << endl;
	  cin >> lib[count].id;
	  cout << "Enter Book Name: " << endl;
	  //cin>>lib[count].name;
	  cin.getline (lib[count].name, 100, ' ');
	  cout << "Enter book Author: " << endl;
	  //cin>>lib[count].author;
	  cin.getline (lib[count].author, 100, ' ');
	  cout << "Enter Student Name: " << endl;
	  //cin>>lib[count].student;
	  cin.getline (lib[count].student, 100, ' ');
	  cout << "Enter Book price: " << endl;
	  cin >> lib[count].price;
	  count++;
	  break;
	case 2:
	  for (int i = 0; i < count; i++)
	    {
	      cout << "Book ID: " << lib[i].id << endl;
	      cout << "Book Name: " << lib[i].name;
	      cout << "Book Author: " << lib[i].author;
	      cout << "Student Name:  " << lib[i].student;
	      cout << "Book Price:  " << lib[i].price;
	    }
	  break;
	case 3:
	  exit (0);
	  break;
	default:
	  cout << "You have entered wrong value , plese type again " << endl;
	  goto start;
	}
    }
}
