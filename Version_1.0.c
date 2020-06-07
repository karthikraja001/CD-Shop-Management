#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
#define SIZE 3
struct product
{
    int product_id;
    char product_name[100];
    int product_price;
    struct product *next;
};
struct Bill
{
    int probill_id;
    char probill_name[100];
    int probill_price;
    struct Bill *nextt;
};

int front = -1, rear = -1;
char person[5][30],token[5];
void customer_store(char x[],int y)
{
	int i;
	if(rear==-1)
    {
        front=0;
		rear=0;
        strcpy(person[rear],x);
        token[rear]=y;
		rear++;
    }
	else if(rear==SIZE)
	{
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else 
		{
			for(i=0;i<rear-1;i++)
    		{
    			strcpy(person[i],person[i+1]);
    			token[i]=token[i+1];
			}
			rear--;
			strcpy(person[rear],x);
        	token[rear]=y;
			rear++;
		}	
	}
	else
	{
		strcpy(person[rear],x);
        token[rear] = y;
        rear++;
	}
}


void main()
{
	char m[10];
    long long card_number;
    int i,l,opt,choice,tok=1,month_number,year_number,cvv,method,lang;
	char customer[30];
	shop:
	printf("Enter the option\n1. Open the store\n2. To delete first entered\n3. display\n4. Close the store\n");
	scanf("%d",&opt);
	if(opt==1){
    	printf("\n\n\n\n\n\n\n\n\n\t          *******************************************************************************************");
    	printf("\n\t\t  ----------------------------WELCOME TO THE MOVIES PARADISE!--------------------------------");
    	printf("\n\t\t              THE MOVIES PARADISE HAS THE BEST DEALS AND DISCOUNTS TO BUY SERIES!");
    	printf("\n\t\t  YOUR ONE STOP DESTINATION WATCHING AMAZING MOVIES/SERIES THAT LETS YOU ORDER MOVIES ONLINE!");
    	printf("\n\t\t\t\t\t  LETS GET WATCHING!!");
    	printf("\n\t\t  *******************************************************************************************");
    	printf("\n\t\t\t\t  ENTER PASSWORD TO ENTER THIS MAGICAL PLACE:");
    	scanf("%s",&m);
        if(strcmp(m,"123")==0)
        {
            printf("\n\t\t\t\t\t  CORRECT PASSWORD!");
            printf("\nEnter your name:-\t");
            scanf("%s",&customer);
            printf("Your Token ID is %d",tok);
            struct product *start=NULL;
            struct Bill *startt=NULL;
            customer_store(customer,tok);
            struct product *product1,*product2,*product3,*product4,*product5,*product6,*product7,*product8,*product9,*product10,*product11,*product12,*ptr;
            struct Bill *ptr1;
            int total=0;
            
    		product1=(struct product*)malloc(sizeof(struct product));
            product1->product_id=1;
            strcpy(product1->product_name,"Money Heist season(1,2,3,4)   ");
            product1->product_price=499;
            
    		start=product1;
            
    		product2=(struct product*)malloc(sizeof(struct product));
            product1->next=product2;
            product2->product_id=2;
            strcpy(product2->product_name,"Stranger Thigs season(1,2,3)          ");
            product2->product_price=399;
            
    		product3=(struct product*)malloc(sizeof(struct product));
            product2->next=product3;
            product3->product_id=3;
            strcpy(product3->product_name,"Game of thrones(8-seasons)           ");
            product3->product_price=999;
            
    		product4=(struct product*)malloc(sizeof(struct product));
            product3->next=product4;
            product4->product_id=4;
            strcpy(product4->product_name,"Black mirror(5-seasons)               ");
            product4->product_price=799;
            
    		product5=(struct product*)malloc(sizeof(struct product));
            product4->next=product5;
            product5->product_id=5;
            strcpy(product5->product_name,"True Detective(3-seasons)          ");
            product5->product_price=499;
            
    		product6=(struct product*)malloc(sizeof(struct product));
            product5->next=product6;
            product6->product_id=6;
            strcpy(product6->product_name,"The walking dead(10-seasons) ");
            product6->product_price=999;
            
    		product7=(struct product*)malloc(sizeof(struct product));
            product6->next=product7;
            product7->product_id=7;
            strcpy(product7->product_name,"Modern Family(10-seasons)           ");
            product7->product_price=999;
            
    		product8=(struct product*)malloc(sizeof(struct product));
            product8->product_id=8;
            product7->next=product8;
            strcpy(product8->product_name,"Home Land(7-seasons)           ");
            product8->product_price=799;
            product8->next=product9;
    
    
            product9=(struct product*)malloc(sizeof(struct product));
            product8->next=product9;
            product9->product_id=9;
            strcpy(product9->product_name,"Mission Impossible(full series)               ");
            product9->product_price=999;
    
            product10=(struct product*)malloc(sizeof(struct product));
            product9->next=product10;
            product10->product_id=10;
            strcpy(product10->product_name,"Friends(full series)                 ");
            product10->product_price=999;
    
            product11=(struct product*)malloc(sizeof(struct product));
            product10->next=product11;
            product11->product_id=11;
            strcpy(product11->product_name,"Mr.Robot(3-seasons)                 ");
            product11->product_price=499;
    
            product12=(struct product*)malloc(sizeof(struct product));
            product11->next=product12;
            product12->product_id=12;
            strcpy(product12->product_name,"Vikings(5-seasons)                 ");
            product12->product_price=599;
            product12->next=NULL;
            printf("\n Hello %s",customer);
            printf("\n\n\n\n\t\t     AT THE MOVIE'S DUNGEON, WE HAVE SERIES RANGING FOR VARIOUS LANGUAGES");
            printf("\n\n\t\t     1.ENGLISH");
            printf("\n\n\t\t     2.TAMIL");
            printf("\n\n\t\t     3.MALAYALAM");
            printf("\n\n\t\t     4.TELUGU");
            printf("\n\n\t\t     5.HINDI");
            printf("\n\n\t\t     6.FRENCH");
            printf("\n\n\t\t     7.SPANISH");
            printf("\n\n\t\t     CHOOSE YOURS:");
    
    		start:
       	    scanf("%d",&lang);
    		if(lang<1 || lang>7)
    		{
    			printf("\n\n\t\t     ENTER A VALID OPTION(1-7)");
    			goto start;
    		}
    
            system("cls");
            printf("\t\t\tHERE'S A LIST OF THE LATEST AND THE TRENDIEST SERIES AT AMAZING RATES\n");
            printf("**********************************************************************************************************************");
    
            printf("\n\t1.Money Heist season(1,2,3,4)                           2.Stranger Thigs season(1,2,3)\n");
            printf("\t Rs.499\t\t\t\t\t\tRs.399\n\n\n");
    
    
            printf("\t3.Game of thrones(8-seasons)\t\t\t        4.Black mirror(5-seasons)\n");
            printf("\t Rs.999\t\t\t\t\t\tRs.799\n\n\n");
    
            printf("\t5.True Detective(3-seasons)\t\t\t        6.The walking dead(10-seasons)\n");
            printf("\t Rs.499\t\t\t\t\t\tRs.999\n\n\n");
    
            printf("\t7.Modern Family(10-seasons)\t\t\t        8.Home Land(7-seasons)\n");
            printf("\t Rs.999\t\t\t\t\t\t\tRs.799\n\n");
    
            printf("\t9.Mission Impossible(full series)\t\t        10.Friends(full series)\n");
            printf("\t Rs.999\t\t\t\t\t\tRs.999\n\n\n");
    
            printf("\t11.Mr.Robot(3-seasons)\t\t\t\t        12.Vikings(5-seasons)\n");
            printf("\t Rs.499\t\t\t\t\t\tRs.599\n\n");
    
    		
            int procode;
    		stat:
            printf("***********************************************************************************************************************\n");
            printf("ENTER MOVIE CODE TO ADD TO THE CART\nPRESS -1 TO CHECKOUT:\n");
            scanf("%d",&procode);
            if((procode<1||procode>12) && procode!=-1)
            {
            	printf("Invalid option");
            	goto stat;
			}
            l=-1;
            if(l==-1 && procode==-1)
    		{
    			printf("\n***********************************************************************************************************************\n");
    			printf("NO PRODUCT ID IS ENTERED\n");
    			goto stat;
    		}
            while(procode!=-1 || (procode>=1 && procode<=12))
            {
                ptr=start;
                while(ptr->product_id!=procode)
                {
                    ptr=ptr->next;
                }
                
    			struct Bill *newnode;
                newnode=(struct Bill*)malloc(sizeof(struct Bill));
                newnode->probill_id=ptr->product_id;
                strcpy(newnode->probill_name,ptr->product_name);
                newnode->probill_price=ptr->product_price;
                
    			if(startt==NULL)
                {
                    startt=newnode;
                    newnode->nextt=NULL;
                    total=startt->probill_price;
                    ptr1=startt;
                }
                else
                {
                    ptr1=startt;
                    while(ptr1->nextt!=NULL)
                    {
                        ptr1=ptr1->nextt;
                    }
                    ptr1->nextt=newnode;
                    newnode->nextt=NULL;
                    total=total+newnode->probill_price;
                    ptr1=newnode;
                }
                stat2:
                scanf("%d",&procode);
                if((procode<1||procode>12) && procode!=-1)
            	{
            		printf("Invalid option\n");
            		goto stat2;
				}
            }
    
            system("cls");
            printf("\n\n******************************************************************************************************\n");
            printf("\tID\t\tName\t\t\t\t\t\t\tPrice\n");
            printf("******************************************************************************************************\n");
            ptr1=startt;
            while(ptr1!=NULL)
            {
            printf("\t%d",ptr1->probill_id);
            printf("\t%s",ptr1->probill_name);
            printf("\n\t\t\t\t\t\t\t\t\t\t%d\n",ptr1->probill_price);
    
            ptr1=ptr1->nextt;
            }
            printf("******************************************************************************************************\n");
            printf("\t\t\t\t\t\t     \t\t\tTotal- Rs %d/-",total);
            method:
			printf("\n\tPick one method of delivery:\n\t1.Pick-Up from store\n\t2.Home-Delivery\n\tEnter your choice:");
            scanf("%d",&method);
            if(method==1)
            {
            printf("\t\t\t\t\t\t      \t\t\tTotal- Rs %d/-",total);
            }
            else if(method==2)
            {
                printf("\n\tHome Delivery charges:RS 100/-\n");
                total+=100;
                printf("\t\t\t\t\t\t \t\t\tNew Total- Rs %d/-",total);
            }
            else
            {
            	printf("\n\tEnter a valid payment method\n");
            	goto method;
			}
    		pay:
            printf("\n\n\tWhich payment would you like?\n\t1.DEBTI CARD\n\t2.CREDIT CARD\n\t3.CASH\n\tEnter your choice(1/2/3):");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
					card1:
					printf("\tPlease enter your CARD NUMBER : (16 digits)");
                    scanf("%lld",&card_number);
                    if(card_number<=9999999999999999 && card_number>=999999999999999)
                    {
                    printf("\tTransacting.....\n");
                    mm:
                    printf("\tEnter your CARD EXPIRY DATE(MM/YY):");
                    scanf("%d/%d",&month_number,&year_number);
                    if((month_number<1||month_number>12)||year_number<20)
                    {
						printf("\n\tEnter correct expiry date\n");	
						goto mm;
                	}
                	cvv1:
					printf("\tEnter your CVV : (3 digits)");
                    scanf("%d",&cvv);
                    if(cvv<=999 && cvv>=100)
                    {
                        printf("\tTransacting....\n\tAnd everything is DONE!\n\tTHANKS FOR SHOPPING WITH US Mr/Mrs. %s\n!DO VISIT AGAIN!\n",customer);
                        tok++;
                    }
                    else
                    {
                        printf("\tINCORRECT CVV!TRY AGAIN\n");
                    	goto cvv1;
					}
                    }
                    else
                        {
                        printf("\tINCORRECT CARD NUMBER!TRY AGAIN\n");
                        goto card1;
                    }
                    break;
            case 2:
					card2:
					printf("\tPlease enter your CARD NUMBER : (16 digits)");
                    scanf("%lld",&card_number);
                    if(card_number<=9999999999999999 && card_number>=999999999999999)
                    {
                    printf("\tTransacting.....\n");
                    my:
					printf("\n\tEnter your CARD EXPIRY DATE(MM/YY):");
                    scanf("%d/%d",&month_number,&year_number);
                    if((month_number<1||month_number>12)||year_number<20)
                    {
						printf("\n\tEnter correct expiry date\n");
						goto my;
					}
					cvv2:
					printf("\tEnter your CVV : (3 digits)");
                    scanf("%d",&cvv);
                    if(cvv<=999 && cvv>=100)
                    {
                        printf("\tTransacting....\n\tAnd everything is DONE!\n\tTHANKS FOR SHOPPING WITH US Mr/Mrs, %s \n!DO VISIT AGAIN!\n",customer);
                        tok++;
                    }
                    else
                    {
                        printf("\tINCORRECT CVV!TRY AGAIN!\n");
                        goto cvv2;
                    }
                    }
    
                    else
                    {
                        printf("\tINCORRECT CARD NUMBER !TRY AGAIN\n");
                        goto card2;
                    }
                    break;
            case 3:printf("\tThanks!And everything is DONE!\n\tTHANKS FOR SHOPPING WITH US Mr/Mrs. %s\n\t!DO VISIT AGAIN!\n\n",customer);
                    tok++;
                    break;
            default:
					printf("\tEnter a valid option\n");
					goto pay;        
            }
            goto shop;
        }
        else
        {
            printf("\n\t\t\t\t     INCORRECT PASSWORD! TRY AGAIN LATER\n\n");
            goto shop;
        }
	}
	
	//closing the store
	else if(opt==4)
	{
	    printf("Shop is Closed.\n");
	    printf("Today's last few customer's token and details\n");
	    print_details();
	    
        printf("\n\n\n\t\t\t\t       PROGRAM DEVELOPED BY\n");
		printf("\t\t\t\tR.VIGNESH     AND     KARTHIK RAJA");
        printf("\n\t\t\t\t         CAT-2-DS   PROJECT");
	}
	
	//delete
	else if(opt==2)
	{
		if(front == rear)
    	{
    	    printf("Queue Underflown\n");
    	    goto shop;
    	    return ;
    	}
    	printf("Customer removed from queue is : %s\n",person[front]);
    	for(i=0;i<rear-1;i++)
    	{
    		strcpy(person[i],person[i+1]);
    		token[i]=token[i+1];
		}
		rear--;

    	print_details();
		goto shop;
	}
	
	else if(opt==3)
	{
		print_details();
		goto shop;
	}
	else
	{
		printf("Invalid option: Try again\n");
		goto shop;
	}
}

void print_details(){
    int i;
    printf("Token\t\t\tName");
    printf("\n");
    for(i=front;i<rear;i++)
    {
    	if(token[i]!=0)
    	{
	        printf("%d",token[i]);
	        printf("\t\t\t%s",person[i]);
	        printf("\n");
		}
	}
}
