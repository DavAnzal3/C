/*Terminal Commands*/                                            

ls      =   list of file 
mkdir   =   new folder   
rm      =   remove   
cp      =   copy  
mv      =   move 
clear   =   clear the terminal 
cd      =   change directory
code    =   create a file

/*Make a FileEs*/

gcc ./(file).c -o (name)

/*Execute a file*/

./FileEs/(name)

/*Library*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h> 

/*Commands*/

strlen()
strcmp( (), () ) == 0 
malloc(strlen(name) + 1)
sizeof()
strcpy(s, t)

auto
break
case
cost
continue
default
do
enum
extern
goto
inline
register
restrict
short                //Occupa meno spazio di un int normale               
signed
static
struct
switch
union
unsigned int          //Non accetta negativi 
volatile


/*Type of variables*/

int     =   integer number
bool    =   true/false
char    =   single character
long    =   long integer number
float   =   decimal number
double  =   long decimal number

/*Typer % for printf*/

%s   =      Strig
%zu  =      SizeOf
%i   =      Integer
%u   =      Unsigned
%hd  =      Short
%c   =      Char
%f   =      Float
%lf  =      Double
&Lf  =      Long double
%li  =      Long
%Li  =      Long integer

/*syntax*/

counter = counter+1;
conter += 1;
counter++;

/*Cycle*/

for (int i = 0, i<3; i++) 
{
    printf("Someone\n");
}

/*Array*/

int scores[3];
scores[0]= 71
scores[1]= 54
scores[2]= 23

char names[] = {dave,name,susy};

/*Create a data structor*/

typedef struct person
{
    char name;
    char number;
}
person;

person people[2];

people[0].name = "carter";
people[0].number = "123456789"
