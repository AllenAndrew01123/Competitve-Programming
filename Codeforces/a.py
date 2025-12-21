import sys

def alpha_numeric_sort(val):
    return (0, val) if val.isdigit() else (1, val)

lines = []
for line in sys.stdin:
    lines.append(line.strip())
    if len(lines) == 2:
        break  # Only take first two lines

if len(lines) < 2:
    print("NULL")  # Not enough input
else:
    set1 = set(lines[0].split())
    set2 = set(lines[1].split())

    common = sorted(set1 & set2, key=alpha_numeric_sort)

    if common:
        print(" ".join(common))
    else:
        print("NULL")
