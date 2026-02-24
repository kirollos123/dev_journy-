def f2():
        return 3 + f1(False)


def f1(go_deeper= True):
        if go_deeper:
            return 2 * f2()
        return 1


print(f2())
