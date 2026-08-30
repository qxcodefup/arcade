_ = input()
values: list[float] = list(map(float, input().split()))
values.sort()
n = len(values)
if n % 2 == 1:
    print(f"{values[n//2]:.1f}")
else:
    median = (values[n//2 - 1] + values[n//2]) / 2
    print(f"{median:.1f}")
