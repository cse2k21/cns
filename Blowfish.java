import javax.crypto.*;
import javax.crypto.spec.*;
import java.io.*;
import java.util.*;


public class Blowfish 
{
public static void main(String[] args) throws Exception {
KeyGenerator kgen=KeyGenerator.getInstance("Blowfish");
Cipher cipher = Cipher.getInstance("Blowfish");
SecretKey skey = kgen.generateKey();
byte[] raw = skey.getEncoded();
SecretKeySpec KS = new SecretKeySpec(raw, "Blowfish");
cipher.init(Cipher.ENCRYPT_MODE, skey);
SScanner sc = new Scanner(System.in);
System.out.println("Input your message:");
String inputText = sc.next();
byte[] encrypted = cipher.doFinal(inputText.getBytes());
cipher.init(Cipher.DECRYPT_MODE, skeySpec);
byte[] decrypted = cipher.doFinal(encrypted);
System.out.println("\nEncrypted text: " + new String(encrypted)+ "\n" + "\nDecrypted text: " +new String(decrypted));
System.exit(0);
}
}
