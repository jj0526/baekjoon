import java.io.BufferedReader;
import java.io.InputStreamReader;
public class appartment_2775{


    static int[][] room = new int[20][20];
    static int T;
    

    public static void Appartment_2775(String args[]) throws Exception{

        //ArrayList<Integer> list = new ArrayList<>();
        int [][] list;

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        T = Integer.valueOf(br.readLine());
        list = new int[T+1][2];

        for(int i = 0; i<T; i++){
            int k = Integer.valueOf(br.readLine());
            int n = Integer.valueOf(br.readLine());
            list[i][0] = k;
            list[i][1] = n;
        }

        apartment();
        for(int i = 0; i<T; i++){
            System.out.println(room[list[i][0]][list[i][1]]);
        }

    }

    private static void apartment(){
        for (int i = 0; i<15; i++){
            room[0][i] = i; //초기 값 설정
        }
        
        for (int i = 1; i<15; i++){
            for (int j = 1; j<15; j++){
                if(j==1){
                    room[i][j] = 1;
                }
                else
                    room[i][j] = room[i-1][j] + room[i][j-1];
            }
        }

    }
}