
package javaapplication16;

import java.util.Scanner;


public class JavaApplication16 {
    public String name;
    public int Accno;
    public float balance;
    long amt;
    long withbal;
    
    Scanner input= new Scanner(System.in);
    
    void openAccount(){
     System.out.println("Enter your bank accout:" );
     Accno= input.nextInt();
     System.out.println("Enter your name:");
      name= input.next();
     System.out.println("Enter your bank balance:");
     balance =input.nextFloat();
     
}
    
    void showaccount(){
              
     
       System.out.println(Accno+","+name+","+balance);
    }
    
    void deposit(){
        
		System.out.println("Enter Amount U Want to Deposit : ");
		amt=input.nextLong();
		balance=balance+amt;
    }
    
    void withdrawal(){
        System.out.println("Enter Amount U Want to Withdraw : ");
        withbal= input.nextLong();
        if(withbal<amt){
            System.out.println(balance=balance-amt);
        }
            else
            {
                 System.out.println("Transaction failed due to less money");
                 
                    }
            
        }
    
        
   boolean search(String acn){
      if (Accno.equals(acn))
		{ 
			showaccount();
			return(true);
		}
		return(false);
       }
       


public static void main(String[] args) {
        Scanner input2=new Scanner(System.in);
		
		//create initial accounts
		System.out.print("How Many Customer U Want to Input : ");
		int n=input2.nextInt();
		 JavaApplication16 C[]=new JavaApplication16[n];
		for(int i=0;i<C.length;i++)
		{   
			C[i]=new JavaApplication16();
			C[i].openAccount();
		}
		int ch;
                do{
                    System.out.println("1.Display all");
                    System.out.println("2.Search By Account");
                    System.out.println("3.Deposit");
                    System.out.println("4.Withdrawal");
                    System.out.println("5.exit");
                    System.out.println("Ur Choice :");
			ch=input2.nextInt();
			switch(ch)
			{ 
				case 1:
					for(int i=0;i<C.length;i++)
					{
						C[i].showaccount();
					}
					break;
                                    
                                case 2 :
                                    System.out.print("Enter Account No U Want to Search...: ");
					String acn=input2.next();
					boolean found=false;
                                       found=false;
                                    for (int i=0;i<=C.length;i++){
                                      found=C[i].search(acn);
                                      if(found){
                                          break;
                                      }if (!found){
                                          System.out.println("Failed");
                                      }
                                           break;
                               case 3 :
					System.out.println("Enter Account No : ");
					 String acn=input2.next();
					found=false;
					for(int i=0;i<C.length;i++)
					{  
						found=C[i].search(acn);
						if(found)
						{
							C[i].deposit();
							break;
						}
					}
					if(!found)
					{
						System.out.println("Search Failed..Account Not Exist..");
					}
					break;
                                    }
                                  case 4:
					System.out.print("Enter Account No : ");
					acn=input2.next();
					found=false;
					for(int i=0;i<C.length;i++)
					{  
						found=C[i].search(acn);
						if(found)
						{
							C[i].withdrawal();
							break;
						}
					}
					if(!found)
					{
						System.out.println("Search Failed..Account Not Exist..");
					}
					break;

				case 5:
					System.out.println("Good Bye..");
					break;
			}
                    
                    
                    
                }while(ch!=5);
    }

}