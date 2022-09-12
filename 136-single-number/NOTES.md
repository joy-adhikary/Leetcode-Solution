#   O(nlogn)
1st a array idx 1 theke suru korbo jodi idx i r idx i-1 equal nah hoi tahole amra just return kore dibo  i-1 ta r protibar i+=2 kore barabo.. for example : ( 2 2 3 4 4 ) ei array te 1st a 1 num idx same so idx 3 ta jabe . then 3 te giye dekhbe je idx 3 te ashe 4 r idx 2 te ashe 3  so not equal ajonno idx-1 return kore dibe which is value 3 ,  . karon amr 2 ta value same thakbe so 1 indx bad ditei pari .
​
# O(N)
​
Xor gate diye korbo . xor gate a mile gele 0 hoi . so 1st a  ans = 0 kore dibo thn ans er songe sob gula ke xor korbo .
2 2 3 4 4
ans(0)^=2 => 2
ans(2)^=2 => 0
ans(0)^=3 => 3
ans(3)^=4 => 7
ans(7)^=4 => 3
​
which is the numer which is repeated only once.
According to this gate , the output is true , only if both the inputs are of opposite kind .
That is ,
A B Y
0 0 0
0 1 1
1 0 1
1 1 0
We apply the extended version of this gate in our bitwise XOR operator.
If we do "a^b" , it means that we are applying the XOR gate on the 2 numbers in a bitwise fashion ( on each of the corresponding bits of the numbers).
Similarly , if we observe ,
A^A=0
A^B^A=B
(A^A^B) = (B^A^A) = (A^B^A) = B This shows that position doesn't matter.
Similarly , if we see , a^a^a......... (even times)=0 and a^a^a........(odd times)=a
