
bill(int fees,char disease[],char casee)
{
	int bed_charge=500;//per day
	int treatmentbill;
	int medical;
	char yn[5];
	printf("had the patient taken the treatment?(yes/no)");//if yes then asks for the bill
	scanf("%s",yn);
	if(strcmp(yn,"yes")==0){
		printf("enter the treatment bill:");
		scanf("%d",&treatmentbill);
	}
	else
	{
		treatmentbill=0;
	}
	int emerf;
	if(casee=='e')
	{
		printf("enter emergency fees");
		scanf("%d",&emerf);
	}
	else
	{
		emerf=0;
	}
	printf("enter medical bill");
	scanf("%d",&medical);
	char y[5];
	int bed_bill;
	printf("did the patient stay at hospital?(yes/no)");// if yes then asks for the bed charge
	scanf("%s",y);
	int days;
	if(strcmp(y,"yes")==0){
		printf("enter how many days did the patient stay at the hospital:");
		scanf("%d",&days);
		bed_bill=days*500;
	}
	else{
		bed_bill=0;
	}	
	int totall;
	int total_bill;
	totall=bed_bill+treatmentbill+medical+fees+emerf;
	printf("total bill is %d\n",totall);
	char problem[4][20]={"cancer","kidney_problem","heart_problem","body_fractures"};
	//char prob[20];
	//printf("enter problem");
	//scanf("%s",prob);
	int count=0;
	char ans[5];
	int i;
	int a;
	for(i=0;i<4;i++){
		a=strcmp(disease,&problem[i][0]);
		if(a==0){
			printf("do you have ration card?(yes/no)");
			scanf("%s",ans);
			if(strcmp(ans,"yes")==0){
				printf("u don't need to pay\n");
				total_bill=0;
				break;
			}
			else 
				printf("arogya sree is not available\n");
				total_bill=totall;
			break;
		}
	}
	if(a!=0){
		printf("arogya sreee is not needed to u\n");
		total_bill=totall;
	}
	printf("u need to pay rupess %d\n",total_bill);
}
	

