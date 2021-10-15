//assignment no.:1
//question no.:2
#include <stdio.h>
#include<string.h>

int main(){
    char mail[1000];
    printf("Enter Email Address to check:\n");
    scanf("%s",mail);
    
    int length = strlen(mail);
    int i=0, checking_ch=0, address_sign=0,x=-1,y=-1,dot_sign=0,quotes_sign=0;
    
    while(mail[i]!='\0' && length<65){
        if((mail[i]>='A' && mail[i]<='Z') || (mail[i]>='a' && mail[i]<='z') || (mail[i]>='0' && mail[i]<='9')){
            checking_ch=1;
        }
        else if((mail[i]=='.' || mail[i]=='-' || mail[i]=='@' || mail[i]=='+' || mail[i]=='/' || mail[i]=='\0' || mail[i]=='!' || mail[i]=='%') && (i!=0 && mail[i+1]!='\0')){
            checking_ch=1;
        }
        else {
            checking_ch=-1;
            break;
        }
        if(mail[i]=='@'){
            address_sign++;
            x=i;
        }
        if(mail[i]=='.'){
            dot_sign++;
            y=i;
        }
        i++;
    }
    if(y-x<2){
        checking_ch=-1;
    }
    if(checking_ch==1 && address_sign>0){
        printf("entered email address is valid\n");
    }
    else{
        printf("entered email address is not valid\n");
    }
}