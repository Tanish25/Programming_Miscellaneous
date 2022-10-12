#include "HR_VEHI.H"


void
Data_File::Add ()
{


Record N;

char line[20];
// Open the file in read + write + File append mode
rdwrite_myfile.open ("data.txt",ios::in|ios::out|ios::app);

N=ReadFromConsole();
// ensure you write at the end of file
// rdwrite_myfile.seekp (0, ios::end);
writeIntofile(&N);


rdwrite_myfile.close ();

}

void
Data_File::Update ()
{

Record N;

char find[20];

unsigned char line[30];

char c='n';
long pos;

cout << "Customer Name u want to update: ";

cin >> find;
cout << endl;

//open the file with  read + write + file pointer movement option options
rdwrite_myfile.open ("data.txt",ios::in|ios::out|ios::ate);
// Intentionally bring the pointer to beggining of file
rdwrite_myfile.seekg (0, ios::beg);

//strcpy(line,"");
while (!(rdwrite_myfile.eof ()) )

    {

//Search for the string  which ends with eol character
rdwrite_myfile.getline (line,20,'\n');

// Check if the searched string matches with "find" string
if (strcmp(line,find)==0)
{
//sucessfully serched the string in the file

pos=rdwrite_myfile.tellp();// Find the existing pointer position of the string find
pos=pos-2;//remove extra characters
pos=pos-strlen(find);//remove the size of the string
//You have the right pointe location to update the file now
rdwrite_myfile.seekp(pos);

// If write empty file flag is set you need to delete record
//if(write_empty_record==0)
N=ReadFromConsole();

//rdwrite_myfile.seekp (0, ios::end);
writeIntofile(&N);
//Your task of searching string is done exit the while after setting the yes flag
c='y';
break;
}//end of if

}//end of while

if(c!='y') cout<<"String not found\n";

rdwrite_myfile.close ();

}//end of update

void
Data_File::Delete ()
{

char deleteline[20];

unsigned char line[30];

char c='n';

cout << "Customer Name u want to Delete: ";
cin >> deleteline ;
cout << endl;

ifstream sup;
    sup.open("data.txt");
    ofstream temp;
    temp.open("temp.txt");


    while (!(sup.eof()))
    {
	sup.getline (line,20,'\n');
	if (strcmp(line,deleteline)!=0)
	{   // copy all contents from existing file to the temp file
	    temp << line << endl;
	}
	else{
	// You have been successfull in searching the record  that needs to be deleted
	//So Do not copy next 3+2 lines
	for (int i=0;i<5;i++)
	sup.getline (line,20,'\n');

	c='y'; // set the delete success flag
	}
    }
    temp.close();
    sup.close();


if(c!='y')
{
 cout<<"Delete string not found\n";
   remove("temp.txt");
 }
else
{   //copy the contents you have in the temp.txt file to data.txt
    remove("data.txt");
    rename("temp.txt","data.txt");
}

}//end of delete


void
Data_File::Display ()
{
Record N;
int i=0;
char line[20];
rdwrite_myfile.open ("data.txt",ios::in);

system("cls");
while (!(rdwrite_myfile.eof ()) )

    {

//Read a record
for (i=0;i<6;i++)
{
rdwrite_myfile.getline (line,20,'\n');

//Print only if string length is greater tha 1
if( (strlen(line)>1) || (i>3) )
{
switch (i)

	{

case 0:
	  {

cout << "Customer Name:"<<line;

break;

}

case 1:
	  {

cout << "Vehicle Make: " << line;

break;

}

case 2:

	  {
cout << "Vehicle Model: "<< line;
break;

}
case 3:

	  {
cout << "Vehicle Registration No:" << line;
break;

}

case 4:
case 5:
case 6:
	  {

cout << line;

break;

}
//cout <<endl;

}; // end of switch
cout << endl;
} //end of if
}//end of for

}//end of while

rdwrite_myfile.close ();


}// end of display




Record Data_File::ReadFromConsole()
{

Record NN;

cout << "Customer Name: ";

cin >> NN.Cust_Name;

cout << endl;


cout << "Vehicle Make: " ;

cin >> NN.Make;

cout << endl;

cout << "Vehicle Model: ";

cin >> NN.Model;

cout << endl;

cout << "Registration No: ";

cin >> NN.RegNo;

cout << endl;

return NN;

}

void Data_File::writeIntofile(Record *N)
{

rdwrite_myfile << N->Cust_Name << endl;

rdwrite_myfile << N->Make << endl;

rdwrite_myfile << N->Model << endl;

rdwrite_myfile << N->RegNo << endl<< endl << endl;


}



Data_File FileObject;

int
main ()
{

char
    c = '0';

system("cls");

while (1)
    {


if (c != '\n')

	{
do{
cout << "Press a key to continue ...";
}while (cin.get()!='\n');
clrscr();
cout << " \t VEHICALE DATA MANAGEMENT\n";

cout << "Press 1: To Add an vehicle entry " << endl;

cout << "Press 2: To Edit an existing vehicle entry " << endl;

cout << "Press 3: To Delete a existing vehicle entry " << endl;

cout << "Press 4: To Display all vehicle entries" << endl;

cout << "Press 5: To Exit " << endl;


}

scanf ("%c", &c);

switch (c)

	{

case '1':

	  {

FileObject.Add ();

break;

}

case '2':

	  {

FileObject.Update ();

break;

}

case '3':

	  {

FileObject.Delete ();

break;

}
case '4':

	  {

FileObject.Display ();

break;

}

case '5':

	  {

exit (0);

break;

}


}; // end of switch

} // end of while
  return 0;

} // end of main
