    import java.util.Scanner;
     
    public class ATM{
    	public static void main(String[] args){
    		int x;
    		float init_account;
    		
    		Scanner s = new Scanner(System.in);
    		x = s.nextInt();
    		init_account = s.nextFloat();
    		
    		if((x % 5) == 0 && (x + 0.5 < init_account)){
    			System.out.printf("%.2f", init_account - x - 0.5);
    		}
    		else if (x % 5 !=0){
    			System.out.printf("%.2f", init_account);
    		}
    		else{
    			System.out.printf("%.2f", init_account);
    		}
    	}
    } 
