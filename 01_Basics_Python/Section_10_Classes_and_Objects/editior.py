class editor:
    def __init__(self):
        self.rect=None
        self.circ=None
    def create_rectangle(self,width,length):
        self.rect=rectangle(width,length)
    def create_circle(self,radius):
        self.circ=circle(radius)