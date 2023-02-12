#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
 
int score=0,rno[10],x=0;
char players[6][30],name[10],hword[50],word[50];
random()
{
	memset(rno,0,10);
	int i=0,j=0,no=0;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		no = (rand()%10)+1;
		for(j=0;j<=i-1;j++)
		{
			if(no == rno[j])
			{
				break;
			}
		}
		if(i == j)
		{
			rno[i] = no;
		}
		else
		{
			i--;
		}
	}
}
word_select(int mode)
{
	int i;
	FILE *file;
	if(mode == 1)
	{
		file = fopen("EASYWORDS.txt","r");
	}
	else if(mode == 2)
	{
		file = fopen("HARDWORDS.txt","r");
	}
	for(i=1;i<=rno[x];i++)
	{
		fgets(hword,50,file);
		fgets(word,50,file);
	}
}
score_print()
{
	int scores[6],i,j,temp;
	char ctemp[10];
	FILE *file,*file2;
	file = fopen("SCORE.txt","r+");
	file2 = fopen("PLAYERS.txt","r");
	for(i=0;i<5;i++)
	{
		fscanf(file,"%d",&scores[i]);
		fscanf(file2,"%s",&players[i]);
	}
	scores[5] = score;
	strcpy(players[5],name);
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(scores[i] < scores[j])
			{
				temp = scores[j];
				scores[j] = scores[i];
				scores[i] = temp;
				strcpy(ctemp,players[j]);
				strcpy(players[j],players[i]);
				strcpy(players[i],ctemp);
			}
		}
	}
	freopen("PLAYERS.txt","w",file2);
	fseek(file,0,SEEK_SET);
	fseek(file2,0,SEEK_SET);
	printf("\n\n\t     ===============\n\t      TOP 5 PLAYERS\n\t     ===============\n\t");
	for(i=0;i<5;i++)
	{
		printf("     %d. %s",i+1,players[i]);
		printf("     %d\n\t",scores[i]);
		fprintf(file,"%d\n",scores[i]);
		fprintf(file2,"%s\n",players[i]);
	}
	fclose(file);
	fclose(file2);
}
main()
{
	while(1)
	{
		int start=0,mode=0,chances=10,c=0,used=0,j=0,letter=1,lg=0,wc=1,i=0,s;
		char ul[50]="";
		random();
		FILE *file;
		system("cls");
		printf("\t\t=========\n\t\t HANGMAN\n\t\t=========");
		Sleep(500);
		printf("\n           ________________");
		printf("\n          |                |");
		printf("\n          |                |");
	    printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                     ______|______\n");
		Sleep(500);
		system("cls");
		printf("\t\t=========\n\t\t HANGMAN\n\t\t=========");
		printf("\n           ________________");
		printf("\n          |                |");
		printf("\n          |                |");
	    printf("\n       *******             |");
		printf("\n       * X X *             |");
		printf("\n       *  |  *             |");
		printf("\n       * ___ *             |");
		printf("\n       *******             |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                     ______|______\n");
		Sleep(500);
		system("cls");
		printf("\t\t=========\n\t\t HANGMAN\n\t\t=========");
		printf("\n           ________________");
		printf("\n          |                |");
		printf("\n          |                |");
	    printf("\n       *******             |");
		printf("\n       * X X *             |");
		printf("\n       *  |  *             |");
		printf("\n       * ___ *             |");
		printf("\n       *******             |");
		printf("\n          *                |");
		printf("\n      *   *   *            |");
		printf("\n       *  *  *             |");
		printf("\n        * * *              |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                     ______|______\n");
		Sleep(500);
		system("cls");
		printf("\t\t=========\n\t\t HANGMAN\n\t\t=========");
		printf("\n           ________________");
		printf("\n          |                |");
		printf("\n          |                |");
	    printf("\n       *******             |");
		printf("\n       * X X *             |");
		printf("\n       *  |  *             |");
		printf("\n       * ___ *             |");
		printf("\n       *******             |");
		printf("\n          *                |");
		printf("\n      *   *   *            |");
		printf("\n       *  *  *             |");
		printf("\n        * * *              |");
		printf("\n          *                |");
		printf("\n          *                |");
		printf("\n          *                |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                           |");
		printf("\n                     ______|______\n");
		Sleep(500);
		system("cls");
		printf("\t\t=========\n\t\t HANGMAN\n\t\t=========");
		printf("\n           ________________");
		printf("\n          |                |");
		printf("\n          |                |");
	    printf("\n       *******             |");
		printf("\n       * X X *             |");
		printf("\n       *  |  *             |");
		printf("\n       * ___ *             |");
		printf("\n       *******             |");
		printf("\n          *                |");
		printf("\n      *   *   *            |");
		printf("\n       *  *  *             |");
		printf("\n        * * *              |");
		printf("\n          *                |");
		printf("\n          *                |");
		printf("\n          *                |");
		printf("\n        *   *              |");
		printf("\n       *     *             |");
		printf("\n      *       *            |");
		printf("\n                     ______|______\n");
		Sleep(500);
		printf("\n\t  ==================\n\t   PRESS 1 TO START\n\t  ==================\n\t   PRESS 2 TO QUIT\n\t  ==================\n\t\t ");
		while(start != '1' && start != '2')
		{
			start = getch();
		}
		if(start == '2')
		{
			system("cls");
			printf("\t\t=========\n\t\t HANGMAN\n\t\t=========");
			score_print();
			printf("\n\n\t-- YOU'VE QUIT THE GAME --");
			return 0;
		}
		system("cls");
		printf("\n ENTER YOUR NAME: ");
		gets(name);
		if(start == '1')
		{
			while(mode != '1' && mode != '2' && mode != '3' && mode != '4')
			{
				system("cls");
				printf(" ===================\n  SELECT DIFFICULTY\n ===================");
				printf("\n\n 1. EASY\n\n 2. HARD\n\n PRESS 3 TO RESTART -- PRESS 4 TO QUIT\n ");
				mode = getch();
			}
			if(mode == '1')
			{
				word_select(1);
			}
			else if(mode == '2')
			{
				word_select(2);
			}
			else if(mode == '4')
			{
				score_print();
				printf("\n\n\t-- YOU'VE QUIT THE GAME --");
				return 0;
			}
		}
		while(chances != 0)
		{
			if(mode == '3')
			{
				score=0,x=0;
				break;
			}
			c=0,used=0;
			system("cls");
			printf("\t\t=========\n\t\t HANGMAN\n\t\t=========");
			if(letter == 1)
			{
				printf("\n\n\tWORD (%d) %s",wc,hword);
				printf("\n\t\t\t\tUSED LETTERS : [ %s]\n\n\t\t\t\tSCORE : %d\tCHANCES : %d\n\n",ul,score,chances);
			}
			if(letter != 1)
			{
				for(i=0;i<50;i++)
				{
					if(letter == word[i] && letter != ul[i] && letter != ' ')
					{
						hword[i] = word[i];
						c = 1;
					}
					if(letter == ul[i])
					{
						used = 1;
					}
				}
				printf("\n\n\tWORD (%d) %s",wc,hword);
				if(used == 0)
				{
					ul[j] = letter;
					j++;
					ul[j] = ' ';
					j++;
				}
				if(c == 1 && used == 0)
				{
					printf("\n\n\t   CORRECT GUESS!");
					score++;
					lg++;
				}
				if(used == 1)
				{
					printf("\n\n\tYOU'VE ALERADY USED THIS LETTER, TRY AGAIN...");
				}
				if(c == 0 && used == 0)
				{
					printf("\n\n\t    WRONG GUESS!");
					chances--;
				}
				printf("\t\tUSED LETTERS : [ %s]\n\n\t\t\t\t\tSCORE : %d\tCHANCES : %d",ul,score,chances);
			}
			if(chances == 9)
			{
				printf("\n          ________________");
				printf("\n         |                 ");
    			printf("\n         |                 \n\n");
			}
			else if(chances == 8)
			{
				printf("\n          ________________");
				printf("\n         |                |");
    			printf("\n         |                |");
   	 			printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |\n\n");
			}
			else if(chances == 7)
			{
				printf("\n          ________________");
				printf("\n         |                |");
    			printf("\n         |                |");
   	 			printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |\n\n");
			}
			else if(chances == 6)
			{
				printf("\n          ________________");
				printf("\n         |                |");
    			printf("\n         |                |");
   	 			printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                    ______|\n\n");
			}
			else if(chances == 5)
			{
				printf("\n          ________________");
				printf("\n         |                |");
    			printf("\n         |                |");
   	 			printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                    ______|______\n\n");
			}
			else if(chances == 4)
			{
				printf("\n          ________________");
				printf("\n         |                |");
				printf("\n         |                |");
 				printf("\n      *******             |");
				printf("\n      * X X *             |");
				printf("\n      *  |  *             |");
				printf("\n      * ___ *             |");
				printf("\n      *******             |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                    ______|______\n\n");
			}
			else if(chances == 3)
			{
				printf("\n          ________________");
				printf("\n         |                |");
    			printf("\n         |                |");
  				printf("\n      *******             |");
				printf("\n      * X X *             |");
				printf("\n      *  |  *             |");
				printf("\n      * ___ *             |");
				printf("\n      *******             |");
				printf("\n         *                |");
				printf("\n         *                |");
				printf("\n         *                |");
				printf("\n         *                |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                    ______|______\n\n");
			}
			else if(chances == 2)
			{
				printf("\n          ________________");
				printf("\n         |                |");
				printf("\n         |                |");
 				printf("\n      *******             |");
				printf("\n      * X X *             |");
				printf("\n      *  |  *             |");
				printf("\n      * ___ *             |");
				printf("\n      *******             |");
				printf("\n         *                |");
				printf("\n     *   *   *            |");
				printf("\n      *  *  *             |");
				printf("\n       * * *              |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                    ______|______\n\n");
			}
			else if(chances == 1)
			{
				printf("\n          ________________");
				printf("\n         |                |");
  				printf("\n         |                |");
  				printf("\n      *******             |");
				printf("\n      * X X *             |");
				printf("\n      *  |  *             |");
				printf("\n      * ___ *             |");
				printf("\n      *******             |");
				printf("\n         *                |");
				printf("\n     *   *   *            |");
				printf("\n      *  *  *             |");
				printf("\n       * * *              |");
				printf("\n         *                |");
				printf("\n         *                |");
				printf("\n         *                |");
				printf("\n         *                |");
				printf("\n                          |");
				printf("\n                          |");
				printf("\n                    ______|______\n\n");
				}
			else if(chances == 0)
			{
				printf("\n          ________________");
				printf("\n         |                |");
  				printf("\n         |                |");
				printf("\n      *******             |");
				printf("\n      * X X *             |");
				printf("\n      *  |  *             |");
				printf("\n      * ___ *             |");
				printf("\n      *******             |");
				printf("\n         *                |");
				printf("\n     *   *   *            |");
				printf("\n      *  *  *             |");
				printf("\n       * * *              |");
				printf("\n         *                |");
				printf("\n         *                |");
				printf("\n         *                |");
				printf("\n       *   *              |");
				printf("\n      *     *             |");
				printf("\n     *       *            |");
				printf("\n                    ______|______\n\n");
				printf("\n\n   YOU'VE 0 CHANCES LEFT, YOU LOSE...!");
				printf("\n\n  PRESS 9 TO RESTART -- PRESS 0 TO QUIT");
				score_print();
				while(letter != '9' && letter != '0')
				{
					letter = toupper(getch());
				}
				if(letter == '9')
				{
					score=0,x=0;
					break;
				}
				else if(letter == '0')
				{
					printf("\n\n\t-- YOU'VE QUIT THE GAME --");
					return 0;
				}
			}
			lg=0;
			for(i=0;i<strlen(hword);i++)
			{
				if(hword[i]==word[i])
				{
					lg++;
				}
			}
			if(lg == strlen(word))
			{
				printf("\n     ==========================\n      YOU'VE  GUESSED THE WORD \n     ==========================");
				printf("\n     PRESS  SPACE  TO  CONTINUE");
				getch();
				wc++;
				if(wc > 10)
				{
					system("cls");
					printf("\t\t=========\n\t\t HANGMAN\n\t\t=========");
					printf("\n\n YOU'VE GUESSED ALL THE WORDS, YOU WIN...!");
					printf("\n\n\t     SCORE: %d",score);
					printf("\t   PRESS 9 TO RESTART -- PRESS 0 TO QUIT");
					score_print();
					while(letter != '9' && letter != '0')
					{
						letter = toupper(getch());
					}
					if(letter == '9')
					{
						score=0,x=0;
						break;
					}
						else if(letter == '0')
					{
						printf("\n\n\t-- YOU'VE QUIT THE GAME --");
						return 0;
					}
				}
				if(mode == '1')
				{
					x++;
					word_select(1);
				}
				else if(mode == '2')
				{
					x++;
					word_select(2);
				}
				letter = 1;
				memset(ul,0,50);
				j=0;
			}
			else
			{
				printf("\t\t\t\tPRESS 9 TO RESTART -- PRESS 0 TO QUIT");
				printf("\n\tGUESS A LETTER : ");
				letter = toupper(getch());
				if(letter == '9')
				{
					score=0,x=0;
					break;
				}
				else if(letter == '0')
				{
					system("cls");
					printf("\t\t=========\n\t\t HANGMAN\n\t\t=========");
					score_print();
					printf("\n\n\t-- YOU'VE QUIT THE GAME --");
					return 0;
				}
			}
		}
	}
}
