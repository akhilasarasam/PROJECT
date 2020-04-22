#include<stdio.h>
void votesCount();
void castVote();
void getLeadingCandidate();
#define c1 "X"
#define c2 "Y"
#define c3 "Z"
#define c4 "W"

int v1=0, v2=0, v3=0, v4=0, error=0;

void castVote(){
printf("\nYou can cast your votes 5 times\n");
for(int i=0;i<6;i++)
{int choice;    
printf("\n\n Select the candidate\n\n");
printf("\n 1. %s", c1);
printf("\n 2. %s", c2);
printf("\n 3. %s", c3);
printf("\n 4. %s", c4);
printf("\n 5. %s", "None of These");

printf("\n\n Input your choice from (1 - 4) : ");
scanf("%d",&choice);

switch(choice)
{
    case 1: v1++; break;
    case 2: v2++; break;
    case 3: v3++; break;
    case 4: v4++; break;
    case 5: error++; break;
    default: printf("\n Error: Wrong Choice !! Please enter a valid number ");
            
            
}
}
 votesCount();

}

void votesCount(){
printf("\n\n Number of votes");
printf("\n Number of votes for %s - %d ", c1, v1);
printf("\n Number of votes for %s - %d ", c2, v2);
printf("\n Number of votes for %s - %d ", c3, v3);
printf("\n Number of votes for %s - %d ", c4, v4);
printf("\n Number of  %s - %d ", "Spoiled Votes", error); 
getLeadingCandidate();
}

void getLeadingCandidate(){
    
    if(v1>v2 && v1>v3 && v1 >v4)
    printf("Winning candidate is %s",c1);
    else if (v2>v3 && v2>v4 && v2 >v1)
    printf("Winning candidate is %s",c2);
    else if(v3>v4 && v3>v2 && v3 >v1)
    printf("Winning candidate is %s]",c3);
    else if(v4>v1 && v4>v2 && v4 >v3)
    printf("Winning candidate is %s",c4);
    else
    printf("\nError");    
    

    
    
}

int main()
{
int choice;
printf("\n\n Voting System");
printf("\n\n 1. Cast the Vote");
printf("\n 2. Vote Count");
printf("\n 3.Winning candidate");
printf("\n 0. Exit");

printf("\n\n Please enter your choice : ");
scanf("%d", &choice);

switch(choice)
{
case 1: castVote();break;
case 2: votesCount();break;
case 3: getLeadingCandidate();break;
default: printf("\n Error: Invalid Choice");
}


return 0;
}
