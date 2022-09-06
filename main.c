#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 5

typedef struct
{
    int nameCardID;
    char personName[20];
    char companyName[20];
} NameCard;
	/*end_edit*/
	/*edit*/
/* Write your code here */


void listNameCards(NameCard *, int *);
void addNameCard(NameCard *, int *);
void removeNameCard(NameCard *, int *);
void getNameCard(NameCard *, int *);
void nameCardSort(NameCard *, int *);
void printNameCard(NameCard);

int main()
{

    int optionsNo = 0,numOfNameCard = 0, *ptrNum;
    ptrNum = &numOfNameCard;

    NameCard ncHolder[MAX] = {};


    printf("NTU NAME CARD HOLDER MANAGEMENT PROGRAM:\n"
           "1: listNameCards()\n"
           "2: addNameCard()\n"
           "3: removeNameCard()\n"
           "4: getNameCard()\n"
           "5: quit\n"
           "Enter your choice:\n");
    do
    {

        scanf("%d",&optionsNo);

        switch(optionsNo)
        {
        case 1:
            listNameCards(ncHolder,ptrNum);
            break;
        case 2:
            nameCardSort(ncHolder,ptrNum);
            addNameCard(ncHolder,ptrNum);
            nameCardSort(ncHolder,ptrNum);
            break;
        case 3:
            nameCardSort(ncHolder,ptrNum);
            removeNameCard(ncHolder,ptrNum);
            nameCardSort(ncHolder,ptrNum);
            break;
        case 4:
            getNameCard(ncHolder,ptrNum);
            break;
        case 5:
            continue;
        default:
            break;
        }

        printf("Enter your choice:\n");
    }
    while(optionsNo != 5);

    return 0;
}

void listNameCards(NameCard *ncHolder,int *ptrNum)
{
    printf("listNameCards():\n");


    if(*ptrNum > 0)
    {
        for(int i = 0; i < *ptrNum; i++)
        {
            printNameCard(ncHolder[i]);
        }
    }
    else
    {

        printf("The name card holder is empty\n");
    }

}

void addNameCard(NameCard *ncHolder, int *ptrNum)
{

    printf("addNameCard():\n");

    int id,existed = 0;
    char name[20],companyName[20],*p,*q;
    printf("Enter nameCardID:\n");
    scanf("%d",&id);
    printf("Enter personName:\n");
    scanf("\n");
    fgets(name,20,stdin); if (p=strchr(name,'\n')) *p = '\0';
    printf("Enter companyName:\n");
    scanf("\n");
    fgets(companyName,20,stdin); if (q=strchr(companyName,'\n')) *q = '\0';
//    scanf(" %[^\n]s",companyName);

    if(*ptrNum < MAX)
    {
        for(int i = 0; i < *ptrNum; i++)
        {
            if(ncHolder[i].nameCardID == id)
            {
                existed = 1;
            }
        }

        if(existed == 1)
        {
            printf("The nameCardID has already existed\n");
        }
        else
        {
            NameCard n1;
            n1.nameCardID = id;
            strcpy(n1.personName,name);
            strcpy(n1.companyName,companyName);

            ncHolder[*ptrNum] = n1;
            printf("The name card has been added successfully\n");
            (*ptrNum)++;
        }

    }
    else
    {

        printf("The name card holder is full\n");
    }
}

void removeNameCard(NameCard *ncHolder, int *ptrNum)
{
    char name[20], *p;
    int foundOrNotFound;
    printf("removeNameCard():\n");


    printf("Enter personName:\n");
    scanf("\n");
    fgets(name,20,stdin); if (p=strchr(name,'\n')) *p = '\0';

    if(*ptrNum > 0)
    {
        for(int i = 0; i < *ptrNum; i++)
        {
            foundOrNotFound = strcasecmp(name,ncHolder[i].personName);
            if(foundOrNotFound == 0)
            {


                printf("The name card is removed\n");
                printNameCard(ncHolder[i]);
                if(i+1 < MAX)
                {
                    for(int j = i; j < *ptrNum; j++)
                    {
                        ncHolder[j] = ncHolder[j+1];
                    }
                }
                else
                {
                    ncHolder[i].nameCardID = 0;
                    strcpy(ncHolder[i].companyName,"\0");
                    strcpy(ncHolder[i].personName,"\0");
                }
                (*ptrNum)--;
                break;
            }
        }
        if(foundOrNotFound != 0)
        {
            printf("The target person name is not in the name card holder\n");
        }
    }
    else
    {
        printf("The name card holder is empty\n");
    }

}

void getNameCard(NameCard *ncHolder, int *ptrNum)
{

    char name[20], *p;
    int foundOrNotFound;
    printf("getNameCard():\n");

    printf("Enter personName:\n");
    scanf("\n");
    fgets(name,20,stdin); if (p=strchr(name,'\n')) *p = '\0';

    for(int i = 0; i < *ptrNum; i++)
    {
        foundOrNotFound = strcasecmp(name,ncHolder[i].personName);
        if(foundOrNotFound == 0)
        {

            printf("The target person name is found\n");
            printNameCard(ncHolder[i]);
            break;
        }
    }

    if(foundOrNotFound != 0)
    {
        printf("The target person name is not found\n");
    }

}

void nameCardSort(NameCard *ncHolder, int *ptrNum)
{
    NameCard tempNameCard;

    for(int i = 0; i < *ptrNum-1; i++)
    {
        for(int j = 0; j < (*ptrNum-1-i); j++)
        {
            if(ncHolder[j].nameCardID > ncHolder[j+1].nameCardID)
            {
                tempNameCard = ncHolder[j];
                ncHolder[j] = ncHolder[j+1];
                ncHolder[j+1] = tempNameCard;
            }
        }

    }
}

void printNameCard(NameCard nc)
{
    printf("nameCardID: %d\n",nc.nameCardID);
    printf("personName: %s\n",nc.personName);
    printf("companyName: %s\n",nc.companyName);
}
