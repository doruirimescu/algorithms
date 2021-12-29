def generate_binary_number(n, elems = list()):
    '''
    Generate all binary numbers of length n.
    '''
    if len(elems) == n:
        print(elems)
    else:
        generate_binary_number(n, elems + [0])
        generate_binary_number(n, elems + [1])

elems = list()
def generate_binary_number_2(n):
    if len(elems) == n:
        print(elems)
    else:
        elems.append(0)
        generate_binary_number_2(n)
        elems.pop()
        elems.append(1)
        generate_binary_number_2(n)
        elems.pop()
