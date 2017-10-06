#include<stdio.h>
#include<math.h>




void main()
{
    int n;
    printf("\nLength of the array to sort\n");
    scanf("%d",&n);
    int queue[10][n];
    int rear[10];
    for(int i=0;i<n;i++)
        rear[i]=-1;
    int quest[n];
    printf("\nEnter the numbers to be sorted\n");
    for(int i=0;i<n;i++)
        scanf("%d",&quest[i]);

    printf("\nThe question array is\n");
    for(int i=0;i<n;i++)
        printf("%d ",quest[i]);

    printf("\n");

    for(int r=0;r<10;r++)           //displays the queue
    {
        for(int c=0;c<n;c++)
        {
            queue[r][c]=0;
            printf("%d   ",queue[r][c]);
        }
        printf("\n");
    }


//    ++rear[1];
//    printf("\n%d\n",rear[1]);

        int place=0;
        for(int i=0;i<n;i++)
        {
            int pos=quest[i]/pow(10,place);
            pos%=10;
            ++rear[pos];
            queue[pos][rear[pos]]=quest[i];
           ;
        }


        /////////////////////////////////////////////////////////////////////////////////////////
    for(int r=0;r<10;r++)           //displays the queue
    {
        for(int c=0;c<n;c++)
        {
            //queue[r][c]=0;
            printf("%d   ",queue[r][c]);
        }
        printf("\n");
    }
    ////////////////////////////////////////////////////////////////////////////////////////


    /*
    for(int place=0;;place++)
    {
        for(int i=0;i<n;i++)        //iterating through the question to put in the queue
        {
            int pos=(quest[i]/pow(10,place));
            pos%=10;
            printf("%d ",pos);
            queue[pos][++rear[pos]]=quest[i];
            for(int r=0;r<10;r++)
            {
                for(int c=0;c<n;c++)
                    printf("%d",queue[r][c]);
                printf("\n");
            }
        }

        printf("\nThe question array is\n");
        for(int i=0;i<n;i++)
            printf("%d ",quest[i]);
        getch();

        int piquest=0;

        for(int pb=0;pb<10;pb++)
        {
            for(int piq=0;piq<rear[pb];piq++)
            {
                quest[piquest]=queue[pb][piq];      //putting everything back into the question array
            }
        }


        if(rear[0]==n)              //stopping as soon as everything is in the 0 queue. This means the queue is sorted.
            break;
    }
    */
}
