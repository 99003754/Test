#include"filetest.h"

void hello(char path[200])
{
    //char path[200];
    printf("enter path\n");
   // scanf("%s",path);
    files(path);
    return 0;
  }
    
void files(char address[200])
{

    char line[MAX_LINE_LENGTH] = {0};
    unsigned int line_count = 0;
     FILE *file = fopen(address, "r");
    printf("%s",address);
    if (!file)
    {
        perror(address);
        return EXIT_FAILURE;
    }
    
    
    while (fgets(line, MAX_LINE_LENGTH,file))
    {
  //  printf("line is %d\n",line);
        
        //printf("%s\n",line);
        function(line);

       

}
}
char* function(char input[100])
{
int i,j=0,start=0,k=0;
int temp;
int end=0;
char output[100];
int length=strlen(input);


for(i=0;i<length;i++)
{
temp=i;


if(input[i]=='$')
{
temp=i;
start=i;
while(input[temp]!=';')
{

if(input[temp]=='$')
{
end=0;

}


end++;


temp++;



}
}

}
temp=start+end;

printf("$");
for(j=0;j<temp;j++)
{
if(j>start)
{
output[k]=input[j];
printf("%c",output[k]);
k++;
}
}
//printf(";");
//printf("\n");
return output;
}

