# A. Beaver
We can think of problem as we are given some intervals of a larger interval and we have to find an interval which does not contain any of the interval.\
Now we will calculate the optimal interval whose left-endpoint is i, in the order of i = |s|, |s| - 1, |s| - 2, ... 0. When i = |s|, corresponding right-endpoint is only |s|. Let's think the case when corresponding right-endpoint to i + 1 is j. If right[i] > j, then corresponding right-point to i remains j. Otherwise, that right-point is updated to right[i] - 1.
This iteration will be done in O(|s|).
Overall, O(|s|· n· |bi|) runtime.
