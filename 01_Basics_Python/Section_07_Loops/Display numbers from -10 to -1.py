class rectangle:
    def __init__(self,  width, hight):
        self.width = width
        self.height = hight

    def get_area(self):
        return self.width * self.height
class cirecel: 
    def __init__(self,radius):
        self.radius= radius
        
    def get_area(self):
        return 3.14 * self.radius ** 2
rect1 = rectangle(5, 10)
print(rect1.get_area())
circle1 = cirecel(7)
print(circle1.get_area())
rect2 = rectangle(3, 4)
print(rect2.get_area())         