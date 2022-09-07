#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int c,p;
	int i;
	int j;
	int s[10]={};
	printf("\n\n   \1A\1B\1C\1D\1E\1F\1G\2A\2B\2C\2D\2E\2F\2G\3A\3B\3C\3D\3E\3F\3G\4A\4B\4C\4D\4E\4F\4G\5A\5B\5C\5D\5E\5F\5G\6A\6B\6C\6D\6E\6F\6G\7A\7B\7C\n");
	printf("    Welcome to Airline Seat Reservations System ");
	printf("\n    \1A\1B\1C\1D\1E\1F\1G\2A\2B\2C\2D\2E\2F\2G\3A\3B\3C\3D\3E\3F\3G\4A\4B\4C\4D\4E\4F\4G\5A\5B\5C\5D\5E\5F\5G\6A\6B\6C\6D\6E\6F\6G\7A\7B\7C\n");
	for (j=0; j<10; j++)
	{
	    printf("    \1A\1B\1C\1D\1E\1F\1G\2A\2B\2C\2D\2E\2F\2G\3A\3B\3C\3D\3E\3F\3G\4A\4B\4C\4D\4E\4F\4G\5A\5B\5C\5D\5E\5F\5G\6A\6B\6C\6D\6E\6F\6G\7A\7B\7C\n");
		printf("   Class\n\n   [1] Business Class\n   [2] Economic class\n\n");
		printf("    \1A\1B\1C\1D\1E\1F\1G\2A\2B\2C\2D\2E\2F\2G\3A\3B\3C\3D\3E\3F\3G\4A\4B\4C\4D\4E\4F\4G\5A\5B\5C\5D\5E\5F\5G\6A\6B\6C\6D\6E\6F\6G\7A\7B\7C\n");
		printf("   Choose: ");
		scanf("%i",&c);
		system("cls");
		switch(c)
		{
		case 1:
		    printf("    \1A\1B\1C\1D\1E\1F\1G\2A\2B\2C\2D\2E\2F\2G\3A\3B\3C\3D\3E\3F\3G\4A\4B\4C\4D\4E\4F\4G\5A\5B\5C\5D\5E\5F\5G\6A\6B\6C\6D\6E\6F\6G\7A\7B\7C\n");
			printf("   Business class\n\n");
			printf("   Seats available\n     |1|2|3|4|5|\n\n");
			printf("    \1A\1B\1C\1D\1E\1F\1G\2A\2B\2C\2D\2E\2F\2G\3A\3B\3C\3D\3E\3F\3G\4A\4B\4C\4D\4E\4F\4G\5A\5B\5C\5D\5E\5F\5G\6A\6B\6C\6D\6E\6F\6G\7A\7B\7C\n");
			do
			{
                printf("   Pick a seat: ");
                scanf("%i",&p);
                s[j]=p;
                system("cls");
			    for (i=0; i<j; i++)
			    {
                    if (s[j]==s[i])
                    {
                        printf("\n\n   Seat taken.\n\n");
                        break;
                    }
			    }
            }
            while (i!=j);
                if(s[j] <= 5)
                {
                    printf("    \1A\1B\1C\1D\1E\1F\1G\2A\2B\2C\2D\2E\2F\2G\3A\3B\3C\3D\3E\3F\3G\4A\4B\4C\4D\4E\4F\4G\5A\5B\5C\5D\5E\5F\5G\6A\6B\6C\6D\6E\6F\6G\7A\7B\7C\n");
                    printf("\n");
                    printf("   Class: Business class\n");
                    printf("   Seat no : %i\n",s[j]);
                    printf("\n");
                }
                else
                printf("\nWrong number!  No seat for you!\n\n");
            break;
		case 2:
			printf("    \1A\1B\1C\1D\1E\1F\1G\2A\2B\2C\2D\2E\2F\2G\3A\3B\3C\3D\3E\3F\3G\4A\4B\4C\4D\4E\4F\4G\5A\5B\5C\5D\5E\5F\5G\6A\6B\6C\6D\6E\6F\6G\7A\7B\7C\n");
			printf("   Economical class\n\n");
			printf("   Seats available\n    |6|7|8|9|10|\n\n");
			printf("    \1A\1B\1C\1D\1E\1F\1G\2A\2B\2C\2D\2E\2F\2G\3A\3B\3C\3D\3E\3F\3G\4A\4B\4C\4D\4E\4F\4G\5A\5B\5C\5D\5E\5F\5G\6A\6B\6C\6D\6E\6F\6G\7A\7B\7C\n");
			do
			{
                printf("   Pick a seat: ");
                scanf("%i",&p);
                s[j]=p;
                system("cls");
			    for (i=0; i<j; i++)
			    {
                    if (s[j]==s[i])
                    {
                        printf("\n\n   Seat taken.\n\n");
                        break;
                    }
			    }
            }
            while (i!=j);
                if(s[j] >= 6)
                {
                    printf("    \1A\1B\1C\1D\1E\1F\1G\2A\2B\2C\2D\2E\2F\2G\3A\3B\3C\3D\3E\3F\3G\4A\4B\4C\4D\4E\4F\4G\5A\5B\5C\5D\5E\5F\5G\6A\6B\6C\6D\6E\6F\6G\7A\7B\7C\n");
                    printf("\n");
                    printf("   Class: Economical class\n");
                    printf("   Seat no : %i\n",s[j]);
                    printf("\n");
                }
                else
                printf("\nWrong number!  No seat for you!\n\n");
            break;
        default:
                break;
		}
        }/*end switch case
    end counting people*/
	return 0;
}


