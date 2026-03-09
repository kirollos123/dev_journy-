class rectangle:
    def __init__(self, width, length):
        self.width = width
        self.length = length

    def area(self):
        return self.width*self.length


class circle:
    def __init__(self, radius):
        self.radius = radius
    def area( self):
        return 3.14*self.radius*self.radius
    
r=rectangle(5,10)
print('area of rectangle is:',r.area())
c=circle(5)
print('area of circle is:',c.area())