import java.io.BufferedReader;
import java.io.InputStreamReader;

public class ascendingNum{
    static int n = 0;

    public static void main(String args[]) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.valueOf(br.readLine());
        
        long sum = 0;
        int[][] dig = new int[n+1][11];
        for (int i = 0; i<n+1; i++){
            dig[i][0] = 1;
            
        }
        
        
        for (int i = 0; i<10; i++){
            dig[0][i] = 0;
            dig[1][i] = 1;
        }
        
        for (int i = 1; i<n+1; i++){
            for(int j = 1; j<10; j++){
                dig[i][j] = dig[i][j-1] + dig[i-1][j];  //계산식
                if(dig[i][j]>=10007)
                    dig[i][j]%=10007;   //나머지
            }
        }
        for (int i = 0; i<10; i++){
            sum += dig[n][i];
            if(sum>=10007){
                sum %= 10007;
            }
        }
        System.out.println(sum);
        
    }
}