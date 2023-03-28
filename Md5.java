import java.math.BigInteger;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
public class Md5{
    public static String getMd5(String input){
        try{
            MessageDigest md= MessageDigest.getInstance("MD5");
            byte[] messagedigest=md.digest(input.getBytes());
            BigInteger no = new BigInteger(1,messagedigest);
            String hashtext=no.toString(16);
            while(hashtext.length()>32){
                hashtext="0"+hashtext;
            }
            return hashtext;
        }
        catch(NoSuchAlgorithmException e){
            throw new RuntimeException(e);
        }
    }
    public static void main(String args[]) throws NoSuchAlgorithmException{
        String s="VVIT";
        System.out.println("hash code generated is"+getMd5(s));
    }
}