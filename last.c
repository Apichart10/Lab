#include<stdio.h>

    struct studentinfo{
    int id;
    char name[100];
    float GPA;
};
void Find(struct studentinfo students[], int count);
int main(){
    struct studentinfo Stdinfo[5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter student #%d's information\n",i+1);
        printf("ID: ");
        scanf("%d",&Stdinfo[i].id);
        printf("Name: ");
        scanf("%s",&Stdinfo[i].name);
        printf("GPA: ");
        scanf("%f",&Stdinfo[i].GPA);
        
    }
    Find(Stdinfo, 5);
        return 0;
}
void Find(struct studentinfo students[], int count){
    int searchID;
    char ch;
    while(1){
        printf("Enter id to search(-1 to quit): "); scanf("%d",&searchID);
        if(searchID == -1){
            printf("quit program");
            break;
        }
        int found = 0;
        for(int i = 0 ; i<count ;i++){
            if(searchID == students[i].id){
                printf("ID: %d\n",students[i].id);
                printf("ID: %s\n",students[i].name);
                printf("ID: %.2f\n",students[i].GPA);
                found = 1;
                break;
            }
        }
        if(!found){
            printf("error\n");
        }
    }
}