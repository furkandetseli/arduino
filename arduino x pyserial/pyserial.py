import serial
import serial.tools.list_ports as port_list
import os

ports = list(port_list.comports())
print(ports[0].device)
port = ports[0].device
baudrate = 9600
serialPort = serial.Serial(port="COM3", baudrate=9600,bytesize=8, timeout=1, stopbits=serial.STOPBITS_ONE)
serialString = ""
serialPort.write(bytes.fromhex("A551F6"))
# serialPort.write(bytes.fromhex("A555FA"))
durum = 0
liste = ["32","33","34","35","36","37","38"]
while True:
    try:
        # serialPort.reset_input_buffer()
        # serialPort.reset_output_buffer()
        # serialString = serialPort.read(10).hex()
        # serialString = serialPort.read().hex()
        serialString = serialPort.readline().hex()
        if(serialString not in liste):
            print("i")
            continue
            
        if(serialString == "32"):
            if(durum != 1):
                durum = 1
                print("Ege")
                os.startfile('Zeybek.mp3')
            # playsound('Zeybek.mp3')
            # file = "Zeybek.mp3"
            # os.system("afplay" + file)
        if(serialString == "33"):
            if(durum != 2):
                durum = 2
                print("Trakya")
                os.startfile('Trakya.mp3')
        if(serialString == "34"):
            if(durum != 3):
                durum = 3
                print("Akdeniz")
                os.startfile('Akdeniz.mp3')
        if(serialString == "35"):
            if(durum != 4):
                durum = 4
                print("Anadolu")
                os.startfile('Anadolu.mp3')
        if(serialString == "36"):
            if(durum != 5):
                durum = 5
                print("Karadeniz")
                os.startfile('Karadeniz.mp3')
        if(serialString == "37"):
            if(durum != 6):
                durum = 6
                print("Doğu Anadolu")
                os.startfile('Danadolu.mp3')
        if(serialString == "38"):
            if(durum != 7):
                durum = 7
                print("Güneydoğu Anadolu")
                os.startfile('Ganadolu.mp3')
    except KeyboardInterrupt:
        break

serialPort.close()

# 1. yer (port 2) == 32
# 2. yer (port 3) == 33
# 3. yer (port 4) == 34
# 4. yer (port 5) == 35
# 5. yer (port 6) == 36
# 6. yer (port 7) == 37
# 7. yer (port 8) == 38
# playsound('Music1.mp3')