#include<stdio.h>

void defangIPaddress(char *address,char *defanged){

int i=0,j=0;
while (address[i]!='\0')
{
    if (address[i]=='.')
    {
        defanged[j++]='[';
        defanged[j++]='.';
        defanged[j++]=']';
    
}
else
{
    defanged[j++]=address[i];
}
i++;

}
defanged[j]='\0';

}

int main(){

char ip_address[]="192.168.1.1";
char defanged[20];
defangIPaddress(ip_address,defanged);
printf("Defeanged IP address:%s\n",defanged);

    return 0;
}