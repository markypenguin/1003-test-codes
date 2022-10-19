#include <stdio.h>
#include <string.h>
int main()
{
    char plain, cypher;
    int len, key, choice, count, i;

    printf("\n Enter your choice 1) Encryption 2) Decryption of message:");
    scanf("%d",&choice);
    printf("\n Enter the secret key:");
    scanf("%d",&key);

    printf("\n Enter lenght of message: ");
    scanf("%d", &len);
    printf("\n The lenght of the message is : %d", len);
   
    char message[len];

    printf("\n\n Enter the message: ");
    fgets(message, len + 1, stdin);  // read string
    fgets(message, len + 1, stdin);
    //message[strlen(message)] = '\0';   
    printf("\n The message: ");
    puts(message);    // display string

    for (i = 0; i < len; i++)
    {
        switch (choice) 
        {
            case 1:
            {
                if (message[i] != ' ')
                {
                    printf("\n ASCI: %c", message[i]);
                    message[i] = message[i] - 65;
                    cypher = (message[i] + key) % 26;
                    message[i] = cypher + 65;
                    printf("\n Cypher: %c", message[i]);
                    //printf("case 1 if");
                }
                else
                {
                    printf("\n ACSI: ""space"" \n Cypher: ""space""");
                }
                break;
            }
            case 2:
            {

            }
        }
    }
    printf("\n\nThe Cypher code is: %s \n\n", message);
}