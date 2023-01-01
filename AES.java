import javax.swing.JOptionPane;
import javax.crypto.*;
import javax.crypto.spec.*;
import java.io.*;
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
String inputText = JOptionPane.showInputDialog("Input your message:");
byte[] encrypted = cipher.doFinal(inputText.getBytes());
cipher.init(Cipher.DECRYPT_MODE, skeySpec);
byte[] decrypted = cipher.doFinal(encrypted);
JOptionPane.showMessageDialog(JOptionPane.getRootFrame(), "\nEncrypted text: " + new String(encrypted)+ "\n" + 
"\nDecrypted text: " +new String(decrypted));
System.exit(0);
}
}
