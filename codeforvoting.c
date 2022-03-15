#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int vote,end,results;
    int tdp=0,bjp=0,ysrcp=0,jana_sena=0,inc=0,nota=0;
    while(1){
    printf("ANDHRA PRADESH ELECTIONS\n");
    printf("1.BJP\n2.YSRCP\n3.TDP\n4.JANA SENA\n5.INC\n6.NOTA\n");
    printf("\nSelect Party Name which you wanted to support : ");
    scanf("%d",&vote);
    switch(vote) {
        case 1 : bjp++; break;
        case 2 : ysrcp++;break;
        case 3 : tdp++; break;
        case 4 : jana_sena++; break;
        case 5 : inc++; break;
        case 6 : nota++; break;
        default : 
                  printf("Select a valid party name\n");
    }
   if(vote>0&&vote<7) 
    printf("To continue election press any number other than 2  ");
    printf("To end election press 2  ");
    scanf("%d",&end);
    if(end==2)
        break;
    }
    printf("TO DISPLAY RESULTS, PRESS 1 : ");
    scanf("%d",&results);
    if(results==1){
        printf("\nBJP : %d\nYSRCP : %d\nTDP : %d\nJANA SENA : %d\nINC : %d\nNOTA : %d",
               bjp,ysrcp,tdp,jana_sena,inc,nota);
    }
    return 0;
}
