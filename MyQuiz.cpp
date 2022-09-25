#include<stdio.h>
#include<fstream>
#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
void show_record();
void reset_score();
void help();
void edit_score(float , char []);
int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char player_name[20];
     main_home:
     system("cls");
	 cout<<"\n\t\t========================================";
     cout<<"\n\t\t\t  MINE PROGRAM QUIZ GAME\n";
     cout<<"\n\t\t________________________________________";
     cout<<"\n\t\t\t          WELCOME ";
     cout<<"\n\t\t\t             to ";
     cout<<"\n\t\t\t   THE GAME OF MR.ATTITUDE ";
     cout<<"\n\t\t________________________________________";
     cout<<"\n\t\t________________________________________";
     cout<<"\n\t\t     Come And Fight the Quiz!!   " ;
     cout<<"\n\t\t________________________________________";
     cout<<"\n\t\t________________________________________"; 
     cout<<"\n\t\t > Press S to start the game";
     cout<<"\n\t\t > Press V to View the Highest Score  ";
     cout<<"\n\t\t > Press R to Reset Score";
     cout<<"\n\t\t > Press H for Help            ";
     cout<<"\n\t\t > Press Q to Quit             ";
     cout<<"\n\t\t________________________________________\n\n";
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto main_home;
	}
     else if (choice=='H')
	{
	help();
	getch();
	goto main_home;
	}
	else if (choice=='R')
	{
		reset_score();
	getch();
	goto main_home;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
    {
     system("cls");

    cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:";
     gets(player_name);

    system("cls");
  cout<<"\n <-----------------  Welcome To Quiz Game ------------------------>\n"<<"\t\t\t\t"<<player_name;
  cout<<"\n\n Here are some tips you might wanna know before playing:";
  cout<<"\n -------------------------------------------------------------------------";
  cout<<"\n >> There are 2 Rounds in this Quiz Game,Qualifying Round & Final Round";
  cout<<"\n >> In Qualifying round you will be asked a total of 3 questions to test your";
  cout<<"\n >> general knowledge. You are eligible to play the game if you give atleast 2";
  cout<<"\n >> right answers, otherwise you can't proceed further to the Final Round.";
  cout<<"\n >> Your game starts with Qualifying Round. In this round you will be asked a";
  cout<<"\n >> total of 10 questions. Each right answer will be awarded $10000!";
  cout<<"\n >> By this way you can win upto ONE MILLION cash prize!!!!!..........";
  cout<<"\n >> You will be given 4 options and you have to press A, B ,C or D for the";
  cout<<"\n    right option.";
  cout<<"\n >> You will be asked questions continuously, till right answers are given";
  cout<<"\n >> No negative marking for wrong answers!";
  cout<<"\n\n!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!";
  cout<<"\n\n\n Press Y  to start the game!\n";
  cout<<"\n Press any other key to return to the main menu!";
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto main_home;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;


     switch(r1)
		{
		case 1:
		cout<<"\n\nWhich of the following is a Palindrome number?";
		cout<<"\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234";
		if (toupper(getch())=='C')
			{
			    cout<<"\n\nCorrect!!!";count++;
			    getch();
			    break;
}
		else
		       {
		           cout<<"\n\nWrong!!! The correct answer is C.23232";
		           getch();
		       break;
		       }

        case 2:
		cout<<"\n\n\nThe country with the highest environmental performance index is...";
		cout<<"\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland";
		if (toupper(getch())=='C')
			{cout<<"\n\nCorrect!!!";count++;
			getch();
			break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is C.Switzerland";
		       getch();
		       break;}

        case 3:
		cout<<"\n\n\nWhich animal laughs like human being?";
		cout<<"\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee";
		if (toupper(getch())=='B')
			{cout<<"\n\nCorrect!!!";count++;
			getch();
			break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is B.Hyena";
		       getch();
		       break;}

        case 4:
		cout<<"\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?";
		cout<<"\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Christiano Ronaldo";
		if (toupper(getch())=='B')
			{cout<<"\n\nCorrect!!!";count++;
			getch();
			 break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is B.Lucas Podolski";
		       getch();
		       break;}

        case 5:
        cout<<"\n\n\nWhich is the third highest mountain in the world?";
        cout<<"\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro";
        if (toupper(getch())=='B')
               {cout<<"\n\nCorrect!!!";count++;
               getch();
                break;}
        else
		       {cout<<"\n\nWrong!!! The correct answer is B.Mt. Kanchanjungha";
		       getch();
		       break;}

        case 6:
		cout<<"\n\n\nWhat is the group of frogs known as?";
		cout<<"\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army";
		if (toupper(getch())=='D' )
			{cout<<"\n\nCorrect!!!";count++;
			getch();
			break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is D.An Army";
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	cout<<"\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME,\t\n BETTER LUCK NEXT TIME.......";
	getch();
	goto main_home;
	}
     test:
     system("cls");
     cout<<"\n\n\t*** CONGRATULATION "<<player_name<<" You are eligible to play the Game ***\n\t";
     cout<<"\n\n\n\n\t!Press any key to Start the Game!";
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=10;i++)
     {system("cls");
     r=i;

     switch(r)
		{
		case 1:
		cout<<"\n\nWhat is the National Game of England?";
		cout<<"\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball";
		if (toupper(getch())=='C')
			{cout<<"\n\nCorrect!!!";countr++;getch();
			 break;getch();}
		else
		       {cout<<"\n\nWrong!!! The correct answer is C.Cricket";getch();
		       goto score;
		       break;}

		case 2:
		cout<<"\n\n\nStudy of Earthquake is called............,";
		cout<<"\n\nA.Seismology\t\tB.Cosmology\n\nC.Orology\t\tD.Etimology";
		if (toupper(getch())=='A')
			{cout<<"\n\nCorrect!!!";countr++;getch();
			 break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is A.Seismology";getch();
		      goto score;
		       break;
		       }

        case 3:
		cout<<"\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ";
		cout<<"\n\nA.6\t\tB.7\n\nC.8\t\tD.9";
		if (toupper(getch())=='C')
			{cout<<"\n\nCorrect!!!";countr++;getch();
			 break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is C.8";getch();
		       goto score;
		       break;}

        case 4:
		cout<<"\n\n\nThe Laws of Electromagnetic Induction were given by?";
		cout<<"\n\nA.Faraday\t\tB.Tesla\n\nC.Maxwell\t\tD.Coulomb";
		if (toupper(getch())=='A')
			{cout<<"\n\nCorrect!!!";countr++;getch();
			 break;}
		else
		       {
                cout<<"\n\nWrong!!! The correct answer is A.Faraday";getch();
		       goto score;
		       break;
		       }

        case 5:
		cout<<"\n\n\nIn what unit is electric power measured?";
		cout<<"\n\nA.Coulomb\t\tB.Watt\n\nC.Power\t\tD.Units";
		if (toupper(getch())=='B')
			{cout<<"\n\nCorrect!!!";countr++;getch(); break;}
		else
		       {
		           cout<<"\n\nWrong!!! The correct answer is B.Power";
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		cout<<"\n\n\nWhich element is found in Vitamin B12?";
		cout<<"\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron";
		if (toupper(getch())=='B' )
			{cout<<"\n\nCorrect!!!";countr++;getch();
			 break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is B.Cobalt";goto score;
		       getch();
		       break;}

        case 7:
		cout<<"\n\n\nWhat is the National Name of Japan?";
		cout<<"\n\nA.Polska\t\tB.Hellas\n\nC.Drukyul\t\tD.Nippon";
		if (toupper(getch())=='D')
			{cout<<"\n\nCorrect!!!";countr++;getch();
			 break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is D.Nippon";getch();
		       goto score;
		       break;}

        case 8:
		cout<<"\n\n\nHow many times a piece of paper can be folded at the most?";
		cout<<"\n\nA.6\t\tB.7\n\nC.8\t\tD.Depends on the size of paper";
		if (toupper(getch())=='B')
			{cout<<"\n\nCorrect!!!";countr++;getch(); break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is B.7";getch();
		       goto score;
		       break;}

        case 9:
		cout<<"\n\n\nWhat is the capital of Denmark?";
		cout<<"\n\nA.Copenhagen\t\tB.Helsinki\n\nC.Ajax\t\tD.Galatasaray";
		if (toupper(getch())=='A')
			{cout<<"\n\nCorrect!!!";countr++; getch();
			break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is A.Copenhagen";getch();
		       goto score;
		       break;}

        case 10:
		cout<<"\n\n\nWhich is the longest River in the world?";
		cout<<"\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon";
		if (toupper(getch())=='A')
			{cout<<"\n\nCorrect!!!";countr++;getch(); break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is A.Nile";getch();break;goto score;}

        case 11:
		cout<<"\n\n\nWhat is the color of the Black Box in aeroplanes?";
		cout<<"\n\nA.White\t\tB.Black\n\nC.Orange\t\tD.Red";
		if (toupper(getch())=='C')
			{cout<<"\n\nCorrect!!!";countr++;getch();
			 break;}
		else
              {cout<<"\n\nWrong!!! The correct answer is C.Orange";getch();
              break;goto score;}

        case 12:
		cout<<"\n\n\nWhich city is known at 'The City of Seven Hills'?";
		cout<<"\n\nA.Rome\t\tB.Vactican City\n\nC.Madrid\t\tD.Berlin";
		if (toupper(getch())=='A')
			  {cout<<"\n\nCorrect!!!";countr++;getch();
			   break;}
		else
              {cout<<"\n\nWrong!!! The correct answer is A.Rome";getch();
              break;goto score;}

		case 13:
		cout<<"\n\n\nName the country where there no mosquitoes are found?";
		cout<<"\n\nA.Japan\t\tB.Italy\n\nC.Argentina\t\tD.France";
		if (toupper(getch())=='D')
			{cout<<"\n\nCorrect!!!";countr++;getch();
			break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is D.France";getch();
		       break;goto score;}

        case 14:
		cout<<"\n\n\nWho is the author of 'Pulpasa Cafe'?";
		cout<<"\n\nA.Narayan Wagle\t\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\t\tD.Khagendra Sangraula";
		if (toupper(getch())=='A')
			{cout<<"\n\nCorrect!!!";countr++;getch();
			 break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is A.Narayan Wagle";getch();
		       break;goto score;}

		case 15:
		cout<<"\n\n\nWhich Blood Group is known as the Universal Recipient?";
		cout<<"\n\nA.A\t\tB.AB\n\nC.B\t\tD.O";
		if (toupper(getch())=='B')
			{cout<<"\n\nCorrect!!!";countr++;getch();
			 break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is B.AB";getch();
		       goto score;
		       break;}

		case 16:
		cout<<"\n\n\nWhat is the unit of measurement of distance between Stars?";
		cout<<"\n\nA.Light Year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer";
		if (toupper(getch())=='A')
			{cout<<"\n\nCorrect!!!";countr++; getch();
			break;
			}
		else
		       {cout<<"\n\nWrong!!! The correct answer is A.Light Year";getch();
		       goto score;
		       break;}
		case 17:
		cout<<"\n\n\nThe country famous for Samba Dance is........";
		cout<<"\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia";
		if (toupper(getch())=='A')
			{cout<<"\n\nCorrect!!!";countr++; getch();
			break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is A.Brazil";getch();goto score;
		       break;}
		case 18:
		cout<<"\n\n\nWind speed is measure by__________?";
		cout<<"\n\nA.Lysimeter\t\tB.Air vane\n\nC.Hydrometer\t\tD.Anemometer\n\n";
		if (toupper(getch())=='D')
			{cout<<"\n\nCorrect!!!";countr++; getch();
			break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is D.Anemometer";getch();goto score;
		       break;}
		case 19:
		cout<<"\n\n\nWhich city in the world is popularly known as The City of Temple?";
		cout<<"\n\nA.Delhi\tB.Bhaktapur\n\nC.Kathmandu\tD.Agra\n\n";
		if (toupper(getch())=='C')
			{cout<<"\n\nCorrect!!!";countr++; getch();
			break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is C.Kathmandu";getch();goto score;
		       break;}
		case 20:
		cout<<"\n\n\nWhich hardware was used in the First Generation Computer?";
		cout<<"\n\nA.Transistor\t\tB.Valves\n\nC.I.C\t\tD.S.S.I";
		if (toupper(getch())=='B')
			{cout<<"\n\nCorrect!!!";countr++; getch();
			break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is B.Valves";getch();goto score;
		       break;}
		case 21:
		cout<<"\n\n\nOzone plate is being destroyed regularly because of____ ?";
		cout<<"\n\nA.L.P.G\t\tB.Nitrogen\n\nC.Methane\t\tD. C.F.C";
		if (toupper(getch())=='D')
			{cout<<"\n\nCorrect!!!";countr++; getch();
			break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is D. C.F.C";getch();goto score;
		       break;}
		case 22:
		cout<<"\n\n\nWho won the Women's Australian Open Tennis in 2007?";
		cout<<"\n\nA.Martina Hingis\t\tB.Maria Sarapova\n\nC.Kim Clijster\t\tD.Serena Williams";
		if (toupper(getch())=='D')
			{cout<<"\n\nCorrect!!!";countr++; getch();
			break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is D.Serena Williams";getch();goto score;
		       break;}
		case 23:
		cout<<"\n\n\nWhich film was awarded the Best Motion Picture at Oscar in 2010?";
		cout<<"\n\nA.The Secret in their Eyes\t\tB.Shutter Island\n\nC.The King's Speech\t\tD.The Reader";
		if (toupper(getch())=='C')
			{cout<<"\n\nCorrect!!!";countr++; getch();
			break;}
		else
		       {cout<<"\n\nWrong!!! The correct answer is C.The King's Speech";getch();goto score;
		       break;}}}
	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   cout<<"\n\n\t\t**************** CONGRATULATION *****************";
	     cout<<"\n\t You won $"<<score;
		 goto go;}

	 else if(score==1000000.00)
	{
	    cout<<"\n\n\n \t\t**************** CONGRATULATION ****************";
	    cout<<"\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!";
	    cout<<"\n\t\t You won $"<<score;
	    cout<<"\n\t\t Thank You!!";
	}
	 else
{
	 cout<<"\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********";
	    cout<<"\n\t\t Thanks for your participation";
	    cout<<"\n\t\t TRY AGAIN";
		goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,player_name);
		goto main_home;}}}

void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	cout<<"\n\n\t\t*************************************************************";
	cout<<"\n\n\t\t You has secured the Highest Score "<<name<<" "<<scr;
	cout<<"\n\n\t\t*************************************************************";
	fclose(f);
	getch();} 

void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	cout<<(f,"%s,%.2f",nm,sc);
    fclose(f);}

void help()
	{
		system("cls");
    cout<<"\n\n                              HELP";
    cout<<"\n -------------------------------------------------------------------------";
    cout<<"\n ......................... Mine program Quiz Game...........";
    cout<<"\n >> There are two r in the game, Qualifying Round & final Round";
    cout<<"\n >> In Qualifying round you will be asked a total of 3 questions to test your general";
    cout<<"\n >> knowledge. You will be eligible to play the game if you can give atleast 2";
    cout<<"\n >> right answers otherwise you can't play the Game...........";
    cout<<"\n >> Your game starts with the final Round. In this round you will be asked";
    cout<<"\n >> total 10 questions each right answer will be awarded $100,000.";
    cout<<"\n >> By this way you can win upto ONE MILLION cash prize in USD...............";
    cout<<"\n >> You will be given 4 options and you have to press A, B ,C or D for the";
    cout<<"\n    right option";
    cout<<"\n >> You will be asked questions continuously if you keep giving the right answers.";
    cout<<"\n >> No negative marking for wrong answers";

	cout<<"\n\n\t*********************BEST OF LUCK*********************************";
	cout<<"\n\n\t*****MINE PROGRAM QUIZ GAME is developed by Coder Veer********";
	}

void edit_score(float score, char pln[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w"); 
	    fprintf(f,"%s\n%.2f",pln,sc);
	    fclose(f);
	   }
		}
		
