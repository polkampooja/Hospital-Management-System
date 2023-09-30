#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "bill.h"
#include "doctor.h"
struct patient
{
    char name[30];
    char disease[30];
    char address[30];
    char gender;
    char phone[10];
    char doctor[30];
    int age;
    int fees;
	float time;
	int date,month,year;
	char cass;
} x[100];

int n,i,j=0,a=0,sum=0,g,num;
void read();
void write();
void add();
void view();
void search();
void edit();
void del();
void patient_fee();
void doctor();
void patient_list();
void password();

int main()
{
	password();
    system("cls");
    read();
    int c,i,q;
    int fees;
    printf("\n\n\t\t\t\t********************************************");
    printf(" \n\t\t\t\t\t ~~RGUKT MINI HOSPITAL~~ \n");
    printf("\n\t\t\t\t\t### WELCOME TO OUR HOSPITAL ###");
	printf("\n\t\t\t\t********************************************");
    while(c!=9)
    {
        printf("\n**Enter your choice**\n\n1. Add Information\n2. View Information\n3. Search\n4. Edit Information\n5. Delete Information\n6. patient_fee details\n7. doctor's information\n8.patient_list\n9. Exit\n\nOption=");
        scanf("%d",&c);//choice for option
        fflush(stdin);//making it clear
        if(c==1)//add
        {
        	system("cls");
            add();
        }
        else if(c==2)//view
        {
        	system("cls");
            view();
        }
        else if(c==3)//search
        {
        	system("cls");
            search();
        }
        else if(c==4)//edit
        {
            edit();
        }
        else if(c==5)//delete
        {
        	system("cls");
            del();
        }
        else if(c==6)//patient_fee
        {
        	system("cls");
        	patient_fee();
           
        }
        else if(c==7)//available doctor info
        {
        	system("cls");
        	printf("\t***HERE THE DETAILS OF SPECIAL DOCTORS AND TIMINGS***\n\n");
        	doctor();
		}
        else if(c==8)
        {
        	system("cls");
        	printf("NO. OF PATIENT WITH DIFFERENT DISEASE:");
        	patient_list();
        	
		}
		else if(c==9)
		{
			system ("cls");
			write();
			printf("\n\n\n\n\n\t\t\tTHANK YOU FOR VISITING :)");
            return 0;
			
		}
        else
        {
            printf("\n\nInvalid input , try again by using valid inputs");
        }
        printf("\n\n");
    }
}
void add()
{
	int fees,a;
    printf("\n\n");
    printf("Already data inputed on the database =%d\n\n",num);//how many inputs
    printf("How many entry do you want to add=\n");
    scanf("%d",&n);
    sum=n+num;
    int date,month,year;
	float time;
 	
    for(i=num; i<sum; i++)
    {
        printf("\n");
        printf("enter the date,month,year,time:");
		scanf("%d %d %d %f",&x[i].date,&x[i].month,&x[i].year,&x[i].time);	
		printf("ADMIT DATE:%d-%d-%d ,TIME:%.2f'clock",x[i].date,x[i].month,x[i].year,x[i].time);
        fflush(stdin);
        printf("\nEnter patient's Name = ");
        gets(x[i].name);
        fflush(stdin);
        printf("Enter disease=");
        gets(x[i].disease);
        fflush(stdin);
        printf("Enter the age=");
        scanf("%d",&x[i].age);
        fflush(stdin);
        printf("enter gender(f/m)=");
        scanf("%s",&x[i].gender);
        printf("Enter address = ");
        scanf("%s",x[i].address);
        fflush(stdin);
        printf("Enter phone number = ");
        scanf("%s",x[i].phone);
        printf("enter doctor name:-");
        scanf("%s",x[i].doctor);
        printf("patient fees:");
        scanf("%d",&x[i].fees);
        fflush(stdin);
        printf("\n");
        num++;
    }
}

void view()
{
	
    for(i=0; i<num; i++)
    {
    	printf("ADMIT DATE:%d-%d-%d ,TIME:%.2f'clock",x[i].date,x[i].month,x[i].year,x[i].time);
        printf("\n");
        printf("Serial Number=%d\n",i);
        printf("Name = ");
        puts(x[i].name);
        printf("Disease = ");
        puts(x[i].disease);
        printf("address=");
        puts(x[i].address);
        printf("specialist=");
        puts(x[i].doctor);
        printf("gender=%c\nPhone number = +91-%s      \nAge=%d \n fees=%dRS",x[i].gender,x[i].phone,x[i].age,x[i].fees);
        printf("\n\n");
    }
}
void edit()
{
    int q,p;
    printf("What do you want to edit ?\n");
    printf("Enter your option\n");
    printf("1.Name\n2.Disease\n3.Age\n4.gender\n5.address\n6.phone number");
    printf("Option=");
    scanf("%d",&q);//option
    if(q<=6)
    {
        printf("Enter the serial no of that patient= (0 - %d)=",num-1);
        scanf("%d",&p);//serial number
        if(p<num)
        {
            if(q==1)
            {
                fflush(stdin);
                printf("Enter the new name=");
                gets(x[p].name);

            }
            else if(q==2)
            {
                fflush(stdin);
                printf("Enter the new Disease=");
                gets(x[p].disease);
            }
            else if(q==3)
            {
                fflush(stdin);
                printf("Enter the new Age=");
                scanf("%d",&x[p].age);
            }
            else if(q==4)
            {
            	fflush(stdin);
            	printf("enter the gender");
            	scanf("%d",&x[p].gender);
			}

            else if(q==5)
            {
                fflush(stdin);
                printf("Enter the new address=");
                scanf("%d",&x[p].address);
            }

            else if(q==6)
            {
                fflush(stdin);
                printf("Enter the new Phone no =");
                scanf("%d",&x[p].phone);
            }
        }
        else
        {
            printf("\n\nInvalid Serial \nTry Again !!\n\n");
        }
    }
    else
    {
        printf("\n\nInvalid option\nTry Again!!\n\n");
    }
}
void search()
{
    int s,h,f,g;
    char u[100];
    printf("By what do you want to search ?\n");
    printf("1.Serial no.\n2.Name\n3.Date\n\nOption = ");
    scanf("%d",&h);
    if(h==1)
    {
        printf("Enter Serial number of the patient=");
        scanf("%d",&s);
        if(s<num)
        {
            printf("\n");
            printf("Serial Number=%d\n",s);
            printf("Name =");
            puts(x[s].name);
            printf("Disease = ");
            puts(x[s].disease);
            printf("address=");
            puts(x[s].address);
            printf("Phone number = +91");
            puts(x[s].phone);
            printf("gender=%c \nAge = %d",x[s].gender,x[s].age);
            printf("\n\n");
        }
        else
            printf("\n\nNot Found\n\n");
    }
    else if(h==2)
    {
        printf("Enter your name=");
        gets(u);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].name)==0)
            {
                printf("\n");
                printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Disease = ");
                puts(x[g].disease);
                printf("address=");
          	    puts(x[g].address);
          	    printf("Phone number = +91");
           		puts(x[g].phone);
                printf("gender=%c\nAge = %d",x[g].gender,x[g].age);
                printf("\n\n");
            }
        }
    }
    else if(h==3)
    {
    	int date,month,year,g;
    	printf("enter the date,month,year");
        scanf("%d %d %d ",&date,&month,&year);
    	for(g=0; g<num; g++)
   		{
    		printf("\n");
        	if(x[g].date==date  && x[g].month==month && x[g].year==year)
        	{
        		printf("Serial Number=%d\n",g);
                printf("Name = ");
                puts(x[g].name);
                printf("Disease = ");
                puts(x[g].disease);
                printf("address=");
          	    puts(x[g].address);
          	    printf("Phone number = +91");
           		puts(x[g].phone);
                printf("gender=%c\nAge = %d",x[g].gender,x[g].age);
                printf("\n\n");
        		
			}
        	
        }
    	
	}
    else
    {
    	printf("enter the valid number");
	}

}
void del()
{
    int f,h;
    printf("Enter the serial number of the patient that you want to delete=");
    scanf("%d",&f);
    if(f<num)
    {
        printf("What do you want ?\n");
        printf("1.Remove the whole record\n2.Remove Name\n3.Remove Disease\n4.Remove age\n5.Remove gender\n6.Remove address\n7.Remove phone number\nOption = ");
        scanf("%d",&h);
        if(h==1)
        {
            while(f<num)
            {
                strcpy(x[f].name,x[f+1].name);
                strcpy(x[f].disease,x[f+1].disease);
                x[f].age=x[f+1].age;
                x[f].gender=x[f+1].gender;
                strcpy(x[f].address,x[f+1].address);
                strcpy(x[f].phone,x[f+1].phone);
                f++;
            }
            num--;
        }
        else if(h==2)
        {
            strcpy(x[f].name,"Cleared");

        }
        else if(h==3)
        {
            strcpy(x[f].disease,"Cleared");
        }
        else if(h==4)
        {
            x[f].age=0;
        }
        else if(h==5)
        {
            x[f].gender=0;
        }
        else if(h==6)
        {
        	strcpy(x[f].address,"cleared");
		}
        else if(h==7)
        {
            strcpy(x[f].phone,"cleared");
        }

    }
    else
        printf("\n\nInvalid Serial number\n");

}
void read()
{
    FILE *fp = fopen("patient.txt","rb");
    if(fp == NULL)
    {
        fp = fopen("patient.txt","ab");
        fclose(fp);
        printf("File does not exist, I JUST CREATED IT, exiting...\n\n\n");
    }
    num = fread(&x, sizeof(struct patient),100, fp);
    fclose(fp);
}
void write()
{
    FILE *fp = fopen("patient.txt","wb");
    if(fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    
    fwrite(&x, sizeof(struct patient),num, fp);
    fclose(fp);
}
void patient_fee()
{
	int s,f,h;
	int fees,total;
    char u[100];
    printf("enter the fee details of a patient by? \n");
    printf("1.Serial no.\n2.Name\n\nOption = ");
    scanf("%d",&h);
    if(h==1)
    {
    	printf("enter the serial number:");
    	scanf("%d",&f);
    	if(f<num)
    	{
    		printf("\n");
            printf("Serial Number=%d\n",f);
            printf("Name =");
            puts(x[f].name);
            printf("enter the fees:");
			scanf("%d",&fees);
			total=bill(x[f].fees,x[f].disease,x[f].cass);		
		}
		else
		{
			printf("Not found serial number");
		}		
	}
	if(h==2)
	{
		printf("enter the name of a patient");
		scanf("%s",u);
		for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].name)==0)
            {
				printf("\n");
         	   	printf("Serial Number=%d\n",g);
        	    printf("Name = ");
        	    puts(x[g].name);
				total=bill(x[g].fees,x[g].disease,x[g].cass);		
			}
		}
	}
}
void patient_list()
{
	int i,l=0,g=0,k=0,count=0;
	for(i=0;i<num;i++)
	{
		if(strcmp(x[i].disease,"cancer")==0)
		{
			count++;
		}
		else if(strcmp(x[i].disease,"kidney_problem")==0)
		{
			g++;
		}
		else if(strcmp(x[i].disease,"fractures")==0)
		{
			l++;
		}
		else
		{
			k++;
		}
	}
	printf("\nNo.of cancer patients:%d",count);
	printf("\nNo.of kidney_problem patients:%d",g);
	printf("\nNo.of fractures patients:%d",l);
	printf("\nNo.of normal patients:%d",k);
	printf("\ntotal no.of patients:%d",count+g+k+l);

	
}

void password()
{
	int i;
	char Username[15];
	char Password[15];
	char original_Username[25]="RGUKT";
	char original_Password[15]="rgukt123";
	do
	{
		system("cls");
		printf("\n\n\n\n\t\t\t\tEnter your Username and Password :)");
		printf("\n\n\n\t\t\t\t\tUSERNAME:");
		scanf("%s",&Username);
		printf("\n\n\t\t\t\t\tPASSWORD:");
		scanf("%s",&Password);	
	if (strcmp(Username,original_Username)==0 && strcmp(Password,original_Password)==0)
	{
		printf("\n\n\n\t\t\t\t\t...Login Successfull...");	
		break;
		
	}
	else
	{
		printf("\n\t\t\tPassword in incorrect:( Try Again:)");
		i++;
	}
    }while(i!=3);
}
