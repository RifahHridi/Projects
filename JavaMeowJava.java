
package  JavaMeowJava;
import java.security.Key;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.crypto.Cipher;
import javax.crypto.spec.SecretKeySpec;
import sun.misc.BASE64Decoder;
import sun.misc.BASE64Encoder;



public class  JavaMeowJava {
private static final String ALGO="AES";
private byte[] keyValue;

public  JavaMeowJava(String key){
    keyValue= key.getBytes();
}
public String encrypt(String Data) throws Exception{
    Key key = generateKey();
    Cipher c= Cipher.getInstance(ALGO);
    c.init(Cipher.ENCRYPT_MODE, key);
    byte[] encVal= c.doFinal(Data.getBytes());
    String encryptedValue = new BASE64Encoder().encode(encVal);
    return encryptedValue;
    
    
}
public String decrypt(String encryptedData) throws Exception{
    Key key = generateKey();
    Cipher c= Cipher.getInstance(ALGO);
    c.init(Cipher.DECRYPT_MODE, key);
     byte[] decodedValue = new BASE64Decoder().decodeBuffer(encryptedData);
    byte[] decVal= c.doFinal(decodedValue);
    String decryptedValue=new String (decVal);
    return decryptedValue;

}
private Key generateKey() throws Exception{
    Key key = new SecretKeySpec(keyValue,ALGO);
    return key;
}


    public static void main(String[] args) {
        
      try{
          JavaMeowJava aes= new JavaMeowJava("lv39eptlvuhaqqsr");
          String encdata =aes.encrypt("Amarnath");
          System.out.println("Encrypted:"+encdata);
          String decdata =aes.decrypt(encdata);
          System.out.println("Decrypted:"+decdata);
          
      }
      
        catch(Exception ex){
            Logger.getLogger(JavaMeowJava.class.getName()).log(Level.SEVERE,null,ex);
        }
        
        
    }
}
    
    

