import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.lang.Math;
import java.util.Arrays;


public class notdivisiblebysquares {
    public static void main(String args[]) throws Exception{
        long min, max;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().split(" ");
        min = Long.parseLong(input[0]);
        max = Long.parseLong(input[1]);

        int times = (int)(long)(max-min+1);
        int arr[] = new int[times+10];
        Arrays.fill(arr, 0);    //0:제곱ㄴㄴ수

        for(long i = 2; i*i<=max; i++){
            int start = 0;
            if ((long)min%(long)Math.pow(i, 2)!=0){ //나누어 떨어지지 않는 다면
                start = (int)((min/(i*i)+1)*(i*i)-min);
            }
            for(int j = start; j<times; j+=i*i){
                arr[j] = 1; //범위 내에서 제곱으로 나눠지는 수
            }
        }
        int cnt = 0;
        for(int i = 0; i<times; i++){
            if(arr[i]==1)
                cnt++;
        }
        System.out.println(times-cnt);  //결과값
    }
}
