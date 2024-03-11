import java.io.BufferedReader;
import java.io.InputStreamReader;

public class eratosthenes_2960 {
    public static void main(String args[]) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] num = br.readLine().split(" ");
        int n = Integer.parseInt(num[0]);
        int k = Integer.parseInt(num[1]);

        int[] arr = new int[n+1];
        for (int i = 0; i<n+1; i++){
            arr[i] = i;
        }

        int cnt = 0;

        int knum = 0;

        for (int i = 2; i<n+1; i++ ){
            if(arr[i]==0)
                continue;
            else{
                arr[i] = 0;
                cnt++;
                if(cnt==k){
                    knum = i;
                    break;
                }
                for(int j = 2*i; j<n+1; j+=i){
                    if(arr[j]!=0){
                        arr[j] = 0;
                        cnt++;
                    }
                    if(cnt==k){ //같다면
                        knum = j;
                        break;
                    }
                }
            }
        }

        System.out.println(knum);

    }
}
