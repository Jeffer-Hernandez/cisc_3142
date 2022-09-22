## Lab3 exercises!

### Exercise 2.1
> What are the differences between int, long, long long,
and short? Between an unsigned and a signed type? Between a float and
a double?

C++ guarantees `short` and `int` is **at least** 16 bits, `long` **at least** 32 bits, `long long` **at least** 64 bits.

The `signed` can represent positive numbers, negative numbers and zero, while `unsigned` can only represent numbers no less than zero.




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
