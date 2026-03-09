class py_solution:
    def sub_sets(self, sset):
        return self.subsetsRecur([], sorted(sset))   