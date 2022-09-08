space  and time complexity O(n) ==>

1.Create a temp array of length input array
2.Traverse through array and if a non negative elements encounter then put this element in the temp array at zero index and increment index
3.Fill the zeros in remaining places of temp array

space O(1)  and time complexity O(n) ==> optimal one 

1.first a dekhbo je 0 koi ashe oitar index i er majhe rakhbo . then j = i+1 nibo.
2. akn jodi j==0 hoi tahole ami just  j ++ korbo karon amr nonzero lagbe .
3. akn j==nonzero hole ami array[i] r array[j] swap kore dibo . akn i++ j++ kore dibo jate porer gula check hoi  

![image](https://user-images.githubusercontent.com/91140113/189072035-bb284e33-2a01-4097-ba17-2a62a58a065f.png)
