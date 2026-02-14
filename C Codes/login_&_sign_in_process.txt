#include <stdio.h>

void main() 
{
  
    int i;
    int id,ps,psc,rps,ans,eid,eps,oid,ops,opsc,otp,option;
    printf("-------------------------------\n :  Wellcome to our Website  :\n-------------------------------\n\n Do you want to Sign-up ! or just login ?\n\n  => Press 1 for Sign up\n  => Press 2 for log-in\n\nEnter the number :  ");
    scanf("%d",&i);
    printf("\n");
    if(i==1)
    {
      printf("\nCREATE ID (Numbers only) : ");
	scanf("%d",&id);
	printf("CREATE PASSWORD (Numbers only) : ");
     scanf("%d",&ps);
	printf("\nCONFIRM YOUR PASSWORD : ");
	scanf("%d",&psc);
	 if(psc==ps)
	 {
	     
       
            printf("\n\n-----------------------------------");
            printf("\n\n| You have sucessfully Signed up. |");
            printf("\n\n-----------------------------------\n");
            printf("Do you want to login ?\n\n => press [1] for NEXT\n => press [2] EXIT\nEnter : ");
	        scanf("%d",&ans);
	        
	            {
	                if (ans==1)
	                {
	                   printf("\nEnter id : ");
	                   scanf("%d",&eid);
	                   while(eid!=id)
	                   {
	                       printf("Your ID is INVALID\nEnter your ID again : ");
	                       scanf("%d",&eid);
	                   }
	                   printf("enter your password : " );
	                   scanf("%d",& eps);
	                   if(eps!=ps)
	                   {
	                       printf("\n\n=+=+=+=+=+=+=+=+=+=+=+\n| Incorrect Password |\n=+=+=+=+=+=+=+=+=+=+=+\n||=> Do you want to forget your passsword ? or retry !\n\n => press[1] for forget\n => press[2] for retry\n Enter your option : ");
	                       scanf("%d",&option);
	                       
	                       
	                           if (option==1)
	                           {
	                               printf("\nEnter id : ");
	                                scanf("%d",&eid);
	                                while(eid!=id)
	                                {
	                                    printf("\nYour ID is INVALID !!!!\nEnter your ID again : ");
	                                    scanf("%d",&eid);
	                                }
	                              printf("We have sent you an OTP for your ID on your E-mail ID");
	                              printf("\nEnter OTP (6 digit) - ");
	                              scanf("%d",&otp);
	                              printf("Enter NEW PASSWORD : ");
                                  scanf("%d",&ps);
                                  printf("\nCONFIRM YOUR PASSWORD : ");
	                              scanf("%d",&psc);
	                              while(psc!=ps)
            
           
                                     {
                                        printf("\n\nThe password yo have entered is incorrect !\n\nRe-enter your password : ");
                                        scanf("%d",&psc);
                                     }
                                    printf("=========================================================") ;
                                    printf("\n\n    { let's Try to log-in again with your new password }\n");
                                    printf("\nEnter ID : ");
	                                scanf("%d",&oid);
	                                while(oid!=id)
	                                {
	                                    printf("Your ID is INVALID\nEnter your ID again : ");
	                                    scanf("%d",&oid);
					                 }
	                                    printf("Enter PASSWORD : ");
                                            scanf("%d",&ops);
	                                while(ops!=psc)
                                    {
                                        printf("\n** The password you have entered is incorrect ! ** \nRe-enter your password : ");
                                        scanf("%d",&ops);
                                    }
                                    printf("\n\n-----------------------------------");
                                    printf("\n| You have sucessfully Logged-in. |");
                                    printf("\n-----------------------------------\n");
                                    }
	                           
	                           
	                           
	                           else if (option==2)
	                           {
	                               while(eps!=ps)
	                               {printf("enter your password : " );
	                               scanf("%d",& eps);
	                               }
	                              printf("\n\n-----------------------------------");
                                    printf("\n| You have sucessfully Logged-in. |");
                                    printf("\n-----------------------------------\n"); 
	                           }
	                           else 
	                           printf ("ERROR !!!!!!!");
	                       }
	                   
	                   else
	                   {
	                       printf("\n\n-----------------------------------");
                                    printf("\n| You have sucessfully Logged-in. |");
                                    printf("\n-----------------------------------\n");
                                    
	                   }
	                 }
	                
	                
	                else if (ans==2)
	                printf("\n||~~> Thank you for Sign-Up <~~||");
	                
	                else 
	                printf ("\n~~~~~~~~~~~~~~~~\n  Invalid input\n~~~~~~~~~~~~~~~~\n Error !! Error !! Error !! Error !!\n\n  please try again !");
	            }
	 }

        else if (psc!=ps)
        {
               while(psc!=ps)
            
           
                {
                printf("\n===========================================\nThe password you have entered is incorrect !\n===========================================\nRe-enter your password : ");
                scanf("%d",&psc);
                }
                printf("\n\n-----------------------------------");
                printf("\n| You have sucessfully Signed up. |");
                printf("\n-----------------------------------\n");
                
                printf("Do you want to login ?\n\n => press [1] for NEXT\n => press [2] EXIT\nEnter : ");
	            scanf("%d",&ans);
	           
	           
	                if (ans==1)
	                {
	                   printf("\nEnter id : ");
	                   scanf("%d",&eid);
	                   while(eid!=id)
	                   {
	                       printf("Your ID is INVALID\nEnter your ID again : ");
	                       scanf("%d",&eid);
	                   }
	                   printf("enter your password : " );
	                   scanf("%d",& eps);
	                   if(eps!=ps)
	                   {
	                       printf("\n\n=+=+=+=+=+=+=+=+=+=+=+\n| Incorrect Password |\n=+=+=+=+=+=+=+=+=+=+=+\n Do you want to forget your passsword ? or retry !\n\n => press[1] for forget\n => press[2] for retry\n Enter your option : ");
	                       scanf("%d",&option);
	                       
	                       
	                           if (option==1)
	                           {
	                               printf("\nEnter id : ");
	                                scanf("%d",&eid);
	                                while(eid!=id)
	                                {
	                                    printf("Your ID is INVALID\nEnter your ID again : ");
	                                    scanf("%d",&eid);
	                                }
	                              printf("We have sent you an OTP for your ID on your E-mail ID");  
	                              printf("Enter OTP (6 digit)- ");
	                              scanf("%d",&otp);
	                              printf("Enter NEW PASSWORD : ");
                                  scanf("%d",&ps);
                                  printf("\nCONFIRM YOUR PASSWORD : ");
	                              scanf("%d",&psc);
	                              while(psc!=ps)
            
           
                                     {
                                        printf("\n\nThe password you have entered is incorrect !\n\nRe-enter your password : ");
                                        scanf("%d",&psc);
                                     }
                                     printf("=========================================================") ;
                                    printf("\n\n    { let's Try to log-in again with your new password }\n");
                                    printf("\nEnter ID : ");
	                                scanf("%d",&oid);
	                                while(oid!=id)
	                                {
	                                    printf("Your ID is INVALID\nEnter your ID again : ");
	                                    scanf("%d",&oid);
					                 }
	                                    printf("Enter PASSWORD : ");
                                            scanf("%d",&ops);
	                                while(ops!=psc)
                                    {
                                        printf("\n** The password you have entered is incorrect ! ** \nRe-enter your password : ");
                                        scanf("%d",&ops);
                                    }
                                    printf("\n\n-----------------------------------");
                                    printf("\n| You have sucessfully Logged-in. |");
                                    printf("\n-----------------------------------\n");
                                    }
	                           
	                           
	                           
	                           else if (option==2)
	                           {
	                               while(eps!=ps)
	                               {printf("enter your password : " );
	                               scanf("%d",& eps);
	                               }
	                              printf("\n\n-----------------------------------");
                                    printf("\n| You have sucessfully Logged-in. |");
                                    printf("\n-----------------------------------\n"); 
	                           }
	                           else
	                          
	                           
	                               printf ("\nERROR !!!!!!!");
	                               
	                           
	                       }
	                   
	                   else
	                   {
	                       printf("\n\n-----------------------------------");
                                    printf("\n| You have sucessfully Logged-in. |");
                                    printf("\n-----------------------------------\n");
                                    
	                   }
	                 }
	                
	                
	                else if (ans==2)
	                printf("\n||~~> Thank you for Sign-Up <~~||");
	                
	                else 
	                printf ("\n~~~~~~~~~~~~~~~~\n  Invalid input\n~~~~~~~~~~~~~~~~\n Error !! Error !! Error !! Error !!\n\n  please try again !");
	            
	        
            
         }
    }       
            
    
        
    
    else if (i==2)
    {
        printf("\nEnter id : ");
	    scanf("%d",&id);
    	printf("Enter password : ");
        scanf("%d",&ps);
      
        printf("\n-----------------------------------");
        printf("\n| You have sucessfully Logged-in. |");
        printf("\n-----------------------------------\n"); 
    }
    else
        {
            printf("\n---------X------------ Invalid input ! ----------X-----------\n[ Please try again ! ]");
           
        }

  
}