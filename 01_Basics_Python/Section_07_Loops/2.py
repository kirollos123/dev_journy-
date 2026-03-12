class Rectangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def get_area(self):
        return self.width * self.height


class Circle:
    def __init__(self, radius):
        self.radius = radius

    def get_area(self):
        return 3.14 * self.radius ** 2


class Editor:
    def __init__(self):
        self.rect = None
        self.circle = None

    def create_rectangle(self, width, height):
        self.rect = Rectangle(width, height)

    def create_circle(self, radius):
        self.circle = Circle(radius)

    def change_rectangle(self, factor):
        if self.rect is None:
            return
        width = self.rect.width + factor
        height = self.rect.height + factor
        self.create_rectangle(width, height)

    def change_circle(self, factor):
        if self.circle is None:
            return
        self.create_circle(self.circle.radius + factor)

    def print_shapes(self):
        if self.rect is not None:
            print("Rectangle area:", self.rect.get_area())
        if self.circle is not None:
            print("Circle area:", self.circle.get_area())



editor_obj = Editor()
editor_obj.create_rectangle(3, 5)
editor_obj.print_shapes()  
editor_obj.create_circle(5)
editor_obj.change_rectangle(2)
editor_obj.change_circle(2)
editor_obj.print_shapes()
