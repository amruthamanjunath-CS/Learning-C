#include<stdio.h>
int main() {
   long int InputID;
   int choice;
   long long int AaparID=2025666;
   long long int AadarID=7895649365;
   long long int PanNumber=50600;
   long long int Passport=7689033;
   long long int DrivingLicense=60845654;
  printf("select one\n 1.AaparID\n 2.AadarID\n 3.PanNumber\n 4.Passport\n 5.DrivingLicense\n");
  printf("enter your choice:\n");
  scanf("%d",&choice);
  printf("enter the InputID: \n");
  scanf("%lld",&InputID);
  switch(choice){
    case 1: if(InputID=AaparID)
        printf("Aapar ID is verified\n");
        else
        printf("Aapar ID not verified:Record not found\n");
        break;
    case 2: if(InputID=AadarID)  
            printf("Aadar ID verified\n");
            else
            printf("Aadar ID not verified:Record not found\n");
            break;
    case 3: if(InputID=PanNumber)
            printf("Pan Number verified\n");
            else
            printf("Pan Number not verified:Record not found");
            break;
    case 4: if(InputID =Passport)
            printf("Passport verified");
            else
            printf("Passport not verified:Record not found");
            break;
    case 5: if(InputID=DrivingLicense)
            printf("Driving License verified");
            else
            printf("Driving License not verified:Record not found");
            break;
default : printf("select a valid choice");
 }
return 0;
}