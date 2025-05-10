package arduino;

import com.fazecast.jSerialComm.SerialPort;
import java.io.IOException;
import java.util.Scanner;

public class ArduinoReader {

    public static void main(String[] args) throws IOException, InterruptedException {
       
        SerialPort serialPort = SerialPort.getCommPorts()[0];
        serialPort.setComPortParameters(9600, 8, 1, 0);
        serialPort.setComPortTimeouts(SerialPort.TIMEOUT_WRITE_BLOCKING
                , 0, 0);

        for (int i = 0; i < SerialPort.getCommPorts().length; i++) {
            System.out.println(SerialPort.getCommPorts()[i]);
        }

        if (serialPort.openPort()) {
            System.out.println("Serial port opened.");
        } else {
            System.out.println("Failed to open serial port.");
            return;
        }

        while (true) {
            Scanner sc  = new Scanner(System.in);
            System.out.println("Enter i");
            Integer i = sc.nextInt();
             Thread.sleep(1000); // Add a delay of 1 second
              serialPort.getOutputStream().write(i.byteValue());
            sc.close();
           
        }
    }
}