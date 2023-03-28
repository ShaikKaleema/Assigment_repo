import java.util.*;
public class Mono{
    public static char p[]={ 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i','j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    public static char ch[]={ 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O','P', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'Z', 'X', 'C', 'V', 'B', 'N', 'M' };
    static String str;
    public static String doEncrypt(String s){
        char[] c=new char[(s.length())];
        for(int i=0;i<s.length();i++){
            for(int j=0;j<26;j++){
                if(p[j]==s.charAt(i)){
                    c[i]=ch[j];
                    break;
                }
            }
        }
        return (new String(c));
    }
    public static String doDecypt(String s){
        char[] c1=new char[(s.length())];
        for(int i=0;i<s.length();i++){
            for(int j=0;j<26;j++){
                if(ch[j]==s.charAt(i)){
                    c1[i]=p[j];
                    break;
                }
            }
        }
        return (new String(c1));
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("enter message");
        str=sc.next();
        String enc=doEncrypt(str.toLowerCase());
        System.out.println("encypted message id:"+enc);
        System.out.println("decypted message is:"+doDecypt(enc));
    }
}