
// Staff Management system using data structure concepts in c 
#include<stdio.h> 
#include<string.h> 
struct Staff_Management_system 
{ 
    int staff_id; 
    int staff_age; 
    char staff_name[20]; 
    char staff_address[20]; 
}s1[5]; 

int main() 
{ 
    int i,j,n, ch,loc_i,id_i,age_i,loc_d ,key ,temp,flag=0; 
    char name_i[20],address_i[20] ; 
    printf("\n Enter the number of staff to add details in system "); 
    scanf("%d", &n); 
    do 
    { 
    printf("\n ****************** Staff Management system********************"); 
    printf("\n ____________"); 
    printf("\n *****************  Menu Card  *******************"); 
    printf("\n 1. Get Staff Data:  "); 
    printf("\n 2. To insert element in  data system:"); 
    printf("\n 3. To delete element in data system:"); 
    printf("\n 4. To search element in data system:"); 
    printf("\n 5. To sort element in data system:"); 
    printf("\n 6.  To Display Staff Data: "); 
    printf("\n 7. Exit from system: \n "); 
    printf("\nEnter the choice "); 
    scanf("%d",&ch); 
    switch(ch) 
    { 
          case 1: 
                 
		   for(  i=0;i<n;i++)      //get  
			    { 
			    printf("\n Enter id number of the staff:"); 
			    scanf("\n %d",&s1[i].staff_id); 
			    printf("\n Enter the name of the staff:"); 
			    scanf("\n %s",s1[i].staff_name); 
			    printf("\n Enter the age of the staff:"); 
			    scanf("\n %d",&s1[i].staff_age); 
			    printf("\n Enter the address of the staff:"); 
			    scanf("\n %s",s1[i].staff_address); 
			    printf("\n"); 
			   	} 
            break;  
                    
 
	case 2:                                                                 
                          //insertion 
    printf("\n Enter the location to insert  ID in staff data"); 
    scanf("\n %d",&loc_i); 
    printf("\n Enter the staff id \t name\t age \t address:"); 
    scanf("\n %d%s%d%s",&id_i, name_i, &age_i, address_i); 
   for (  i=n-1;i>=loc_i-1;i--) 
	  {
        s1[i+1].staff_id=s1[i].staff_id; 
        strcpy(s1[i+1].staff_name,s1[i].staff_name); 
        s1[i+1].staff_age= s1[i].staff_age; 
        strcpy(s1[i+1].staff_address , s1[i].staff_address); 
      } 
        s1[loc_i-1].staff_id= id_i; 
        strcpy(s1[loc_i-1].staff_name, name_i); 
        s1[loc_i-1].staff_age= age_i; 
        strcpy(s1[loc_i-1].staff_address, address_i); 
        n++; 
    printf("\n After inserting data into staff system:"); 
    printf("\n ID\t Name\t Age \t Address\t "); 
		 for(i=0;i<n;i++) 
		  { 
			printf("\n%d",s1[i].staff_id); 
			printf("\t%s",s1[i].staff_name); 
			printf("\t %d",s1[i].staff_age); 
			printf("\t %s",s1[i].staff_address); 
		  }        
			break; 
                     
     case 3:                                          //deletion 
    printf("\n Enter the location to delete the element from data");                
    scanf("\n %d",&loc_d); 
    for(  i=loc_d-1;i<n-1;i++) 
    { 
    s1[i].staff_id=s1[i+1].staff_id; 
    strcpy(s1[i].staff_name, s1[i+1].staff_name); 
    s1[i].staff_age=s1[i+1].staff_age; 
    strcpy(s1[i].staff_address, s1[i+1].staff_address); 
          } 
    s1[n--]; 
    printf("\n After deletion data from the staff system:"); 
    printf("\n ID\t Name\t Age \t Address\t "); 
    for(i=0;i<n;i++) 
    { 
    printf("\n"); 
    printf("\t %d",s1[i].staff_id); 
    printf("\t %s",s1[i].staff_name); 
    printf("\t %d",s1[i].staff_age); 
    printf("\t %s",s1[i].staff_address); 
        }        
        break; 
               
      case 4:                                            //searchig 
		                    
        printf("\n Enter the id number to search"); 
        scanf("\n %d", &key); 
        for (i=0;i<n;i++) 
        { 
        if(key==s1[i].staff_id) 
        { 
        flag =1; 
        break; 
        } 
        } 
        if (flag==1) 
        { 
        printf("\n Staff id  is found");                      
        printf("\n **********************Staff Data****************"); 
        printf("\nID\tName\tAge\tAddress\t "); 
        printf("\n"); 
        printf("\n %d",s1[i].staff_id); 
        printf("\t %s",s1[i].staff_name); 
        printf("\t %d",s1[i].staff_age); 
        printf("\t %s",s1[i].staff_address); 
        } 
        else  
        { 
        printf("\n  Staff id  is not  found"); 
        } 
        break; 
  case 5:                                                                 
                                                         // sorting 
  for (i=1;i<n;i++) 
    { 
       for( j=0;j<n-1;j++) 
            if(s1[j].staff_id>s1[j+1].staff_id) 
            { 
            temp=s1[j].staff_id; 
            s1[j].staff_id=s1[j+1].staff_id; 
            s1[j+1].staff_id=temp; 
            } 
                       
    } 
    printf("\n After sorting data of the staff system:"); 
    printf("\n **********************Staff Data***********************"); 
    printf("\n________________________________________________________" ); 
    printf("\n*******************************************************") ; 
    printf("\nID\tName\tAge\tAddress\t "); 
    for( i=0;i<n;i++) 
    { 
        printf("\n"); 
                 printf("\t %d",s1[i].staff_id); 
        printf("\t %s",s1[i].staff_name); 
        printf("\t %d",s1[i].staff_age); 
        printf("\t %s",s1[i].staff_address); 
    } 
    break; 
    	 	        
    case 6:                                                                                    //display 
        printf("\n =================");     
        printf("\n ****************************Staff Data**************************"); 
        printf("\n_______________________________________________________ ___________"); 
        printf("\n ================================================================"); 
        printf("\nID\tName\tAge\tAddress\t"); 
        for( i=0;i<n;i++) 
        { 
        printf("\n"); 
        printf("\n %d",s1[i].staff_id); 
        printf("\t %s",s1[i].staff_name); 
        printf("\t %d",s1[i].staff_age); 
        printf("\t %s",s1[i].staff_address); 
        } 
    break;         
         
    case 7:printf("\n Thanks for using our software:");    
       break; 
    default: 
    printf("\n Enter the valid choice:"); 
    } 
   }while(ch!=7); 
    return 0;           
  } 
    
     
     
     
     
