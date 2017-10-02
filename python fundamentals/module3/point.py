class point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __str__ (self):
        return "Point(%s,%s)" % (self.x, self.y)

    ''' def getXPosition(self):
        return self.x

    def getYPosition(self):
        return self.y'''

    def print_distance(self,p):
        dx = p.x - self.x
        dy = p.y - self.y
        print str(dx) + "," + str(dy)

    def move(self, x, y):
        self.x += x
        self.y += y

p1 = point(5,1)
p2 = point(4,2)

print(p1)
p1.print_distance(p2)
p1.move(-5,-1)
print(p1)
p1.print_distance(p2)
