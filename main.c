#include <stdio.h>
#include <stdlib.h>

int main()
{
    int e=0,p=0,i=1;
    int n,ed,pe,sum;

    printf("ingrese la cantidad de personas que assistieron\n");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("ingrese edad==>");
        scanf("%d",&ed);

        printf("ingrese peso==>");
        scanf("%d",&pe);

        if (ed<=18){e++;}

        p=pe+p;

        if(ed%2!=0){sum=p+pe;}
        i++;
    }

      printf("la cantidad de personas mayores a 18 son de %d\n",e);
      printf("el promedio de peso es de %d\n",p/n);
      printf("la suma de peso de las edades inpareses de %d\n",sum);
}
