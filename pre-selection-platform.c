#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct condidate{
    char *name;
    int age;
    char email[100];
    int password;
    int score;
};
void test(struct condidate* condidat)
{
    char math_questions[] = "122+44*18 = ?";
    int len = strlen(math_questions);

    char logic_questions[] = "What number comes next in the sequence? : 2, 4, 8, 16, ?";
    int len1 = strlen(logic_questions);
    int math_answers = 914;
    int logic_answers = 32;
    condidat->score = 0;
    printf("=====>>>welcome to the math test : <<<=====\n\n");

    for(int i = 0; i < 1; i++)
    {

    printf("Question: %s\n", math_questions);
    int user_answers;
    printf("your answer : ");
    scanf("%d",&user_answers);

    if(user_answers == math_answers)
    {
        condidat->score += 10;
    }else
        {
            printf("Wrong! The correct answer is: %d\n", math_answers);
        }
      printf("your score is : %d\n",condidat->score);
    }
    //
    for(int i = 0; i < 1; i++)
    {

    printf("Question: %s\n", logic_questions);
    int user_answers;
    printf("your answer : ");
    scanf("%d",&user_answers);

    if(user_answers == logic_answers)
    {
        condidat->score += 10;
    }else
        {
            printf("Wrong! The correct answer is: %d\n", logic_answers);
        }

      printf("your score is : %d\n",condidat->score);
    }
}
void userspace(struct condidate* condidat)
{
    int choise;
    printf("=====>>>welcome to your user space<<<=====\n\n");

    do{
        printf("1 - your informations\n");
        printf("2 - passing the test\n\n");
        printf("I choose : ");
        scanf("%d",&choise);

        switch(choise)
        {
            case 1:
            printf("your name : %s\n",condidat->name);
            printf("your age : %d\n",condidat->age);
            printf("your email : %s\n",condidat->email);
            break;
            case 2:
                test(condidat);
                break;
        }
    }while(choise != 0);
}

void sign_up(struct condidate *condidat)
{
    condidat->name = malloc(100*sizeof(char));
    printf("enter the following information\n");
    printf("full name : ");
    scanf("%s",condidat->name);
    printf("age : ");
    scanf("%d",&condidat->age);
    printf("email : ");
    scanf("%s",condidat->email);
    printf("password : ");
    scanf("%d",&condidat->password);
    printf("\n\nYour account has been successfully registered.\n\n");
    printf("----------------------------------------------------------------\n\n");
}
void sign_in(struct condidate* condidat){
    char *name = malloc(100*sizeof(struct condidate));
    int pass;
    printf("Name : ");
    scanf("%s",name);
    printf("Password : ");
    scanf("%d",&pass);
    if(strcmp(condidat->name,name)==0 && condidat->password == pass)
    {
        printf("You have successfully logged in.\n\n");
        userspace(condidat);
    }
}
int main()
{
    struct condidate* condidat = NULL;
    condidat = malloc(sizeof(struct condidate));

    int choice;
    printf("<---------------------welcome to techno coding school application website--------------------->\n\n");
    do{
            printf("Choose from the following options:\n");
            printf("1-Sign-Up\n");
            printf("2-You already have an account-Sign-In\n");
            printf("3-Exit\n");
            printf("I choose : ");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                    sign_up(condidat);
                    break;
                case 2:
                    sign_in(condidat);
                    break;
                case 3:
                    for(int i = 0; i <= 2; i++)
                    {
                        printf("Checking out...\n");
                    }
            }

    }while(choice != 3);
}
