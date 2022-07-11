#include<stdio.h>
void urban(float,float);
void rural(float,float);

void main(){
char consumername[20],consumersurname[20], consumeraddress[100];
char i,j;
float consumeramount, consumerunit;
int consumerid,n;

printf("Enter the first name of consumer: \n");
gets(consumername);
printf("Enter the last name of consumer: \n");
gets(consumersurname);
printf("Enter the address of consumer: \n");
gets(consumeraddress);
printf("Enter the id of consumer: \n");
scanf("%d", &consumerid);
printf("Enter the consumer unit: \n");
scanf("%f", &consumerunit);

for(i=0;consumername[i]!='\0';i++);
consumername[i]=' ';
for(j=0;consumersurname[j]!='\0';j++){
	consumername[++i]=consumersurname[j];
}
consumername[++i]='\0';

printf("Enter 1 for Urban areas & enter 2 for rural areas \n");
scanf("%d", &n);
if(n=1){
	urban(consumerunit,consumeramount);
}
else{
	rural(consumerunit,consumeramount);
}
printf("\nConsumer name: %s", consumername);
printf("\nConsumer id: %d", consumerid);
}

void urban(float consumerunit, float consumeramount){
if(consumerunit<=25 && consumerunit>0){
	consumeramount = consumerunit * 4.89;
}
else if(consumerunit<=60 && consumerunit>25){
	consumeramount = consumerunit * 5.4;
}
else if(consumerunit<=100 && consumerunit>60){
	consumeramount = consumerunit * 6.41;
}
else if(consumerunit<=150 && consumerunit>100){
	consumeramount = consumerunit * 7.16;
}
else if(consumerunit<=300 && consumerunit>150){
	consumeramount = consumerunit * 7.33;
}
else if(consumerunit>300){
	consumeramount = consumerunit * 8.92;
}
printf("\nThe amount of bill is : %f", consumeramount);
}

void rural(float consumerunit, float consumeramount){
if(consumerunit<=102 && consumerunit>0){
	consumeramount = consumerunit * 5.30;
}
else if(consumerunit<=180 && consumerunit>102){
	consumeramount = consumerunit * 5.97;
}
else if(consumerunit<=300 && consumerunit>180){
	consumeramount = consumerunit * 6.97;
}
else if(consumerunit<=600 && consumerunit>300){
	consumeramount = consumerunit * 7.31;
}
else if(consumerunit<=900 && consumerunit>600){
	consumeramount = consumerunit * 7.58;
}
else if(consumerunit>900){
	consumeramount = consumerunit * 8.99;
}
printf("\nThe amount of bill is : %f", consumeramount);
}
