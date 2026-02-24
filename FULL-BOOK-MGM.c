#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
int id;
char book_name[50];
char book_auth[50];
int quantity;
int price;
}book;

int book_count = 50;
book b[150] = {
{1, "Book1", "Author1", 10, 100},
{2, "Book2", "Author2", 12, 120},
{3, "Book3", "Author3", 15, 150},
{4, "Book4", "Author4", 18, 180},
{5, "Book5", "Author5", 20, 200},
{6, "Book6", "Author6", 22, 220},
{7, "Book7", "Author7", 25, 250},
{8, "Book8", "Author8", 30, 300},
{9, "Book9", "Author9", 35, 350},
{10, "Book10", "Author10", 40, 400},

{11, "Book11", "Author11", 11, 110},
{12, "Book12", "Author12", 14, 140},
{13, "Book13", "Author13", 17, 170},
{14, "Book14", "Author14", 19, 190},
{15, "Book15", "Author15", 21, 210},
{16, "Book16", "Author16", 23, 230},
{17, "Book17", "Author17", 26, 260},
{18, "Book18", "Author18", 28, 280},
{19, "Book19", "Author19", 32, 320},
{20, "Book20", "Author20", 36, 360},

{21, "Book21", "Author21", 13, 130},
{22, "Book22", "Author22", 16, 160},
{23, "Book23", "Author23", 18, 180},
{24, "Book24", "Author24", 20, 200},
{25, "Book25", "Author25", 24, 240},
{26, "Book26", "Author26", 27, 270},
{27, "Book27", "Author27", 29, 290},
{28, "Book28", "Author28", 31, 310},
{29, "Book29", "Author29", 33, 330},
{30, "Book30", "Author30", 37, 370},

{31, "Book31", "Author31", 10, 105},
{32, "Book32", "Author32", 12, 125},
{33, "Book33", "Author33", 14, 145},
{34, "Book34", "Author34", 16, 165},
{35, "Book35", "Author35", 18, 185},
{36, "Book36", "Author36", 20, 205},
{37, "Book37", "Author37", 22, 225},
{38, "Book38", "Author38", 24, 245},
{39, "Book39", "Author39", 26, 265},
{40, "Book40", "Author40", 28, 285},

{41, "Book41", "Author41", 30, 305},
{42, "Book42", "Author42", 32, 325},
{43, "Book43", "Author43", 34, 345},
{44, "Book44", "Author44", 36, 365},
{45, "Book45", "Author45", 38, 385},
{46, "Book46", "Author46", 40, 405},
{47, "Book47", "Author47", 42, 425},
{48, "Book48", "Author48", 44, 445},
{49, "Book49", "Author49", 46, 465},
{50, "Book50", "Author50", 48, 485}

};
void books()
{
int i;

printf("\nID   Book Name   Author\t     Qty   Price\n");

for(i=0;i<book_count;i++)
{
printf("%-5d %-15s %-15s %-8d %-8d\n",b[i].id,b[i].book_name,b[i].book_auth,b[i].quantity,b[i].price);

}

}

int book_search()
{
char search_in[150];
int i;
int flag=0;
system("clear");

printf("\nEnter The Book Name: ");
fgets(search_in,50,stdin);
printf("Searching For -> %s ",search_in);
search_in[strcspn(search_in,"\n")] = '\0';
for(i=0;i<50;i++)
{
if(strcasecmp(b[i].book_name,search_in)==0)
{
flag=1;
break;
}
}

if(flag==1)
{
printf("\nThe Book Found On\n\t Id => %d \n\t Name => %s",b[i].id,b[i].book_name);
}
else
{
printf("\nWe Don't Have Book By This Name....");
}

}

void book_insert()
{
int up_num;
int i;
int id,qty,price;
char name[50],author[50];
printf("Current Count = %d",book_count);
//-----------------------------------------
printf("\nPress \"Enter\" To Add %dth Book",book_count+1);
getchar();

i = book_count++;

printf("\n Id Is Book No And It Will Automatically Update: ");
b[i].id = i+1;
printf("\nEnter The Book Name: ");
fgets(name,50,stdin);
printf("\nEnter The Book Author Name: ");
fgets(author,50,stdin);
printf("\nEnter The Quantity: ");
scanf("%d",&qty);
printf("\nEnter The Price: ");
scanf("%d",&price);
system("clear");
do{
printf("\n\nSubmitted Details Preview");
printf("\nId => %d",i);
printf("\nName => %s",name);
printf("\nAuthor => %s",author);
printf("\nQuantity => %d",qty);
printf("\nPrice => %d",price);
printf("\nIf There Is Some Mistake In Writing \nEnter 1 To Update Name: \nEnter 2 To Update Author \nEnter 3 To Update Quantity \nEnter 4 To Update Price\nEnter 0 To Submit Book");
scanf("%d",&up_num);

while(getchar() != '\n');    
switch(up_num)    
{    
case 0:    
name[strcspn(name, "\n")] = '\0';  
author[strcspn(author, "\n")] = '\0';  
    printf("\nUpdating Library: ");    
    b[i].id = i;    
    printf("\nId Done .....");    
    strcpy(b[i].book_name ,name);  
    printf("\nName done....");    
    strcpy(b[i].book_auth , author );  
    printf("\nAuthor done....");    
    b[i].quantity = qty;    
    printf("\nName done....");    
    b[i].price = price;  
    printf("\nPrice done...");  
    while(getchar() != '\n');  
    if(b[i].id != 0 &&  
     b[i].book_name != '\0' &&   
     b[i].book_auth != '\0' &&   
     b[i].quantity != 0 &&  
      b[i].price != 0)  
    {  
        printf("\nProperly Updated Library");  
    }  
    else  
    {  
        printf("\nLibrary Not Updated Successfuly \nBlank Spaces Found...");  
        return;  
    }  
    break;    
case 1:     
    printf("\nPast Name is => %s",name);    
    printf("\nRe-enter The Name: ");    
    fgets(name,50,stdin);    
    printf("Updated Name Is %s",name);    
    getchar();    
    break;    
case 2:     
    printf("\nPast Name is => %s",author);    
    printf("\nRe-enter The Name: ");    
    fgets(author,50,stdin);    
    printf("Updated Name Is %s",author);    
    getchar();    
    break;    
case 3:     
    printf("\nPast Quantity is => %d",qty);    
    printf("\nRe-enter The Quantity: ");    
    scanf("%d",qty);    
    printf("Updated Quantity Is %s",qty);    
    getchar();    
    break;    
case 4:     
    printf("\nPast Price is => %d",price);    
    printf("\nRe-enter The Quantity: ");    
    scanf("%d",price);    
    printf("Updated Quantity Is %s",price);    
    getchar();    
    break;    
}  
}while(up_num != 0);

}

int main()
{
int ch;
while(1){

printf("\n::::::::::::::::::::::::");
printf("\n1.Show Books");
printf("\n2.Search Book");
printf("\n3.Insert Book");
printf("\nEnter The Number: ");
scanf("%d",&ch);
system("clear");
while(getchar() != '\n');
switch(ch)
{
case 1:
system("clear");
books();
break;
case 2:
system("clear");
book_search();
break;
case 3:
system("clear");
book_insert();
break;
default: printf("Invalid...");
}
}
return 0;
}