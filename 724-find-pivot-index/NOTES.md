**O(n) space and time :
​
prefix sum kore then oi index ( i ) ke bad diye left calculate korsi .. then right (sum_of_all_element ) theke oi index and left minus diye just check korsi left==right ki nah . jodi hoi tahole return that index or return -1 at the end
​
for example ;  1 + 7 + 3 + 6 + 5 + 6  = 28
so for  index 3 :
​
1 8 11 17 23 28
j
left = 17 - 6 = 11
right = 28 - 6 - 11 = 11
so return index  3 **
​
​
O(n) time and O(1) space :
first  a sob right=sum_of_all_element raklam and left =0 korlam . akn right e v[i] minus dibo and left er songe plus korbo .akn check dibo je left == right ki nah .jodi hoi tahole return that index |
or return -1
​
​
​