#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
#include<stdio.h>
#include<bios.h>
#include<string.h>
#include<time.h>
void money(int rupee,int z)
	{
	char money[14][23]={"5000","10,000","20,000","40,000","80,000","1,60,000","3,20,000","6,40,000","12,50,000","25,00,000","50,00,000","1 Crore","5 Crore","7 Crore"};

	int x=68,y=14;
	for(int j=0;j<=13;j++)
		{
		gotoxy(x,y);
		cprintf("| ");cprintf(money[j]);
		y--;
		if(j==rupee)
			{
			gotoxy(x,z);
			cprintf("| ");
			textcolor(6);

			cprintf(money[rupee]);
			textcolor(7);

			}
		}

	}
void clearlock()
	{
	gotoxy(2,7);
	cprintf("                        ");gotoxy(2,8);
	textcolor(8);cprintf(" ");textcolor(7);cprintf("  ");gotoxy(12,8);
	textcolor(8);cprintf(" ");textcolor(7);cprintf(" ");
	gotoxy(1,4);
	}

void yeslock()
	{
	gotoxy(2,7);
	cprintf("                        ");gotoxy(2,8);
	textcolor(8);cprintf(" ");textcolor(7);cprintf("  ");gotoxy(12,8);
	textcolor(8);cprintf(" ");textcolor(7);cprintf(" ");

	}
int lock()
	{
	gotoxy(2,7);
	cprintf("Pakka??Lock kiya jae??");gotoxy(2,8);
	textcolor(2);cprintf("Y");textcolor(7);cprintf("es");gotoxy(12,8);
	textcolor(2);cprintf("N");textcolor(7);cprintf("o");
	char c;
	while(c!='Y' || c!='y'|| c!='N'|| c!='n')
	{
	char c=getch();
	if(c=='Y' || c=='y')
		return(0);
	else if(c=='N'|| c=='n')
		return(1);
	}
}
void game()
{
	randomize();
	clrscr();
	int rupee=0;
	int re[15];
	char jonny[15][23]={"0","5000","10,000","20,000","40,000","80,000","1,60,000","3,20,000","6,40,000","12,50,000","25,00,000","50,00,000","1 Crore","5 Crore","7 Crore"};
	char q[25][340]={"Q) What do koala eat?","Q) What do pandas eat?","Q) Among these which is not a cell organelle?","Q) Which among these is a constellation?","Q) When is Infinity War releasing?","Q) Who wrote 'The Ramayana'?","Q) Which the tallest grass?","Q) Who shot Malala?","Q) Which among them is !Outdoor game?","Q) Which among them is !indoor game?","Q) Who is genius among them?","Q) Currently Samsung is working on a ..","Q) iPhone X was launched with a..","Q) How is 'X' is pronounced in iPhone X?","Q) What is last phone launched by Apple Inc.?","Q) What is the latest version of Android?","Q) Where did Anushka Sharma studied?","Q) Delhi Public School shortens upto?","Q) 'What do you mean' was composed by?","Q) What do Monitors display?","Q) What helps us to type in computer?","Q) What is the brain of Computer?","Q) Who is the current Prime Minister of India?","Q) Who is the wife of Jethalal in TMKOC?","Q) How many periods are present in Modern Periodic Table?"};
	char a[25][34]={"D) Eucalyptus","B) Bamboo","C) Plasma","B) Leo","D) May 2018","D) Valmiki","C) Bamboo","D) Taliban","A) Carrom","C) Cricket","A) Shasank","B) Palm sensor","C) Face Sensor","A) Ten","D) iPhone 8+","B) Oreo","B) Margherita","C) D.P.S","D) Justin","C) Output","D) Keyboard","A) CPU","D) N. Modi","B) Daya","D) 7(Seven)"};

	char r1[25][23]={"A) Suguaro","A) Suguaro","A) E.R","A) Earth","A) April 2018","A) Devdas","A) Saguaro","A) ULFA","A) Carrom","A) Carrom","A) Shasank","A) Iris sensor","A) Palm Sensor","A) Ten","A) iPhone 8","A) Nougat","A) Mumbai","A) D.S.S","A) The Rocks","A) Input","A) Mouse","A) CPU","A) J. Nehru","A) Anjali","A) 8(Eight)"};
	char r2[25][23]={"B) Bamboo","B) Bamboo","B) Golgi Bodies","B) Leo","B) March 2018","B) Shasank","B) Eucalyptus","B) Nazi","B) Football","B) Chess","B) Einstien","B) Palm sensor","B) Retina Sensor","B) Ex","B) iPhone X","B) Oreo","B) Margherita","B) D.L.S","B) The Chainsmokers","B) Processing","B) Screen","B) Monitor","B) APJ Kalam","B) Daya","B) 6(Six)"};
	char r3[25][23]={"C) Tape Grass","C) Tape Grass","C) Plasma","C) Moon","C) June 2018","C) Ganesh","C) Bamboo","C) ISIS","C) Badminton","C) Cricket","C) Newton","C) Face sensor","C) Face Sensor","C) X","C) iPhone 9","C) Kitkat","C) Singapore","C) D.P.S","C) J. Derulo","C) Output","C) CPU","C) UPS","C) S. Periwal","C) Babita","C) 5(Five)"};
	char r4[25][23]={"D) Eucalyptus","D) Eucalyptas","D) Mitochondria","D) Ring","D) May 2018","D) Valmiki","D) TapeGrass","D) Taliban","D) Cricket","D) Ludo","D) Galileo","D) Nose sensor","D) Finger Sensor","D) None O.T.A","D) iPhone 8+","D) Jelly Bean","D) Delhi","D) D.B.S","D) Justin","D) Working","D) Keyboard","D) Mouse","D) N. Modi","D) Komal","D) 7(Seven)"};
	int z=14;
	textcolor(7);
	int i=0;
	int n=random(25);
	while(i<14)
	{
	clrscr();
	int flag=0;
	n=random(25);
	for(int kj=0;kj<i;kj++)
		if(n==re[kj])
			flag=1;

	re[i]=n;
	if(flag==0)
	{
	gotoxy(12,13);
	textcolor(8);
	cprintf("The upcoming question is for ");
	cprintf(jonny[i+1]);
	delay(700);
	clrscr();

	textcolor(7);
	gotoxy(2,2);
	cprintf(q[n]);
	textcolor(3);
	gotoxy(2,4);
	cprintf(r1[n]);
	gotoxy(2,5);
	textcolor(7);
	cprintf(r3[n]);
	gotoxy(17,4);
	cprintf(r2[n]);
	gotoxy(17,5);
	cprintf(r4[n]);
	money(rupee,z);
	int cursor=18432;
	int c=1,r=4;i++;
	gotoxy(c,r);
	while(cursor!=7181)
		{
		cursor=bioskey(0);
		textcolor(7);
		gotoxy(2,4);
		cprintf(r1[n]);
		gotoxy(2,5);
		cprintf(r3[n]);
		gotoxy(17,4);
		cprintf(r2[n]);
		gotoxy(17,5);
		cprintf(r4[n]);
		gotoxy(c,r);

		if(cursor==18432 && r>=4) //up
			{
			gotoxy(c,4);
			r=4;
			if(c==1)
				{
				gotoxy(c+1,r);
				textcolor(3);
				cprintf(r1[n]);
				gotoxy(1,r);
				c=1;
				}
			else
			if(c==16)
				{
				gotoxy(c+1,r);
				textcolor(3);
				cprintf(r2[n]);
				gotoxy(16,r);
				c=16;
				}
			}

		else
		if(cursor==20480 && r<=5)     //down
			{
			gotoxy(c,5);
			r=5;
			if(c==1)
				{
				gotoxy(c+1,r);
				textcolor(3);
				cprintf(r3[n]);
				gotoxy(1,r);
				c=1;
				}
			else
			if(c==16)
				{
				gotoxy(c+1,r);
				textcolor(3);
				cprintf(r4[n]);
				gotoxy(16,r);
				c=16;
				}

			}
		else
		if(cursor==19712 && c<17)//right
			{
			gotoxy(16,r);
			c=16;
			if(r==4)
				{
				gotoxy(c+1,r);
				textcolor(3);
				cprintf(r2[n]);
				gotoxy(c,4);
				r=4;
				}
			else
			if(r==5)
				{
				gotoxy(c+1,r);
				textcolor(3);
				cprintf(r4[n]);
				gotoxy(c,5);
				r=5;
				}

			}
		else
		if(cursor==19200 && c>=1)//left
			{
			gotoxy(1,r);
			c=1;
			if(r==4)
				{
				gotoxy(c+1,r);
				textcolor(3);
				cprintf(r1[n]);
				gotoxy(c,4);
				r=4;
				}
			else
			if(r==5)
				{
				gotoxy(c+1,r);
				textcolor(3);
				cprintf(r3[n]);
				gotoxy(c,5);
				r=5;
				}

			}

		if(cursor==7181) //enter
			{
			if(lock()==1)
				{
				clearlock();
				gotoxy(2,4);
				textcolor(3);
				cprintf(r1[n]);
				gotoxy(2,4);
				cursor=19200;
				}
			else
			{
				yeslock();
			if(c==1)
				{
				if(r==4)
					{
					if(strcmp(a[n],r1[n])==0)
						{
						gotoxy(2,4);
						textcolor(2);
						cprintf(r1[n]);
						gotoxy(2,6);
						cprintf("You are correct");

						delay(400);
						z--;
						rupee++;
						}
					else
						{
						if(a[n][0]=='A')
							{
							gotoxy(2,4);
							textcolor(2);
							cprintf(r1[n]);
							}
						else
						if(a[n][0]=='B')
							{
							gotoxy(17,4);
							textcolor(2);
							cprintf(r2[n]);
							}
						else
						if(a[n][0]=='C')
							{
							gotoxy(2,5);
							textcolor(2);
							cprintf(r3[n]);
							}
						else
						if(a[n][0]=='D')
							{
							gotoxy(17,5);
							textcolor(2);
							cprintf(r4[n]);
							}
						gotoxy(2,4);
						textcolor(4);
						cprintf(r1[n]);
						gotoxy(2,6);
						cprintf("You lose ");gotoxy(2,7);
						textcolor(8);
						cprintf("You get a cheque of Rupees : ");
						textcolor(2);
						cprintf(jonny[i-1]);
						i=30;
						}
					}
				else
				if(r==5)
					{
					if(strcmp(a[n],r3[n])==0)
						{
						gotoxy(2,5);
						textcolor(2);
						cprintf(r3[n]);
						gotoxy(2,6);
						cprintf("You are correct");

						z--;
						rupee++;
						delay(400);
						}
					else
						{
						if(a[n][0]=='A')
							{
							gotoxy(2,4);
							textcolor(2);
							cprintf(r1[n]);
							}
						else
						if(a[n][0]=='B')
							{
							gotoxy(17,4);
							textcolor(2);
							cprintf(r2[n]);
							}
						else
						if(a[n][0]=='C')
							{
							gotoxy(2,5);
							textcolor(2);
							cprintf(r3[n]);
							}
						else
						if(a[n][0]=='D')
							{
							gotoxy(17,5);
							textcolor(2);
							cprintf(r4[n]);
							}

						gotoxy(2,5);
						textcolor(4);
						cprintf(r3[n]);
						gotoxy(2,6);
						cprintf("You lose ");gotoxy(2,7);
						textcolor(8);
						cprintf("You get a cheque of Rupees : ");
						textcolor(2);
						cprintf(jonny[i-1]);

						i=30;
						}
					}
				}
			else
			if(c==16)
				{
				if(r==4)
					{
					if(strcmp(a[n],r2[n])==0)
						{
						gotoxy(17,4);
						textcolor(2);
						cprintf(r2[n]);
						gotoxy(2,6);
						cprintf("You are correct");

						z--;
						rupee++;
						delay(400);
						}
					else
						{
						if(a[n][0]=='A')
							{
							gotoxy(2,4);
							textcolor(2);
							cprintf(r1[n]);
							}
						else
						if(a[n][0]=='B')
							{
							gotoxy(17,4);
							textcolor(2);
							cprintf(r2[n]);
							}
						else
						if(a[n][0]=='C')
							{
							gotoxy(2,5);
							textcolor(2);
							cprintf(r3[n]);
							}
						else
						if(a[n][0]=='D')
							{
							gotoxy(17,5);
							textcolor(2);
							cprintf(r4[n]);
							}
						gotoxy(17,4);
						textcolor(4);
						cprintf(r2[n]);
						gotoxy(2,6);

						cprintf("You lose ");gotoxy(2,7);
						textcolor(8);
						cprintf("You get a cheque of Rupees : ");
						textcolor(2);
						cprintf(jonny[i-1]);
						i=30;
						}
					}
				else
				if(r==5)
					{
					if(strcmp(a[n],r4[n])==0)
						{
						gotoxy(17,5);
						textcolor(2);
						cprintf(r4[n]);
						gotoxy(2,6);
						cprintf("You are correct");

						z--;
						rupee++;
						delay(400);
						}
					else
						{
						if(a[n][0]=='A')
							{
							gotoxy(2,4);
							textcolor(2);
							cprintf(r1[n]);
							}
						else
						if(a[n][0]=='B')
							{
							gotoxy(17,4);
							textcolor(2);
							cprintf(r2[n]);
							}
						else
						if(a[n][0]=='C')
							{
							gotoxy(2,5);
							textcolor(2);
							cprintf(r3[n]);
							}
						else
						if(a[n][0]=='D')
							{
							gotoxy(17,5);
							textcolor(2);
							cprintf(r4[n]);
							}
						gotoxy(17,5);
						textcolor(4);
						cprintf(r4[n]);

						gotoxy(2,6);

						cprintf("You lose ");gotoxy(2,7);
						textcolor(8);
						cprintf("You get a cheque of Rupees : ");
						textcolor(2);

						cprintf(jonny[i-1]);
						i=30;
						}
					}
				}
			}
			}
		}
	if(i==14)
		{
		gotoxy(17,7);
		textcolor(6);
		cprintf("You have won a whopping amount of Rs.");
		textcolor(14 +BLINK);
		cprintf("7 CRORE!!!!");
		delay(1000);
		}
	} //if
	} //for
	} //void game

void mainmenu()
	{
	clrscr();
	int n,c=30,r=10;
	textcolor(14);
	gotoxy(24,r-1);cprintf("++++++++++++++++++");
	gotoxy(24,r);cprintf("l");gotoxy(41,r);cprintf("l");
	gotoxy(24,r+1);cprintf("l");gotoxy(41,r+1);cprintf("l");
	gotoxy(24,r+2);cprintf("l");gotoxy(41,r+2);cprintf("l");
	gotoxy(24,r+3);cprintf("++++++++++++++++++");

	textcolor(8);
	gotoxy(c,r);cprintf("PLAY");
	gotoxy(c,r+1);cprintf("HELP");
	gotoxy(c,r+2);cprintf("EXIT");
	c=28;
	gotoxy(c,r);
	cprintf("->");


	while(n!=7181)
		{
		n=bioskey(0);

		if(n==20480 && r<12)
			{
			gotoxy(c,r);
			cprintf("  ");
			gotoxy(c,r+=1);
			cprintf("->");
			}
		else if(n==18432 && r>10)
			{
			gotoxy(c,r);
			cprintf("  ");
			gotoxy(c,r-=1);
			cprintf("->");
			}
		else if(n==7181)
			{
			if(r==10)
				{
				game();
				}
			if(r==11)
				{
				clrscr();
				textcolor(14);
				gotoxy(3,5);
				cprintf("The player has to answer to the questions correctly");
				gotoxy(3,6);
				cprintf("If correct,he/she will go to the next level");
				gotoxy(3,7);
				cprintf("If wrong,he/she will lose ");
				gotoxy(3,8);
				cprintf("The user can hover over the options using arrow keys");
				gotoxy(1,10);
				cprintf("_____________________________________________________________________");
				gotoxy(10,12);
				cprintf("PRESS backspace to go BACK");
				gotoxy(10,13);
				cprintf("OR any other key to QUIT ");
				int c=bioskey(0);
				if(c==3592)
					{
					mainmenu();
					}
				else
					exit(0);

				}
			if(r==12)
				{
				exit(0);
				}
			}
		}
	}


void frontpage()
	{
	int c=17,r=6;
	textcolor(14);gotoxy(c,r);
	cprintf("_______________________________________________");gotoxy(c,++r);
	cprintf("l                                             l");gotoxy(c,++r);
	cprintf("l                                             l");gotoxy(c,++r);
	cprintf("l      ##    ##   #######        #######      l");gotoxy(c,++r);
	cprintf("l      ##   ##    ##    ##     ##             l");gotoxy(c,++r);
	cprintf("l      ##  ##     ##     ##   ##              l");gotoxy(c,++r);
	cprintf("l      ####       ########   ##               l");gotoxy(c,++r);
	cprintf("l      ####       ########   ##               l");gotoxy(c,++r);
	cprintf("l      ##  ##     ##    ##    ##              l");gotoxy(c,++r);
	cprintf("l      ##   ##    ##     ##    ##             l");gotoxy(c,++r);
	cprintf("l      ##    ##   ########      ########      l");gotoxy(c,++r);
	cprintf("l                                             l");gotoxy(c,++r);
	cprintf("l_____________________________________________l");gotoxy(c,++r);
	cprintf("l                                             l");gotoxy(c,++r);
	cprintf("l    Press Enter to Play                      l");gotoxy(c,++r);
	cprintf("l    Press Escape to Exit                     l");gotoxy(c,++r);
	cprintf("l_____________________________________________l");gotoxy(43,--r);
	int n;
	while(n!=283)
		{
		n=bioskey(0);
		if(n==7181)
			mainmenu();
		else if(n==283)
			exit(0);
		}
	}
void main()
	{
	clrscr();
	frontpage();
	getch();
	}