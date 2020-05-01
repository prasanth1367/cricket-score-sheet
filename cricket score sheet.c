#include<stdio.h>
#include<string.h>
int new_score_sheet(int,int,int);
int main()
{
int choice;
char c;//c-continue
char ch;
char d;
printf("CRICKET SCORE SHEET\n");
printf("Todays menu board:\n1.New Score Sheet\n2.View Score Sheet\n3.Exit\n");
scanf("%d", &choice);
if(choice==1)
{
FILE *fptr1,*fptr2;
int a,b,c;
char filename[50];
fptr1=fopen("New Score Sheet","w");
new_score_sheet(a,b,c);
return 0;
printf("Do you want to continue or not?\n");
scanf("%c", &ch);
if(ch=='c')
{
printf("To view the score sheet\n");
printf("Enter the filename\n");
scanf("%s", filename);
fptr2=fopen("filename","r");
if(fptr1==fptr2)
{
printf("File exist\n");
view_score_sheet(d);
}
else
{
printf("File doesnt exist\n");
}
}
}
}
int new_score_sheet(int competition,int toss1,int toss2)
{
int  x,out,extras1;
char venue[50];
char team1[20],team2[20];
char batsmen_name[11];
char bowlers_name[8];
char day[15];
int innings,date,year,month,total_runs,runs,balls,overs,extras,n,m;
int _4s;
int _6s;
int i,j,total_overs,total_balls;
printf("Enter todays date, month, day and year:\n");
scanf("%d", &date);
scanf("%d", &month);
scanf("%d", &year);
scanf("%s", &day);
printf("Today is %d\t%d\t%d\t%s\n", date,month,year,day);
printf("Type of Cricket Match\n");
scanf("%d", &competition);
if(competition==1)
{
printf("T-20 series match\n");
printf("Total overs:");
scanf("%d", &total_overs);
printf("Total number balls:");
scanf("%d", &total_balls);
}
else if(competition==2)
{
printf("One day test match\n");
printf("Total overs:");
scanf("%d", &total_overs);
printf("Total number balls:");
scanf("%d", &total_balls);
}
else if(competition==3)
{
printf("IPL match\n");
printf("Total overs:");
scanf("%d", &total_overs);
printf("Total number balls:");
scanf("%d", &total_balls);
}
printf("Enter the place where the match is going to be held\n");
scanf("%s", &venue);
printf("Enter the names of the two teams for todays match\n");
scanf("%s", &team1);
scanf("%s", &team2);
printf("Toss decision for team 1\n");
scanf("%d", &toss1);
printf("Toss decision for team 2\n");
scanf("%d", &toss2);
if(toss1==0 && toss2==1) //0-heads,1-tails                         
{
printf("The toss won by team 1 %d\n", toss1);
printf("Choose batting or bowling\n");
scanf("%d", &x);
if(x==1)
{
printf("Team 1 chose to bat first.\n");
printf("Enter the innings:\n");
scanf("%d", &innings);
printf("Enter how many batsmen:");
scanf("%d", &n);
printf("Enter the names:\n");
for(i=0;i<n;i++)
{
scanf("%s", batsmen_name[i]);
}
for(i=0;i<n;i++)
{
printf("Batsmen name is %s", batsmen_name[i]);
}
printf("Team 2 bowls first.\n");
printf("Enter how many bowlers:");
scanf("%d", &m);
printf("Enter their names:\n");
for(j=0;j<m;j++)
{
scanf("%s", bowlers_name[j]);
}
for(j=0;j<m;j++)
{
printf("%s", bowlers_name[j]);
}
printf("Enter the first two batsmen name and first bowler name:");
for(i=0;i<2;i++)
{
scanf("%s", &batsmen_name[i]);
}
for(j=0;j<1;j++)
{
scanf("%s", bowlers_name[j]);
}
printf("The batsmen and the bowler:\n");
for(i=0;i<2;i++)
{
printf("%s", &batsmen_name[i]);
}
for(j=0;j<1;j++)
{
printf("%s", bowlers_name[j]);
}
printf("Enter batsmen_name batting first and bowler_name\n");
for(i=0;i<1;i++)
{
printf("%s", batsmen_name[i]);
}
for(j=0;j<1;j++)
{
printf("%s", bowlers_name[j]);
}
printf("Enter the overs:");
scanf("%d", &overs);
printf("Enter the runs scored by first batsmen:");
scanf("%d", &runs);
printf("How the extras are counted?\n");
scanf("%d", &extras);
if(extras==1)
{
printf("Extras is given because of no ball.\n");
}
else if(extras==2)
{
printf("Extras is given because of wide.\n");
}
else if(extras==3)
{
printf("Extras is given because of bye.\n");
}
else if(extras==4)
{
printf("Extras is given because of legbye.\n");
}
else if(extras==5)
{
printf("Extras is given because of penalty run.\n");
}
printf("How many extras first batsmen got:");
scanf("%d", &extras);
printf("Enter how first batsmen got out\n");
scanf("%d", &out);
if(out==1)
{
printf("Run out.\n");
}
else if(out==2)
{
printf("Bowled.\n");
}
else if(out==3)
{
printf("Catch.\n");
}
else if(out==4)
{
printf("LBW\n");
}
printf("Total runs scored by the first batsmen:");
scanf("%d", &total_runs);
}
else
{
printf("Team 1 chose to bowl first.\n");
printf("Enter the innings:\n");
scanf("%d", &innings);
printf("Enter how many bowlers:");
scanf("%d", &m);
for(i=0;i<m;i++)
{
scanf("%s", bowlers_name[i]);
}
for(i=0;i<m;i++)
{
printf("%s", bowlers_name[i]);
}
printf("The team 2 going to bat first.\n");
printf("Enter how many batsmen:");
scanf("%d", &n);
printf("Enter the first two batsmen name and first bowler name:");
for(i=0;i<2;i++)
{
scanf("%s", &batsmen_name[i]);
}
for(j=0;j<1;j++)
{
scanf("%s", bowlers_name[j]);
}
printf("The batsmen and the bowler:\n");
for(i=0;i<2;i++)
{
printf("%s", &batsmen_name[i]);
}
for(j=0;j<1;j++)
{
printf("%s", bowlers_name[j]);
}
printf("Enter batsmen_name batting first and bowler_name\n");
for(i=0;i<1;i++)
{
printf("%s", batsmen_name[i]);
}
for(j=0;j<1;j++)
{
printf("%s", bowlers_name[j]);
}
printf("Enter the overs:");
scanf("%d", &overs);
printf("Enter the runs scored by first batsmen:");
scanf("%d", &runs);
printf("How the extras are counted?\n");
scanf("%d", &extras);
if(extras==1)
{
printf("Extras is given because of no ball.\n");
}
else if(extras==2)
{
printf("Extras is given because of wide.\n");
}
else if(extras==3)
{
printf("Extras is given because of bye.\n");
}
else if(extras==4)
{
printf("Extras is given because of legbye.\n");
}
else if(extras==5)
{
printf("Extras is given because of penalty run.\n");
}
printf("How many extras first batsmen got:");
scanf("%d", &extras);
printf("Enter how first batsmen got out\n");
scanf("%d", &out);
if(out==1)
{
printf("Run out.\n");
}
else if(out==2)
{
printf("Bowled.\n");
}
else if(out==3)
{
printf("Catch.\n");
}
else if(out==4)
{
printf("LBW\n");
}
printf("Total runs scored by the first batsmen:");
scanf("%d", &total_runs);
}
}
else if(toss1==1 && toss2==0) 
{
printf("The toss won by team 2 %s", toss2);
printf("Choose batting or bowling\n");
scanf("%d", &x);
if(x==1)
{
printf("Team 2 chose to bat first.\n");
printf("Enter the innings:\n");
scanf("%d", &innings);
printf("Enter how many batsmen:");
scanf("%d", &n);
for(i=0;i<n;i++)
{
scanf("%s", batsmen_name[i]);
}
for(j=0;j<n;j++)
{
printf("Batsmen name is %s", batsmen_name[j]);
}
printf("Team 1 chose to bowl first.\n");
printf("Enter how many bowlers:");
scanf("%d", &m);
for(i=0;i<m;i++)
{
scanf("%s", bowlers_name[i]);
}
for(i=0;i<m;i++)
{
printf("%s", bowlers_name[i]);
}
printf("Enter the first two batsmen name and first bowler name:");
for(i=0;i<2;i++)
{
scanf("%s", &batsmen_name[i]);
}
for(j=0;j<1;j++)
{
scanf("%s", bowlers_name[j]);
}
printf("The batsmen and the bowler:\n");
for(i=0;i<2;i++)
{
printf("%s", &batsmen_name[i]);
}
for(j=0;j<1;j++)
{
printf("%s", bowlers_name[j]);
}
printf("Enter batsmen_name batting first and bowler_name\n");
for(i=0;i<1;i++)
{
printf("%s", batsmen_name[i]);
}
for(j=0;j<1;j++)
{
printf("%s", bowlers_name[j]);
}
printf("Enter the overs:");
scanf("%d", &overs);
printf("Enter the runs scored by first batsmen:");
scanf("%d", &runs);
printf("How the extras are counted?\n");
scanf("%d", &extras);
if(extras==1)
{
printf("Extras is given because of no ball.\n");
}
else if(extras==2)
{
printf("Extras is given because of wide.\n");
}
else if(extras==3)
{
printf("Extras is given because of bye.\n");
}
else if(extras==4)
{
printf("Extras is given because of legbye.\n");
}
else if(extras==5)
{
printf("Extras is given because of penalty run.\n");
}
printf("How many extras first batsmen got:");
scanf("%d", &extras);
printf("Enter how first batsmen got out\n");
scanf("%d", &out);
if(out==1)
{
printf("Run out.\n");
}
else if(out==2)
{
printf("Bowled.\n");
}
else if(out==3)
{
printf("Catch.\n");
}
else if(out==4)
{
printf("LBW\n");
}
printf("Total runs scored by the first batsmen:");
scanf("%d", &total_runs);
}
else
{
printf("Team 2 chose to bowl first.\n");
printf("Enter the innings:\n");
scanf("%d", &innings);
printf("Enter how many bowlers:");
scanf("%d", &m);
for(i=0;i<m;i++)
{
scanf("%s", bowlers_name[i]);
}
for(i=0;i<m;i++)
{
printf("%s", bowlers_name[i]);
}
printf("Team 1 is going to bat first.\n");
printf("Enter how many batsmen:");
scanf("%d", &n);
for(i=0;i<n;i++)
{
scanf("%s", batsmen_name[i]);
}
for(i=0;i<n;i++)
{
printf("Batsmen name is %s", batsmen_name[i]);
}
printf("Enter the first two batsmen name and first bowler name:");
printf("Enter the first two batsmen name and first bowler name:");
for(i=0;i<2;i++)
{
scanf("%s", &batsmen_name[i]);
}
for(j=0;j<1;j++)
{
scanf("%s", bowlers_name[j]);
}
printf("The batsmen and the bowler:\n");
for(i=0;i<2;i++)
{
printf("%s", &batsmen_name[i]);
}
for(j=0;j<1;j++)
{
printf("%s", bowlers_name[j]);
}
printf("Enter batsmen_name batting first and bowler_name\n");
for(i=0;i<1;i++)
{
printf("%s", batsmen_name[i]);
}
for(j=0;j<1;j++)
{
printf("%s", bowlers_name[j]);
}
printf("Enter the overs:");
scanf("%d", &overs);
printf("Enter the runs scored by first batsmen:");
scanf("%d", &runs);
printf("How the extras are counted?\n");
scanf("%d", &extras);
if(extras==1)
{
printf("Extras is given because of no ball.\n");
}
else if(extras==2)
{
printf("Extras is given because of wide.\n");
}
else if(extras==3)
{
printf("Extras is given because of bye.\n");
}
else if(extras==4)
{
printf("Extras is given because of legbye.\n");
}
else if(extras==5)
{
printf("Extras is given because of penalty run.\n");
}
printf("How many extras first batsmen got:");
scanf("%d", &extras);
printf("Enter how first batsmen got out\n");
scanf("%d", &out);
if(out==1)
{
printf("Run out.\n");
}
else if(out==2)
{
printf("Bowled.\n");
}
else if(out==3)
{
printf("Catch.\n");
}
else if(out==4)
{
printf("LBW\n");
}
printf("Total runs scored by the first batsmen:");
scanf("%d", &total_runs);
}
}
return total_runs;
}
