import java.util.Scanner;
public class Main {
    static void rectpattern(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                System.out.print("*");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        
        Scanner myinp = new Scanner(System.in);
        int n = myinp.nextInt();
        rectpattern(n);
    }
}