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
    st->id=0;
    int i=1;
    // printf("......%d.....\n", i);
    scanf("%d", &st->id);

    while (st->id != -1)
    {
        scanf("%d", &st->Maths);
        scanf("%d", &st->Science);
        printf("%d %d %d\n" ,st->id, st->Maths, st->Science);
        printf("%d %d %d %d\n", &st->id, &st->Maths, &st->Science, st->next);

        st= st->next;
        i++;
        // printf("......%d.....\n", i);

        printf("%d %d %d\n", &st->id, &st->Maths, &st->Science);

        scanf("%d", &st->id);
    }
    

    

    
}