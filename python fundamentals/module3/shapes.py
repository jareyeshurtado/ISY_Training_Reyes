
class square:
    squareNumber = 0
    def __init__(self, length):
        self.length = length
        square.squareNumber += 1

    def getSurfaceArea(self):
        return self.length**2

    def getType(self):
        return "square"

class circle:
    circleNumber = 0
    def __init__(self, radius):
        self.radius = radius
        circle.circleNumber += 1

    def getSurfaceArea(self):
        return (self.radius**2) * 3.141

    def getType(self):
        return "circle"

def printSurfaceAreaOfObject(obj):
    print "Object is : ", obj.getType(),  ", with an area of ", obj.getSurfaceArea()


sq = square(5)
cir = circle(2)

printSurfaceAreaOfObject(cir)
printSurfaceAreaOfObject(sq)
