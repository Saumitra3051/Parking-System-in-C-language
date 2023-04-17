#include <stdio.h>

#include <stdlib.h>



int mainmenu();

int Inmenu();

int Insert();

void Incar();

void Inbus();

void Inmotorcycle();

void Inautoricksay();

void showdetails();

void resetMenu();

int DeleteMenu();

int Delete();

void Delcar();

void Delbus();

void Delmotorcycle();

void Delautoricksay();

 

int NoOfCar,NoOfBus,NoOfMotorcycle,NoOfAutoRicksay,count,sptleft,Ammout=0,TotalSpotsForCar=4,TotalSpotsForBus=5,TotalSpotsForMotorcycle=2,TotalSpotsForAutoricksay=3,Totalspot=0;

 

 

int main()

{printf("------------------------------------------------------------------------------------\n");

    printf("                                    vehicle entry                                   \n");

    printf("------------------------------------------------------------------------------------\n");

    Totalspot=TotalSpotsForCar + TotalSpotsForBus + TotalSpotsForMotorcycle + TotalSpotsForAutoricksay;

while(1){

 

switch(mainmenu()){

    

    case 1:

        Insert();

        break;

    case 2:

        Delete();

        break;

    case 3:

        showdetails();

        break;

   

    case 4:

        exit(0);

        break;

    case 5:

        resetMenu();

        break;

   

    default:

        printf("\n invalid choice");

}

}

}

 

int mainmenu(){

    int n;

    printf("\n\n");

    printf("\n 1 Insert vehicle");

    printf("\n 2 Delete vehicle");

    printf("\n 3 showdetails");

    printf("\n 4 exit");

    printf("\n 5 resetMenu");

    printf("\npress button ");

    scanf("%d",&n);

    return n;

}

 

int Insert(){

     while(1){

          system("clear");

 switch(Inmenu()){

    

    case 1:

        Incar();

        Totalspot-=1;

        break;

    case 2:

        Inbus();

        Totalspot-=1;

        break;

    case 3:

        Inmotorcycle();

        Totalspot-=1;

        break;

    case 4:

        Inautoricksay();

        Totalspot-=1;

        break;

    case 5:

        showdetails();

        break;

    break;

    case 6:

        exit(0);

        break;

    case 7:

        resetMenu();

        break;

    case 8:

        Delete();

        break;

    default:

        printf("\n invalid choice");

}

     }

}

 

 

int Inmenu(){

    int opt;

    printf("\n------------------------------------------------------------------------------------\n");

    printf("                                Insert vehicle entry                                   \n");

    printf("------------------------------------------------------------------------------------\n");

    printf("\n 1 car");

    printf("\n 2 bus");

    printf("\n 3 motorcycle");

    printf("\n 4 autoricksay");

    printf("\n 5 showdetails");

    printf("\n 6 exit");

    printf("\n 7 reset menu");

    printf("\n 8 Delete item from menu");

   

    

    printf("\npress the button to choose menu");

    scanf("\n %d",&opt);

    return opt;

 

}

 

void Incar(){

   

 

    if (TotalSpotsForCar>=0){

           Ammout+=40;

           count++;

    NoOfCar++;

   

   TotalSpotsForCar-=NoOfCar;

   printf(" \n************\ncar entry successfull\n************\n");

    }

    else{

        printf("car spot is full");

    }

   

    

}

void Inbus(){

   

   

    

    if (TotalSpotsForBus>=0){

         Ammout+=100;

         count++;

    NoOfBus++;

    TotalSpotsForBus-=NoOfBus;

    printf(" \n************\nbus entry successfull\n************\n");

    }

    else{

        printf("bus spot is full");

    }

   

}

void Inmotorcycle(){

   

   

    

    if (TotalSpotsForMotorcycle>=0){

         Ammout+=20;

         count++;

    NoOfMotorcycle++;

    TotalSpotsForMotorcycle-=NoOfMotorcycle;

    printf(" \n************\nmotorcycle entry successfull\n************\n");

    }

    else{

        printf("motorcycle spot is full");

       

    }

   

}

void Inautoricksay(){

   

    

    if (TotalSpotsForAutoricksay>=0){

        Ammout+=30;

        count++;

    NoOfAutoRicksay++;

    TotalSpotsForAutoricksay-=NoOfAutoRicksay;

    printf(" \n************\nautoricksay entry successfull\n************\n");

    }

    else{

        printf("autoricksay spot is full");

       

    }

   

}

void showdetails(){

    printf("\n@@@@@@@@\nfare\n@@@@@@@@\n");

    printf("Car    =    40\nBus    =    100\nMotorcycle    =    20\nAutoricksay    =    30\n");

    printf("\n\n the no of cars are  =  %d  ",NoOfCar);

    printf("\n the no of bus are  =  %d  ",NoOfBus);

    printf("\n the no of motorcycle are  =  %d  ",NoOfMotorcycle);

    printf("\n the no of autoricksay are  =  %d  ",NoOfAutoRicksay);

   

    printf("\n the total count of vehicle is  =  %d  ",count);

   

    printf("\n The total spot left = %d",Totalspot);

    printf("\n the total Ammout of vehicle are  =  %d  ", Ammout);

}

 

void resetMenu(){

    NoOfCar=0;

    NoOfBus=0;

    NoOfMotorcycle=0;

    NoOfAutoRicksay=0;

    count=0;

    TotalSpotsForCar=5;

    TotalSpotsForBus=4;

    TotalSpotsForMotorcycle=2;

    TotalSpotsForAutoricksay=3;

   

    printf(" \n************\nmenu reset successfull\n************\n");

   

}

 

int Delete(){

     while(1){

        

 switch(DeleteMenu()){

    case 1:

        Delcar();

        Totalspot+=1;

        break;

    case 2:

        Delbus();

        Totalspot+=1;

        break;

    case 3:

        Delmotorcycle();

        Totalspot+=1;

        break;

    case 4:

        Delautoricksay();

        Totalspot+=1;

        break;

    case 5:

        showdetails();

        break;

 

    case 6:

        exit(0);

        break;

    case 7:

        resetMenu();

        break;

    case 8:

        Insert();

        break;

    default:

        printf("\n invalid choice");

}

     }

}

 

int DeleteMenu(){

    int ch;

    printf("\n------------------------------------------------------------------------------------\n");

    printf("                                   Delete vehicle entry                                    \n");

    printf("------------------------------------------------------------------------------------\n");

    printf("\n 1 delete car");

    printf("\n 2 delete bus");

    printf("\n 3 delete motorcycle");

    printf("\n 4 delete autoricksay");

    printf("\n 5 delete showdetails");

    printf("\n 6 exit");

    printf("\n 7 reset");

    printf("\n 8 back to Inmenu menu");

   

    

    printf("\npress the button to choose menu");

    scanf("\n %d",&ch);

    return ch;

}

 

void Delcar(){

   

 if (Totalspot<14){

    if (TotalSpotsForCar>0){

           Ammout-=40;

           count--;

    NoOfCar--;

   

   TotalSpotsForCar-=NoOfCar;

   printf(" \n************\ncar Deleted successfull\n************\n");

    }}

    else{

        printf("car spot is empty");

    }

   

    

}

void Delbus(){

   

   

    if (Totalspot<14){

    if (TotalSpotsForBus>0){

         Ammout-=100;

         count--;

    NoOfBus--;

    TotalSpotsForBus+=NoOfBus;

    printf(" \n************\nbus Deleted successfull\n************\n");

    }}

    else{

        printf("bus spot is empty");

    }

   

}

void Delmotorcycle(){

   

   

    if (Totalspot<14){

    if (TotalSpotsForMotorcycle>0){

         Ammout-=20;

         count--;

    NoOfMotorcycle--;

    TotalSpotsForMotorcycle+=NoOfMotorcycle;

    printf(" \n************\nmotorcycle Deleted successfull\n************\n");

    }}

    else{

        printf("motorcycle spot is empty");

       

    }

   

}

void Delautoricksay(){

    if (Totalspot<14){

       if (TotalSpotsForAutoricksay>0){

        Ammout-=30;

        count--;

    NoOfAutoRicksay--;

    TotalSpotsForAutoricksay+=NoOfAutoRicksay;

    printf(" \n************\nautoricksay Deleted successfull\n************\n");

    }}

    else{

        printf("autoricksay spot is empty");

       

    }

   

}
