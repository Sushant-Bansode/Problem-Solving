Given 2 segment [left1, right1], [left2, right2],
how can we check whether they overlap?
If these two intervals overlap, it should exist a value x,
left1 <= x <= right1 && left2 <= x <= right2
so that
max(left1, left2) <= x <= min(right1, right 2)
so that
left1 <= right2 && left2 <= right1
​
These two are the sufficient and necessary conditions,
for two interval overlaps.