Idea is simple . its kind of two pointer :
set i=m-1 , j=n-1 and k=(m+n)-1
​
for example  v1=  2 3 4          v2 =  1 2 3
now ,  2 3 4         1 2 3
i                j
4 is grater then 3 so v1[k] = v1[i] ==> k-- , i --
now ,  2 3 4         1 2 3
i                    j
3 is grater then 3 so v1[k] = v1[i] ==> k-- , i --   ( grater then or equal to )
​
now ,  2 3 4         1 2 3
i                       j
​
3 is grater then 2 so v1[k] = v2[j] ==> k-- , j --
now ,  2 3 4         1 2 3
i                    j
2 is grater then 2 so v1[k] = v1[i] ==> k-- , i --   ( grater then or equal to )
now ,  2 3 4         1 2 3
i                    j      i=-1 so loop break
now as j >=0 so until j=0 push all the element form v2 into v1
v1[k]=v2[j] , k-- , j--   2 pushed
v1[k]=v2[j] , k-- , j--   1 pushed
now j=0 so loop break
​
resultent array v1= 1 2 2 3 4

![image](https://user-images.githubusercontent.com/91140113/190641824-9aff164b-5c64-4a47-bd0f-48d00588a298.png)
![image](https://user-images.githubusercontent.com/91140113/190641878-dbff7bf9-9123-4b14-9273-25ee9aac2bb2.png)
