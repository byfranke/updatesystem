#include <stdio.h>
#include <stdlib.h>

int main(void){
        printf("UpdateSystem Started: \n\n\n");
        system("apt update");
        system("apt upgrade -y");
        system("apt full-upgrade -y");
        system("apt install neofetch -y");
        system("apt autoremove -y");
        printf("\nUpdate Completed\n\n");
        system("neofetch");
        return 0;
}
