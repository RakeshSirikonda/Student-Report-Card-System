#include<fstream.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
class stud
{
  char name[100];
  int rollno;
  int emiii,ds,oopj,lst,dis;
  int per;
  void calculate()
  { per=(emiii+ds+oopj+lst+dis)*0.2;}
  char grade;
  void calgrade()
  {
 if(per>=90 && per<=100)
 {
 grade='A';
 }
 if(per>=70 && per<90)
 {
 grade='B';
 }
 if(per>=50 && per<70)
 {
 grade='C';
 }
 if(per<50)
 {
 grade='D';
 }
}
  public:
  void getdata();
  void showdata();
  int getrollno();
  void modify();
  };
void stud::modify()
{char chi;
cout<<" What do you want to modify ? "<<"\n";
cout<<" 1. Roll number: "<<"\n";
cout<<" 2. NAME: "<<"\n";
cout<<" 3. Marks in Eng..Mathematics III: "<<"\n";
cout<<" 4. Marks in Data Structures: "<<"\n";
cout<<" 5. Marks in OOPs Thru..Java "<<"\n";
cout<<" 6. Marks in Logic & Switching Theory:  "<<"\n";
cout<<" 7. Marks in Discrete Structures: "<<"\n";
cout<<" Enter your choice: "<<"\n";
cin>>chi;
switch(chi)
{
case '1':
cout<<" The  existing roll no. is "<<rollno<<"\n";
cout<<" Enter your new roll no ";
cin>>rollno;
cout<<"\n"<<" Your data has been modified ";
break;
case '2':
cout<<" The  existing name is "<<name<<"\n";
cout<<" Enter your new name ";
gets(name);
cout<<"\n"<<" Your data has been modified ";
break;
case '3':
cout<<" The  existing marks in Eng..Mathematics III is: "<<emiii<<"\n";
cout<<" Enter your new marks in Eng..Mathematics III: ";
cin>>emiii;
cout<<"\n"<<" Your data has been modified ";
break;
case '4':
cout<<" The  existing marks in Data Structures is: "<<ds<<"\n";
cout<<" Enter your new marks in Data Structures: ";
cin>>ds;
cout<<"\n"<<" Your data has been modified ";
break;
case '5':
cout<<" The  existing marks in OOPs Thru..Java is: "<<oopj<<"\n";
cout<<" Enter your new marks in OOPs Thru..Java ";
cin>>oopj;
cout<<"\n"<<" Your data has been modified ";
break;
case '6':
cout<<" The  existing marks in Logic & Switching Theory is: "<<lst<<"\n";
cout<<" Enter your new marks in Logic & Switching Theory: ";
cin>>lst;
cout<<"\n"<<" Your data has been modified ";
break;
case '7':
cout<<" The  existing marks in Discrete Structures is: "<<dis<<"\n";
cout<<" Enter your new marks in Discrete Structures: ";
cin>>dis;
cout<<"\n"<<" Your data has been modified ";
break;
default :
cout<<"Wrong Choice::Invalid_Input ";
break;
}
calculate();
calgrade();
}



void stud::getdata()
{
cout<<"\n\n\n\n\t\tStudent record.\n\n";
cout<<"\tEnter your name:";
gets(name);
cout<<"\n\tEnter rollno ";
cin>>rollno;
cout<<"\n\tEnter marks in Eng..Mathematics III: ";
cin>>emiii;
cout<<"\n\tEnter marks in Data Structures: ";
cin>>ds;
cout<<"\n\tEnter marks in Oops Through..Java: ";
cin>>oopj;
cout<<"\n\tEnter marks in Logic & Switching Theory: ";
cin>>lst;
cout<<"\n\tEnter marks in Discrete Structures:" ;
cin>>dis;
cout<<"\n";
calculate();
calgrade();
}
void stud::showdata()
{
cout<<"\n\tName is "<<name;
cout<<"\n\tRoll no= "<<rollno;
cout<<"\n\tMarks in 5 subjects are: "<<emiii<<"\t"<<ds<<"\t"<<oopj<<"\t"<<lst<<"\t"<<dis;
cout<<"\n\tpercentage is "<<per;
cout<<"\n\tGrade is "<<grade;
//cout<<"==============================================================";
}
int stud::getrollno()
{
return rollno;
}
//prototype definition
void gdata();
void sdata();
void sedata();
void ddata();
void intro();
void mdata();
// void sodata();
class login
{ public:
  char name[100];
  char uname[100];
  char pass[100];
  void getdataa();
  void searchdataa();
  };
void introa();
void gdataa();
void sedataa();
void login::getdataa()
{
cout<<"\n\n\n\n\t\tSIGN UP.\n\n";
cout<<"\tEnter your name: ";
gets(uname);
cout<<"\n\tEnter your id: ";
gets(name);
cout<<"\n\tEnter password: ";
gets(pass);
}
void gdataa()
{login s1;
s1.getdataa();
ofstream outfile;
outfile.open("l1.dat",ios::app|ios::binary);
outfile.write((char *)&s1,sizeof(login));
outfile.close();
cout<<"\n\n\t\tSigned up successfully";
getche();
}

void sedataa()
{
login s1;
ifstream fin;
char un[100],rn[100],ps[100],found='n';
fin.open("l1.dat",ios::binary);
cout<<"\n\n\tEnter user id to be login\n\t\t::";
gets(rn);
while(fin.read((char*)&s1,sizeof(login)))
{
if(strcmp(rn,s1.name)==0)
{ lb:
strcpy(un,s1.uname);
cout<<"\n\n\tEnter password::";
gets(ps);
if(strcmp(ps,s1.pass)==0)
{
clrscr();
cout<<"\n\tWELCOME\n";
cout<<"\n\tUSERNAME: ";
puts(un);    char ch;
intro();
do                            //DO STARTS
{
clrscr();
cout<<"\n\n\tMAIN MENU";
cout<<"\n\n\t01.Create Student Record.";
cout<<"\n\n\t02.DISPLAY Student Record.";
cout<<"\n\n\t03.SEARCH Student Record.";
cout<<"\n\n\t04.Delete Student Record.";
cout<<"\n\n\t05.Modify Student Record.";
cout<<"\n\n\t06.EXIT.";
cout<<"\n\n\t\tEnter your choice::";
cin>>ch;
clrscr();
switch(ch)                               //SWITCH STARTS
{
case '1': gdata();
break;
case '2': sdata();
break;
case '3': sedata();
break;
case '4': ddata();
break;
case '5': mdata();
break;
case '6' : exit(6);
break;
default: cout<<"\a";
break;
}                                         //SWITCH COLSED
}while(ch>='1' && ch<='6');


/////////////////////////////////////////////////////////////////////////
}
else
{
cout<<"\n\n\n\n\n\t\t\t\tWrong password..........";
goto lb;
}
found='y';
break;
}
}
if(found=='n')
cout<<"\nNEW USER!!!!!!!\n";
fin.close();
getche();
}

	void introa()
	{
	cout<<"\n\n\n\t\t STUDENT REPORT CARD SYSTEM";
	cout<<"\n\n\n\tDONE BY : Rakesh (160117733325), Archana (160117733328)";
	cout<<"\n\tCollege : Chaitanya Bharathi Institute of Technology";
	cout<<"\n\n\tSIGN IN for main menu....";
	getch();
}
void gdata()
{stud s1;
s1.getdata();
ofstream outfile;
outfile.open("stud1.dat",ios::app|ios::binary);
outfile.write((char *)&s1,sizeof(stud));
outfile.close();
cout<<"\n\n\t\tRecord inserted successfully";
getche();
}


void sdata()
{stud s1;
ifstream fin;
fin.open("stud1.dat",ios::binary);
while(fin.read((char*)&s1,sizeof(stud)))
{
s1.showdata();
cout<<"\n\t===========================================================\n";
}
fin.close();
getche();
}

void sedata()
{
stud s1;
ifstream fin;
int rn,found='n';
fin.open("stud1.dat",ios::binary);
cout<<"\n\n\tEnter roll no. to be searched\n\t\t\t";
cin>>rn;
while(fin.read((char*)&s1,sizeof(stud)))
{
if(s1.getrollno()==rn)
{
s1.showdata();
found='y';
break;
}
}
if(found=='n')
cout<<"\nrecord donot exists\n";
fin.close();
getche();
}

void ddata()
{
int n;
cout<<"\n\n\tEnter roll no to be deleted......";
cin>>n;
ifstream ifile;
ifile.open("stud1.dat",ios::binary);
ofstream ofile;
ofile.open("temp2.dat",ios::app|ios::binary);
stud s1;
while(ifile.read((char*)&s1,sizeof(s1)))
{
if(s1.getrollno()!=n)
{
ofile.write((char*)&s1,sizeof(s1));
}
else
{
cout<<"The record has been deleted ";
getche();
}
}
ifile.close();
ofile.close();
remove("stud1.dat") ;
rename("temp2.dat","stud1.dat");
}
	void intro()
{
	cout<<"\n\n\n\t\t  STUDENT";
	cout<<"\n\n\t\tREPORT CARD";
	cout<<"\n\n\tPress enter for main menu....";
	getch();
}


void mdata()
{int n;
cout<<"\n\n\tEnter roll no to be modified......";
cin>>n;
ifstream ifile;
ifile.open("stud1.dat",ios::binary);
ofstream ofile;
ofile.open("temp2.dat",ios::app|ios::binary);
stud s1;
while(ifile.read((char*)&s1,sizeof(s1)))
{
if(s1.getrollno()==n)
{ s1.modify();
ofile.write((char*)&s1,sizeof(s1));
}
else
{
ofile.write((char*)&s1,sizeof(s1));
}
}
ifile.close();
ofile.close();
remove("stud1.dat") ;
rename("temp2.dat","stud1.dat");

}

///////////////////////////////sorting///////////////
/*void sodata()
{
int a;
stud s1;
ifstream ifile;
ofstream ofile;
ifile.open("stud1.dat",ios::binary);
ofile.open("temp2.dat",ios::binary|ios::app);
ifile.seekg(0|ios::beg);
ifile.read((char*)&s1,sizeof(s1));
a=s1.getrollno();
while(ifile.read((char*)&s1,sizeof(s1)))
{
if(a<s1.getrollno())
{
a=s1.getrollno();
}
}
cout<<"\n\n\n\n\t\t";
cout<<a<<"\n";
ifile.close();
for(int i=1;i<=a;i++)
{
ifile.open("stud1.dat",ios::binary);
ifile.seekg(0|ios::beg);
while(ifile.read((char*)&s1,sizeof(s1)))
{
if(s1.getrollno()==i)
{
ofile.write((char *)&s1,sizeof(s1));
}
}
ifile.close();
}
ofile.close();
cout<<"\t\t Data sorted ";
remove("stud1.dat");
rename("temp2.dat","stud1.dat");
getche();
}
  */


void main()
{
char cha;
introa();
do                            //DO STARTS
{
clrscr();
cout<<"\n\n\tUSER MENU";
cout<<"\n\n\t01.SIGN UP";
cout<<"\n\n\t02.SIGN IN";
cout<<"\n\n\t03.EXIT.";
cout<<"\n\n\t\tEnter your choice::";
cin>>cha;
clrscr();
switch(cha)                               //SWITCH STARTS
{
case '1': gdataa();
break;
case '2': sedataa();
break;
case '3':
exit(3);
break;
default: cout<<"\a";
break;
}                                         //SWITCH COLSED
}while(cha>='1' && cha<='3');


}






