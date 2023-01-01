import java.io.*;
import javax.crypto.Cipher; 
import javax.crypto.KeyGenerator;
import javax.crypto.SecretKey; 
import javax.crypto.*;
import javax.swing.JOptionPane;
import javax.crypto.spec.*;


public class Blowfish 
{
 public static void main(String[] args) throws Exception {
KeyGenerator kgen=KeyGenerator.getInstance("Blowfish");
Cipher cipher = Cipher.getInstance("Blowfish");
SecretKey skey = kgen.generateKey();
byte[] raw = skey.getEncoded();
SecretKeySpec KS = new SecretKeySpec(raw, "Blowfish");
cipher.init(Cipher.ENCRYPT_MODE, skey);
String inputText = JOptionPane.showInputDialog("Input your message: ");
byte[] encrypted = cipher.doFinal(inputText.getBytes());
cipher.init(Cipher.DECRYPT_MODE, skey); 
byte[] decrypted = cipher.doFinal(encrypted);
JOptionPane.showMessageDialog(JOptionPane.getRootFrame(),"\nEncrpted text: " + new String(encrypted)+ "\n" + "\nDecrpted text: " + new String(decrypted));
}
}
