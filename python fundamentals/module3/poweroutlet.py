class Protocol:
    #create a list of possible protocols
    def __init__ (self, protocol):
        #Assert protocol
        self.protocol = protocol

    def change_protocol(self, new_protocol):
        #assert protocol
        self.protocol = new_protocol

    def getActualProtocol(self):
        return self.protocol

class Outlet:
    def __init__(self,id, com_prot):
        self.id = id
        self.com_prot = com_prot
        self.out = [0,0,0,0]

    def __str__(self):
        return "Outlet #%d, using %s \nOUTPUT [%s \t %s \t %s \t %s]" % (self.id,self.com_prot.protocol,
        "ON" if self.out[0] else "OFF",
        "ON" if self.out[1] else "OFF",
        "ON" if self.out[2] else "OFF",
        "ON" if self.out[3] else "OFF")



prot1 = Protocol("USB")
print(prot1.getActualProtocol())
prot1.change_protocol("UART")
print(prot1.getActualProtocol())

homeOutlet = Outlet(1,prot1)
print(homeOutlet)
