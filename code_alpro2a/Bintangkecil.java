import java.util.Scanner;
   
public class Bintangkecil {
    

    public static void main(String args[]){
            
        Scanner input = new Scanner(System.in);
 
        int bintangkecil,i,j;
      
        System.out.print("Input bintang: ");
        bintangkecil = input.nextInt();
         
        System.out.println();
        
        for(i=1; i<=bintangkecil; i++) {
          for(j=1; j<=bintangkecil; j++) {
            System.out.print(  "* ");
          }
          System.out.println();
        }
         
      }
    }
