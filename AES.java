import javax.crypto.*;
import javax.crypto.spec.*;
import java.util.*;
public class AES
{
    public static void main(String[] args) throws Exception
    {
        KeyGenerator kgen = KeyGenerator.getInstance("AES");
        Cipher cipher = Cipher.getInstance("AES");
        SecretKey skey = kgen.generateKey();
        byte[] raw = skey.getEncoded();
        SecretKeySpec skeySpec = new SecretKeySpec(raw, "AES");
        cipher.init(Cipher.ENCRYPT_MODE, skeySpec);
        Scanner sc = new Scanner(System.in);
        System.out.println("Input your message:");
        String inputText = sc.next();
        byte[] encrypted = cipher.doFinal(inputText.getBytes());
        cipher.init(Cipher.DECRYPT_MODE, skeySpec);
        byte[] decrypted = cipher.doFinal(encrypted);
        System.out.println("\nEncrypted text: " + new String(encrypted)+ "\n" + "\nDecrypted text: " +new String(decrypted));
        System.exit(0);
    }
}
