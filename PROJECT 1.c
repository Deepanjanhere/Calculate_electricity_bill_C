#include<stdio.h>
//FUNCTION INITIALISATION
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
// string concatination without using string function
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
//CESC BILL CALCULATION
void urban(float consumerunit, float consumeramount){
// FROM UNIT 1 TO UNIT 25 AMOUNT PER UNIT IS 4.89 INR
if(consumerunit<=25 && consumerunit>0){
	consumeramount = consumerunit * 4.89;
}
// FROM UNIT 26 TO UNIT 60 AMOUNT PER UNIT IS 5.40 INR
else if(consumerunit<=60 && consumerunit>25){
	consumeramount = consumerunit * 5.40;
}
// FROM UNIT 61 TO UNIT 100 AMOUNT PER UNIT IS 6.41 INR
else if(consumerunit<=100 && consumerunit>60){
	consumeramount = consumerunit * 6.41;
}
// FROM UNIT 101 TO UNIT 150 AMOUNT PER UNIT IS 7.16 INR
else if(consumerunit<=150 && consumerunit>100){
	consumeramount = consumerunit * 7.16;
}
// FROM UNIT 300 TO UNIT 151 AMOUNT PER UNIT IS 7.33 INR
else if(consumerunit<=300 && consumerunit>150){
	consumeramount = consumerunit * 7.33;
}
// ABOVE UNIT 301 AMOUNT PER UNIT IS 8.92 INR
else if(consumerunit>300){
	consumeramount = consumerunit * 8.92;
}
printf("\nThe amount of bill is : %f", consumeramount);
}
// WBSEDCL BILL CALCULATION
void rural(float consumerunit, float consumeramount){
// FROM UNIT 1 TO UNIT 102 AMOUNT PER UNIT IS 5.30 INR
if(consumerunit<=102 && consumerunit>0){  
	consumeramount = consumerunit * 5.30;
}
// FROM UNIT 103 TO UNIT 180 AMOUNT PER UNIT IS 5.97 INR
else if(consumerunit<=180 && consumerunit>102){
	consumeramount = consumerunit * 5.97;
}
// FROM UNIT 181 TO UNIT 300 AMOUNT PER UNIT IS 6.97 INR
else if(consumerunit<=300 && consumerunit>180){
	consumeramount = consumerunit * 6.97;
}
// FROM UNIT 301 TO UNIT 600 AMOUNT PER UNIT IS 7.31 INR
else if(consumerunit<=600 && consumerunit>300){
	consumeramount = consumerunit * 7.31;
}
// FROM UNIT 601 TO UNIT 900 AMOUNT PER UNIT IS 7.58 INR
else if(consumerunit<=900 && consumerunit>600){
	consumeramount = consumerunit * 7.58;
}
// ABOVE UNIT 901 AMOUNT PER UNIT IS 8.99 INR
else if(consumerunit>900){
	consumeramount = consumerunit * 8.99;
}
printf("\nThe amount of bill is : %f", consumeramount);
}
