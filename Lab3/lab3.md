## Lab3 exercises!

### Exercise 2.1
> What are the differences between int, long, long long,
and short? Between an unsigned and a signed type? Between a float and
a double?

C++ guarantees `short` and `int` is **at least** 16 bits, `long` **at least** 32 bits, `long long` **at least** 64 bits.

The `signed` can represent positive numbers, negative numbers and zero, while `unsigned` can only represent numbers no less than zero.

## Exercise 2.2
>To calculate a mortgage payment, what types would you use
for the rate, principal, and payment? Explain why you selected each type.

I would use `double` or `float`. I would use a double or a float. Rates, payments, and figures relating to money, usually have decimal points.

## Exercise 2.3

> What output will the following code produce?
```cpp
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;
int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;
```

Output(g++ 4.8):

```
32
4294967264
32
-32
0
0
```
## Exercise 2.10
>What are the initial values, if any, of each of the following variables?
```cpp
std::string global_str;
int global_int;
int main()
{
    int local_int;
    std::string local_str;
}
```

## Exercise 2.12
`global_str` is global variable, so the value is empty string.
`global_int` is global variable, so the value is zero.
`local_int` is a local variable which is uninitialized, so it has a undefined value.
`local_str` is also a local variable which is uninitialized, but it has a value that is defined by the class. So it is an empty string.

>Which, if any, of the following names are invalid?
- (a) int double = 3.14;
- (b) int _;
- (c) int catch-22;
- (d) int 1_or_2 = 1;
- (e) double Double = 3.14;

`a`, `c`, `d` are invalid.


## Ongoing Command list
<!-- Record a terminal session -->
```script -r script-mac-$(date +%F).log```

<!-- show modified files in working directory, staged for your next commit -->
```git status```

<!-- add a file as it looks now to your next commit (stage) -->
```git add [file]```

<!-- commit your staged content as a new commit snapshot -->
```git commit -m "[descriptive message]"```

<!-- create a new branch at the current commit -->
```git branch [branch name]```

<!-- switch to another branch and chekc it out into your working directory -->
```git checkout```

<!-- merge the specified branch's history into the current one -->
```git merge [branch]```

<!-- fetch and merge any commits from the tracking remote branch -->
```git pull```

<!-- Transmit local branch commits to the remote repository branch -->
```git push [alias] [branch]```
