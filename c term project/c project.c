#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#define SIZE 20
   struct customer{
	char *username;
	char *password;
};
int s[30]={};

int main() {
    
     int choice;
	printf("===========================================\n");
	printf("Welcome to the PASS transportation sytem!\n\n");
	system("color E0");
	printf("===========================================\n\n");
	printf("MENU\n\n");
	printf("===========================================\n");
	printf("1-Costumer login\n");
	printf("2-authorized person login\n");
	printf("3-Not signed yet? Sign in!\n\n");
	printf("===========================================\n\n");
	printf("Please make your choice as a number:");

	scanf("%d",&choice);
	
	system("cls");
switch(choice){
	case 1: {

	char Searchusername[20];
	char Searchpassword[20];
	char username[20];
	char password[20];
	int found = 0;
	FILE *check;
	printf("Please enter your username: ");
	scanf("%s", Searchusername);
	printf("Please enter your password: ");
	scanf("%s", Searchpassword);
	check = fopen("costumer.txt", "r");
	if (check)
		{
		while(fscanf(check, "%s %s", username, password) != EOF && found == 0)
			{
			if(strcmp(Searchusername,username) == 0 && strcmp(Searchpassword,password) == 0)
				{
				printf("Welcome");
				found = 1; 
				}
		
			}
		}
	if (found==0)
		printf("Your username or password is incorrect, please try again.\n");

	fclose(check);
	      int vehicle;
		  printf("===========================================\n");
          printf("Which transportation vehicle do you prefer\n?");
          printf("1-Plane\n");
          printf("2-Bus\n");
          printf("3-Ship\n");
          printf("4-Train\n");
          printf("Please make your choice as a number:");
          printf("\n===========================================\n");
          scanf("%d",&vehicle);
        
          if(vehicle==1){
           Plane();
		  }else if(vehicle==2){
		   Bus();
		  }else if(vehicle==3){
		  	Ship();
		  }else if(vehicle==4){
		  	Train();
		  }else{
		  	printf("You have made a wrong choice.");
		  }
		  
          		break;
}
        case 2:{
         char owUsername[20];
         char owPassword[20];
         printf("Please enter your username:");
         scanf("%s",&owUsername);
         printf("Please enter your password:");
         scanf("%s",&owPassword);
         if(strcmp(owUsername,"boss")==0 && strcmp(owPassword,"123")==0){
         		printf("Welcome boss\n\n");
        
         		getch();
		 system("cls");
		 FILE *see;
		 char word1[10], word2[10], word3[10], word4[10];
		 int i;
		 see=fopen("Plane.txt","r");
		 if(see!=NULL){
		 	while(!feof(see)){
		 		fscanf(see,"%s",word1);
		 		fscanf(see,"%s",word2);
		 		fscanf(see,"%s",word3);
		 		fscanf(see,"%s",word4);
		 		printf("Plane reservation informations\n");
		 		printf("%s %s %s %s \n\n",word1,word2,word3,word4);
		 	    printf("========================================\n\n\n");
		 		i++;
			 }
		 }
	
	
	else{
		printf("sorry boss, something went wrong. File couldnt open.");
	}
	fclose(see);
		 FILE *seeBus;
		 char Bword1[10], Bword2[10], Bword3[10], Bword4[10];
		 int j;
		 seeBus=fopen("Bus.txt","r");
		 if(seeBus!=NULL){
		 	while(!feof(seeBus)){
		 		fscanf(seeBus,"%s",Bword1);
		 		fscanf(seeBus,"%s",Bword2);
		 		fscanf(seeBus,"%s",Bword3);
		 		fscanf(seeBus,"%s",Bword4);
		 		printf("Bus reservation informations\n");
		 		printf("%s %s %s %s\n\n",Bword1,Bword2,Bword3,Bword4);
		 	    printf("========================================\n");
		 		j++;
			 }
		 }
	
	
	else{
		printf("sorry boss, something went wrong. File couldnt open.");
	}
	fclose(seeBus);
			 FILE *seeTrain;
		 char Tword1[10], Tword2[10], Tword3[10], Tword4[10];
		 int k;
		 seeTrain=fopen("Train.txt","r");
		 if(seeTrain!=NULL){
		 	while(!feof(seeTrain)){
		 		fscanf(seeTrain,"%s",Tword1);
		 		fscanf(seeTrain,"%s",Tword2);
		 		fscanf(seeTrain,"%s",Tword3);
		 		fscanf(seeTrain,"%s",Tword4);
		 		printf("Train reservation informations\n");
		 		printf("%s %s %s %s\n\n",Tword1,Tword2,Tword3,Tword4);
		 	    printf("========================================\n");
		 		k++;
			 }
		 }
	
	
	else{
		printf("sorry boss, something went wrong. File couldnt open.");
	}
	fclose(seeTrain);
			
		 
		 FILE *seeShip;
		 char Sword1[10], Sword2[10], Sword3[10], Sword4[10];
		 int h;
		 seeShip=fopen("Ship.txt","r");
		 if(seeShip!=NULL){
		 	while(!feof(seeShip)){
		 		fscanf(seeShip,"%s",Sword1);
		 		fscanf(seeShip,"%s",Sword2);
		 		fscanf(seeShip,"%s",Sword3);
		 		fscanf(seeShip,"%s",Sword4);
		 		printf("Ship reservation informations\n");
		 		printf("%s %s %s %s\n\n",Sword1,Sword2,Sword3,Sword4);
		 	    printf("========================================\n\n\n");
		 		h++;
			 }
		 }	
	else{
		printf("sorry boss, something went wrong. File couldnt open.");
	}
	
	fclose(seeShip);
	 		 }else{
			 printf("You dont have permission to enter here.");
		}
			break;
	 }
		
		case 3:{
			char newUsername[20];
	        char newPassword[20];
	        FILE *newU;
	        newU=fopen("costumer.txt","a+");
	        if(newU!=NULL){
	        	printf("Choose yourself a username:");
	        	scanf("%s",newUsername);
	        	printf("\n");
	        	printf("Choose yourself a password:");
	        	scanf("%s",newPassword);
	        	fprintf(newU,"\n%s %s ",newUsername, newPassword);
	        	printf("You are successfully registered.\n");
	        	printf("The info %s and %s",newUsername,newPassword);
	        	fclose(newU); 	
			}
			break;
		}
		default:{
			printf("You have made a wrong choice, please try again.");
			
			break;
	}

}

return 0;
}
void Plane(){
	char from[10],to[10],hour[10];
	int seat,i,c;
	printf("From?:");
	scanf("%s",from);
	printf("To?:");
	scanf("%s",to);
	printf("At what hour?:");
	scanf("%s",hour);
	printf("Available seats left as: 4 5 6 7 9 1.");

			do
			{
                printf("Pick a seat:\n\n");
                scanf("%i",&seat);
                s[c]=seat;
                //system("cls");
			    for (i=0; i<c; i++)
			    {
                    if (s[c]==s[i])
                    {
                        printf("\n\nSeat taken.\n\n");
                        break;
                    }
			    }
            }
            while (i!=c);
                    char NPFres[20];
                    char NPTres[20];
                    int  NPHres[20];
                    int  NPSres[20];
                    FILE *Pres;
                    Pres=fopen("Plane.txt","a+");
                    if(Pres!=NULL){
        fprintf(Pres,"\n%s %s %s %i",&from,&to,&hour,s[c]);
        fclose(Pres);
					}
                    
                    printf("\n");
                    printf("--------------------------\n");
                    printf("Travel informations:Your flight from %s to %s at %s in the seat number %i is booked.\n",from,to,hour,s[c]);
                    printf("--------------------------\n\n");
               
            
	
}
void Bus(){
		char from[10],to[10],hour[10];
	int seat,i,c;
	printf("From?:");
	scanf("%s",from);
	printf("To?:");
	scanf("%s",to);
	printf("At what hour?:");
	scanf("%s",hour);
	printf("Available seats left as: 4 5 6 7 9 1.");

			do
			{
                printf("Pick a seat:\n\n");
                scanf("%i",&seat);
                s[c]=seat;
                //system("cls");
			    for (i=0; i<c; i++)
			    {
                    if (s[c]==s[i])
                    {
                        printf("\n\nSeat taken.\n\n");
                        break;
                    }
			    }
            }
            while (i!=c);
                    char NBFres[20];
                    char NBTres[20];
                    int  NBHres[20];
                    int  NBSres[20];
                    FILE *Bres;
                    Bres=fopen("Bus.txt","a+");
                    if(Bres!=NULL){
        fprintf(Bres,"\n%s %s %s %i",&from,&to,&hour,s[c]);
        fclose(Bres);
					}
                    
                    printf("\n");
                    printf("--------------------------\n");
                    printf("Travel informations:Your flight from %s to %s at %s in the seat number %i is booked.\n",from,to,hour,s[c]);
                    printf("--------------------------\n\n");
}
void Train(){

		char from[10],to[10],hour[10];
	int seat,i,c;
	printf("From?:");
	scanf("%s",from);
	printf("To?:");
	scanf("%s",to);
	printf("At what hour?:");
	scanf("%s",hour);
	printf("Available seats left as: 4 5 6 7 9 1.");

			do
			{
                printf("Pick a seat:\n\n");
                scanf("%i",&seat);
                s[c]=seat;
                //system("cls");
			    for (i=0; i<c; i++)
			    {
                    if (s[c]==s[i])
                    {
                        printf("\n\nSeat taken.\n\n");
                        break;
                    }
			    }
            }
            while (i!=c);
                    char NTFres[20];
                    char NTTres[20];
                    int  NTHres[20];
                    int  NTSres[20];
                    FILE *Tres;
                    Tres=fopen("Train.txt","a+");
                    if(Tres!=NULL){
        fprintf(Tres,"\n%s %s %s %i",&from,&to,&hour,s[c]);
        fclose(Tres);
					}
                    
                    printf("\n");
                    printf("--------------------------\n");
                    printf("Travel informations:Your flight from %s to %s at %s in the seat number %i is booked.\n",from,to,hour,s[c]);
                    printf("--------------------------\n\n");
                }
    void Ship(){
    		char from[10],to[10],hour[10];
	int seat,i,c;
	printf("From?:");
	scanf("%s",from);
	printf("To?:");
	scanf("%s",to);
	printf("At what hour?:");
	scanf("%s",hour);
	printf("Available seats left as: 4 5 6 7 9 1.");

			do
			{
                printf("Pick a seat:\n\n");
                scanf("%i",&seat);
                s[c]=seat;
                //system("cls");
			    for (i=0; i<c; i++)
			    {
                    if (s[c]==s[i])
                    {
                        printf("\n\nSeat taken.\n\n");
                        break;
                    }
			    }
            }
            while (i!=c);
                    char NSFres[20];
                    char NSTres[20];
                    int  NSHres[20];
                    int  NSSres[20];
                    FILE *Sres;
                    Sres=fopen("Ship.txt","a+");
                    if(Sres!=NULL){
        fprintf(Sres,"\n%s %s %s %i",&from,&to,&hour,s[c]);
        fclose(Sres);
					}
                    
                    printf("\n");
                    printf("--------------------------\n");
                    printf("Travel informations:Your flight from %s to %s at %s in the seat number %i is booked.\n",from,to,hour,s[c]);
                    printf("--------------------------\n\n");
               
            
	
	}
