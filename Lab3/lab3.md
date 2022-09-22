## Outputs for Lab3 exercises!

|Exercise | Prompt | Output | 
|:--------|:--------|:--------|
|2.1|What are the differences between int, long, long long, and short?   | The minimum size for short and int is 16 bits, for long it is 32 bits and long long must contain at least 64 bits|
|2.1|Between an unsigned and a signed type? Between a float and a double?|An unsigned short (2 bytes) can represent values from 0 to 2^16, while a signed data type can store values form -2^15 to 2^15| 
|2.2|To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type. |I would use a double or a float. Rates, payments, and figures relating to money, usually have decimal points.|
|2.3|What output will the following code produce?
 ```
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;
int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;
``` 
|32 4294967264 32 -32 0 0|
|2.10| | |
|2.12| | |
|2.13| | |
|2.14| | |
|2.17| | |
|2.27| | |
|2.28| | |

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
