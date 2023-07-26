t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    a = ""
    for i in range(n-1):  # Loop until the second last character
        if s[i] == s[i+1]:
            a += s[i] * 2  # Append the repeated character twice to 'a'
    if len(a) == 0:
        print(s)  # If 'a' is empty, print the original string
    elif len(a) == 1:
        print(s[0] + a + s[-1])  # Print the modified string with 'a' added
    else:
        print(s[0] + a + s[-1] * 2)  # Print the modified string with 'a' added and last character repeated
