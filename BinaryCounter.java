import java.util.*;
import java.util.Arrays;

class BinaryCounter {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter decimal:");
        String stc = sc.next();
        double decimalValue = Double.parseDouble(stc);
        int num = (int) decimalValue;
        System.out.println("Its integer value is :" + num);
        String st = Integer.toBinaryString(num);
        char[] str = st.toCharArray();
        System.out.println("Binary form is:" + Arrays.toString(str));
        int len = st.length();
        int i = len - 1;
        System.out.println("Enter number of time you want to increment:");
        int k = sc.nextInt();
        for (int j = 0; j < k; j++) {
            System.out.println(counter(str, i));
        }
    }

    static char[] counter(char[] str, int i) {
        while (str[i] == '1') {
            str[i] = '0';
            i--;
        }
        if (i >= 0)
            str[i] = '1';
        return str;
    }
}