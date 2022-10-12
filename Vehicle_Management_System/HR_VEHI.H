#include <iostream.h>

#include <stdio.h>
#include <stdlib.h>
#include <fstream.h>
#include <string.h>
#include <conio.h>


class Vehicle{	// This is the base class!
public:
char Make[20];

char Model[20];

char RegNo[20];


Vehicle()
{
strcpy (Make, "");
strcpy (Model, "");
strcpy (RegNo, "");
}

};


class Record :public Vehicle
{

public:

char Cust_Name[20];


Record ()
  {
strcpy (Cust_Name, "");
}
void show ()
  {

cout << Cust_Name<<" " << Make <<" "<< Model <<" " << RegNo;

}
};


class Data_File
{

public:

fstream rdwrite_myfile;

Data_File ()
  {

}
~Data_File ()
  {

}
void Add ();

void Update ();

void Delete ();

void Display ();


Record ReadFromConsole();

void writeIntofile(Record *N);
};


