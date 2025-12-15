#include <stdio.h>

int main()
{
    struct student
    {
        int id;
        int Maths;
        int Science;
        struct student *next;
    };

    struct student *st;

    scanf("%d", &st->id);
    int i=0;
    while (st->id != -1)
    {
        printf("......%d.....\n", i);
        scanf("%d", &st->Maths);
        scanf("%d", &st->Science);
        printf("%d %d %d\n" ,st->id, st->Maths, st->Science);
        printf("%d %d %d", &st->id, &st->Maths, &st->Science);

        st= st->next;

        printf("%d %d %d", &st->id, &st->Maths, &st->Science);

    }
    

    

    
}